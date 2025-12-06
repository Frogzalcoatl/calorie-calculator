#include "CalorieCalculatorForm.h"
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
using namespace Assignment8COP3003;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CalorieCalculatorForm form;
    Application::Run(% form);
}

bool CalorieCalculatorForm::isValidSubmission() {
    if (!this->genderButtonMale->Checked && !this->genderButtonFemale->Checked) {
        this->errorMessageLabel->Text = "Must select a gender";
        return false;
    }
    if (this->heightFeetNumeric->Value == 0 && this->heightInchesNumeric->Value == 0) {
        this->errorMessageLabel->Text = "Enter a valid height";
        return false;
    }
    // Below equals -1 when user does not select option from dropdown
    if (this->activityDropdown->SelectedIndex == -1) {
        this->errorMessageLabel->Text = "Select an activity level";
        return false;
    }
    return true;
}

static unsigned long long calculateBMR(bool isMale, const int weightLbsInput, const int heightFeetInput, const int heightInchesInput, const int ageInput, const double activityLevelMultiplier) {
    // Using the Mifflin-St Jeor Equation for BMR (Basal Metabolic Rate)
    // Source: https://www.calculator.net/calorie-calculator.html
    unsigned long long bmr = 0;
    double weightKg = weightLbsInput * 0.4535924;
    long long heightCm = heightFeetInput * 30.48 + heightInchesInput * 2.54;
    int age = ageInput;
    bmr = (10 * weightKg) + (6.25 * heightCm) - (5 * age);
    if (isMale) {
        bmr += 5;
    } else {
        bmr -= 161;
    }
    bmr *= activityLevelMultiplier;
    return bmr;
}

void CalorieCalculatorForm::displayResults(const unsigned long long maintenenceCalories) {
    this->maintainWeightLabel->Text = maintenenceCalories.ToString() + " Calories/day (100%)";
    this->mildWeightLossLabel->Text = (round(maintenenceCalories * 0.93)).ToString() + " Calories/day (93%)";
    this->weightLossLabel->Text = (round(maintenenceCalories * 0.86)).ToString() + " Calories/day (86%)";
    this->extremeWeightLossLabel->Text = (round(maintenenceCalories * 0.73)).ToString() + " Calories/day (73%)";
    this->mildWeightGainLabel->Text = (round(maintenenceCalories * 1.07)).ToString() + " Calories/day (107%)";
    this->weightGainLabel->Text = (round(maintenenceCalories * 1.14)).ToString() + " Calories/day (114%)";
    this->fastWeightGainLabel->Text = (round(maintenenceCalories * 1.27)).ToString() + " Calories/day (127%)";
    this->inputPanel->Visible = false;
    this->resultsPanel->Visible = true;
}

static double getActivityLevelMultiplier(int dropdownIndex) {
    switch (dropdownIndex) {
        case 0: return 1.0;
        case 1: return 1.2;
        case 2: return 1.375;
        case 3: return 1.465;
        case 4: return 1.55;
        case 5: return 1.725;
        case 6: return 1.9;
        default: return 1.0;
    }
}

void CalorieCalculatorForm::submitButton_Click(Object^ sender, EventArgs^ e) {
    bool isValidSubmissionResult = this->isValidSubmission();
    this->errorMessageLabel->Visible = !isValidSubmissionResult;
    if (!isValidSubmissionResult) {
        return;
    }
    const double activityLevelMultiplier = getActivityLevelMultiplier(this->activityDropdown->SelectedIndex);
    const unsigned long long maintenenceCalories = calculateBMR(
        this->genderButtonMale->Checked, (int)this->weightNumeric->Value, (int)this->heightFeetNumeric->Value,
        (int)this->heightInchesNumeric->Value, (int)this->ageNumeric->Value, activityLevelMultiplier
    );
    this->displayResults(maintenenceCalories);
}

void CalorieCalculatorForm::returnButton_Click(System::Object^ sender, System::EventArgs^ e) {
    this->inputPanel->Visible = true;
    this->resultsPanel->Visible = false;
}