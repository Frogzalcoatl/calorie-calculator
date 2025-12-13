#include "CalorieCalculatorForm.h"
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
using namespace Assignment8COP3003;

[STAThreadAttribute]
// STA = Single Threaded Apartment
// Winforms is old and requires STA
// Certain features can cause crashes if the program is not forced to STA
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CalorieCalculatorForm form;
    Application::Run(% form);
    return 0;
}

enum UnitsTabs {
    US,
    Metric
};

bool CalorieCalculatorForm::isValidSubmission() {
    if (!this->genderButtonMale->Checked && !this->genderButtonFemale->Checked) {
        this->errorMessageLabel->Text = "Must select a gender";
        return false;
    }
    if (
        this->tabControl1->SelectedIndex == UnitsTabs::US && 
        this->heightFeetNumeric->Value == 0 &&
        this->heightInchesNumeric->Value == 0
        ) {
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

static unsigned int USToMetricHeightCm(const unsigned int feet, const unsigned int inches) {
    return round(feet * 30.48 + inches * 2.54);
}

static double USToMetricWeightKg(const unsigned int lbs) {
    return lbs * 0.4535924;
}

static unsigned int metricToUSHeightInches(const unsigned int cm) {
    return round(cm * 0.3937008);
}

static unsigned int metricToUSWeightLbs(const double kg) {
    return round(kg * 2.204623);
}

static unsigned long long calculateBMRUnitsMetric(const bool isMale, const double weightKg, const unsigned int heightCm, const unsigned int age, const double activityLevelMultiplier) {
    // Using the Mifflin-St Jeor Equation for BMR (Basal Metabolic Rate)
    // Source: https://www.calculator.net/calorie-calculator.html
    unsigned long long bmr = 0;
    bmr = (10 * weightKg) + (6.25 * heightCm) - (5 * age);
    if (isMale) {
        bmr += 5;
    } else {
        bmr -= 161;
    }
    bmr *= activityLevelMultiplier;
    return bmr;
}

static unsigned long long calculateBMRUnitsUS(const bool isMale, const double weightLbs, const unsigned int heightFeet, const unsigned int heightInches, const unsigned int age, const double activityLevelMultiplier) {
    const double weightKg = USToMetricWeightKg(weightLbs);
    const unsigned int heightCm = USToMetricHeightCm(heightFeet, heightInches);
    return calculateBMRUnitsMetric(isMale, weightKg, heightCm, age, activityLevelMultiplier);
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
    unsigned long long maintenenceCalories = 0;
    switch (this->tabControl1->SelectedIndex) {
        case UnitsTabs::US:
            maintenenceCalories = calculateBMRUnitsUS(
                this->genderButtonMale->Checked, (double)this->weightLbsNumeric->Value, (unsigned int)this->heightFeetNumeric->Value,
                (unsigned int)this->heightInchesNumeric->Value, (unsigned int)this->ageNumeric->Value, activityLevelMultiplier
            );
            break;
        case UnitsTabs::Metric:
            maintenenceCalories = calculateBMRUnitsMetric(
                this->genderButtonMale->Checked, (double)this->weightKgNumeric->Value, (unsigned int)this->heightCmNumeric->Value,
                (unsigned int)this->ageNumeric->Value, activityLevelMultiplier
            );
            break;
        default:
            this->errorMessageLabel->Text = "Invalid Units Tab";
            return;
    }
    this->displayResults(maintenenceCalories);
}

void CalorieCalculatorForm::returnButton_Click(System::Object^ sender, System::EventArgs^ e) {
    this->inputPanel->Visible = true;
    this->resultsPanel->Visible = false;
}

void CalorieCalculatorForm::updateUSTab() {
    unsigned int heightInches = metricToUSHeightInches((unsigned int)this->heightCmNumeric->Value);
    unsigned int heightFeet = heightInches / 12;
    heightInches = heightInches % 12;
    this->heightInchesNumeric->Value = heightInches;
    this->heightFeetNumeric->Value = heightFeet;
    unsigned int weightLbs = metricToUSWeightLbs((double)this->weightKgNumeric->Value);
    this->weightLbsNumeric->Value = weightLbs;
}

void CalorieCalculatorForm::updateMetricTab() {
    unsigned int heightCm = USToMetricHeightCm((unsigned int)this->heightFeetNumeric->Value, (unsigned int)this->heightInchesNumeric->Value);
    this->heightCmNumeric->Value = heightCm;
    unsigned int weightKg = USToMetricWeightKg((unsigned int)this->weightLbsNumeric->Value);
    this->weightKgNumeric->Value = weightKg;
}

void CalorieCalculatorForm::tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    switch (this->tabControl1->SelectedIndex) {
        case UnitsTabs::US: this->updateUSTab(); break;
        case UnitsTabs::Metric: this->updateMetricTab(); break;
    }
}