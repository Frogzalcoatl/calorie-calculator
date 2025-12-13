#pragma once

namespace Assignment8COP3003 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class CalorieCalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalorieCalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalorieCalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ resultsPanel;
	private: System::Windows::Forms::Label^ activityLabel;
	private: System::Windows::Forms::ComboBox^ activityDropdown;
	private: System::Windows::Forms::Label^ poundsLabel;
	private: System::Windows::Forms::NumericUpDown^ weightLbsNumeric;

	private: System::Windows::Forms::Label^ heightInchesLabel;
	private: System::Windows::Forms::NumericUpDown^ heightInchesNumeric;
	private: System::Windows::Forms::Label^ heightFeetLabel;
	private: System::Windows::Forms::NumericUpDown^ heightFeetNumeric;
	private: System::Windows::Forms::Label^ genderLabel;
	private: System::Windows::Forms::Label^ ageRangeLabel;
	private: System::Windows::Forms::NumericUpDown^ ageNumeric;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Label^ weightLabel;
	private: System::Windows::Forms::Label^ heightLabel;
	private: System::Windows::Forms::Label^ ageLabel;
	private: System::Windows::Forms::Panel^ inputPanel;
	private: System::Windows::Forms::RadioButton^ genderButtonFemale;
	private: System::Windows::Forms::RadioButton^ genderButtonMale;
	private: System::Windows::Forms::Label^ errorMessageLabel;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ maintainWeightLabel;
	private: System::Windows::Forms::Label^ fastWeightGainLabel;
	private: System::Windows::Forms::Label^ weightGainLabel;
	private: System::Windows::Forms::Label^ mildWeightGainLabel;
	private: System::Windows::Forms::Label^ extremeWeightLossLabel;
	private: System::Windows::Forms::Label^ weightLossLabel;
	private: System::Windows::Forms::Label^ mildWeightLossLabel;
	private: System::Windows::Forms::Button^ returnButton;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ USUnitsTab;
	private: System::Windows::Forms::TabPage^ MetricUnitsTab;

	private: System::Windows::Forms::Label^ heightCmLabel;
	private: System::Windows::Forms::NumericUpDown^ weightKgNumeric;

	private: System::Windows::Forms::Label^ weightKgLabel;

	private: System::Windows::Forms::NumericUpDown^ heightCmNumeric;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->resultsPanel = (gcnew System::Windows::Forms::Panel());
			this->returnButton = (gcnew System::Windows::Forms::Button());
			this->fastWeightGainLabel = (gcnew System::Windows::Forms::Label());
			this->weightGainLabel = (gcnew System::Windows::Forms::Label());
			this->mildWeightGainLabel = (gcnew System::Windows::Forms::Label());
			this->extremeWeightLossLabel = (gcnew System::Windows::Forms::Label());
			this->weightLossLabel = (gcnew System::Windows::Forms::Label());
			this->mildWeightLossLabel = (gcnew System::Windows::Forms::Label());
			this->maintainWeightLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->inputPanel = (gcnew System::Windows::Forms::Panel());
			this->errorMessageLabel = (gcnew System::Windows::Forms::Label());
			this->genderButtonFemale = (gcnew System::Windows::Forms::RadioButton());
			this->genderButtonMale = (gcnew System::Windows::Forms::RadioButton());
			this->ageRangeLabel = (gcnew System::Windows::Forms::Label());
			this->ageNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->genderLabel = (gcnew System::Windows::Forms::Label());
			this->activityDropdown = (gcnew System::Windows::Forms::ComboBox());
			this->activityLabel = (gcnew System::Windows::Forms::Label());
			this->ageLabel = (gcnew System::Windows::Forms::Label());
			this->heightLabel = (gcnew System::Windows::Forms::Label());
			this->weightLabel = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->USUnitsTab = (gcnew System::Windows::Forms::TabPage());
			this->heightInchesLabel = (gcnew System::Windows::Forms::Label());
			this->poundsLabel = (gcnew System::Windows::Forms::Label());
			this->heightFeetLabel = (gcnew System::Windows::Forms::Label());
			this->weightLbsNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->heightInchesNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->heightFeetNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->MetricUnitsTab = (gcnew System::Windows::Forms::TabPage());
			this->weightKgLabel = (gcnew System::Windows::Forms::Label());
			this->heightCmNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->weightKgNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->heightCmLabel = (gcnew System::Windows::Forms::Label());
			this->resultsPanel->SuspendLayout();
			this->inputPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageNumeric))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->USUnitsTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightLbsNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightInchesNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightFeetNumeric))->BeginInit();
			this->MetricUnitsTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightCmNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightKgNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// resultsPanel
			// 
			this->resultsPanel->Controls->Add(this->returnButton);
			this->resultsPanel->Controls->Add(this->fastWeightGainLabel);
			this->resultsPanel->Controls->Add(this->weightGainLabel);
			this->resultsPanel->Controls->Add(this->mildWeightGainLabel);
			this->resultsPanel->Controls->Add(this->extremeWeightLossLabel);
			this->resultsPanel->Controls->Add(this->weightLossLabel);
			this->resultsPanel->Controls->Add(this->mildWeightLossLabel);
			this->resultsPanel->Controls->Add(this->maintainWeightLabel);
			this->resultsPanel->Controls->Add(this->label6);
			this->resultsPanel->Controls->Add(this->label5);
			this->resultsPanel->Controls->Add(this->label4);
			this->resultsPanel->Controls->Add(this->label3);
			this->resultsPanel->Controls->Add(this->label2);
			this->resultsPanel->Controls->Add(this->label1);
			this->resultsPanel->Controls->Add(this->label20);
			this->resultsPanel->Controls->Add(this->label19);
			this->resultsPanel->Controls->Add(this->label18);
			this->resultsPanel->Controls->Add(this->label17);
			this->resultsPanel->Controls->Add(this->label16);
			this->resultsPanel->Controls->Add(this->label15);
			this->resultsPanel->Controls->Add(this->label14);
			this->resultsPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultsPanel->Location = System::Drawing::Point(0, 0);
			this->resultsPanel->Name = L"resultsPanel";
			this->resultsPanel->Size = System::Drawing::Size(733, 409);
			this->resultsPanel->TabIndex = 18;
			this->resultsPanel->Visible = false;
			// 
			// returnButton
			// 
			this->returnButton->BackColor = System::Drawing::Color::Black;
			this->returnButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->returnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->returnButton->Location = System::Drawing::Point(10, 350);
			this->returnButton->Margin = System::Windows::Forms::Padding(6);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(150, 44);
			this->returnButton->TabIndex = 56;
			this->returnButton->Text = L"Return";
			this->returnButton->UseVisualStyleBackColor = false;
			this->returnButton->Click += gcnew System::EventHandler(this, &CalorieCalculatorForm::returnButton_Click);
			// 
			// fastWeightGainLabel
			// 
			this->fastWeightGainLabel->AutoSize = true;
			this->fastWeightGainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fastWeightGainLabel->Location = System::Drawing::Point(241, 273);
			this->fastWeightGainLabel->Name = L"fastWeightGainLabel";
			this->fastWeightGainLabel->Size = System::Drawing::Size(56, 25);
			this->fastWeightGainLabel->TabIndex = 55;
			this->fastWeightGainLabel->Text = L"num";
			// 
			// weightGainLabel
			// 
			this->weightGainLabel->AutoSize = true;
			this->weightGainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weightGainLabel->Location = System::Drawing::Point(241, 228);
			this->weightGainLabel->Name = L"weightGainLabel";
			this->weightGainLabel->Size = System::Drawing::Size(56, 25);
			this->weightGainLabel->TabIndex = 54;
			this->weightGainLabel->Text = L"num";
			// 
			// mildWeightGainLabel
			// 
			this->mildWeightGainLabel->AutoSize = true;
			this->mildWeightGainLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mildWeightGainLabel->Location = System::Drawing::Point(241, 183);
			this->mildWeightGainLabel->Name = L"mildWeightGainLabel";
			this->mildWeightGainLabel->Size = System::Drawing::Size(56, 25);
			this->mildWeightGainLabel->TabIndex = 53;
			this->mildWeightGainLabel->Text = L"num";
			// 
			// extremeWeightLossLabel
			// 
			this->extremeWeightLossLabel->AutoSize = true;
			this->extremeWeightLossLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->extremeWeightLossLabel->Location = System::Drawing::Point(241, 138);
			this->extremeWeightLossLabel->Name = L"extremeWeightLossLabel";
			this->extremeWeightLossLabel->Size = System::Drawing::Size(56, 25);
			this->extremeWeightLossLabel->TabIndex = 52;
			this->extremeWeightLossLabel->Text = L"num";
			// 
			// weightLossLabel
			// 
			this->weightLossLabel->AutoSize = true;
			this->weightLossLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weightLossLabel->Location = System::Drawing::Point(241, 93);
			this->weightLossLabel->Name = L"weightLossLabel";
			this->weightLossLabel->Size = System::Drawing::Size(56, 25);
			this->weightLossLabel->TabIndex = 51;
			this->weightLossLabel->Text = L"num";
			// 
			// mildWeightLossLabel
			// 
			this->mildWeightLossLabel->AutoSize = true;
			this->mildWeightLossLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mildWeightLossLabel->Location = System::Drawing::Point(241, 48);
			this->mildWeightLossLabel->Name = L"mildWeightLossLabel";
			this->mildWeightLossLabel->Size = System::Drawing::Size(56, 25);
			this->mildWeightLossLabel->TabIndex = 50;
			this->mildWeightLossLabel->Text = L"num";
			// 
			// maintainWeightLabel
			// 
			this->maintainWeightLabel->AutoSize = true;
			this->maintainWeightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maintainWeightLabel->Location = System::Drawing::Point(241, 9);
			this->maintainWeightLabel->Name = L"maintainWeightLabel";
			this->maintainWeightLabel->Size = System::Drawing::Size(56, 25);
			this->maintainWeightLabel->TabIndex = 49;
			this->maintainWeightLabel->Text = L"num";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gainsboro;
			this->label6->Location = System::Drawing::Point(6, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 48;
			this->label6->Text = L"2 lb/week";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gainsboro;
			this->label5->Location = System::Drawing::Point(6, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 47;
			this->label5->Text = L"1 lb/week";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gainsboro;
			this->label4->Location = System::Drawing::Point(6, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 20);
			this->label4->TabIndex = 46;
			this->label4->Text = L"0.5 lb/week";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(6, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 45;
			this->label3->Text = L"2 lb/week";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(6, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 44;
			this->label2->Text = L"1 lb/week";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(6, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 20);
			this->label1->TabIndex = 43;
			this->label1->Text = L"0.5 lb/week";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(5, 273);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(184, 25);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Fast Weight Gain:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 228);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(132, 25);
			this->label19->TabIndex = 41;
			this->label19->Text = L"Weight gain:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 183);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(173, 25);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Mild weight gain:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 138);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(210, 25);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Extreme weight loss:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 93);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 25);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Weight loss:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 48);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(171, 25);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Mild weight loss:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(168, 25);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Maintain weight:";
			// 
			// inputPanel
			// 
			this->inputPanel->Controls->Add(this->errorMessageLabel);
			this->inputPanel->Controls->Add(this->genderButtonFemale);
			this->inputPanel->Controls->Add(this->genderButtonMale);
			this->inputPanel->Controls->Add(this->ageRangeLabel);
			this->inputPanel->Controls->Add(this->ageNumeric);
			this->inputPanel->Controls->Add(this->submitButton);
			this->inputPanel->Controls->Add(this->genderLabel);
			this->inputPanel->Controls->Add(this->activityDropdown);
			this->inputPanel->Controls->Add(this->activityLabel);
			this->inputPanel->Controls->Add(this->ageLabel);
			this->inputPanel->Controls->Add(this->heightLabel);
			this->inputPanel->Controls->Add(this->weightLabel);
			this->inputPanel->Controls->Add(this->tabControl1);
			this->inputPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->inputPanel->Location = System::Drawing::Point(0, 0);
			this->inputPanel->Name = L"inputPanel";
			this->inputPanel->Size = System::Drawing::Size(733, 409);
			this->inputPanel->TabIndex = 35;
			// 
			// errorMessageLabel
			// 
			this->errorMessageLabel->AutoSize = true;
			this->errorMessageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->errorMessageLabel->ForeColor = System::Drawing::Color::Red;
			this->errorMessageLabel->Location = System::Drawing::Point(27, 341);
			this->errorMessageLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->errorMessageLabel->Name = L"errorMessageLabel";
			this->errorMessageLabel->Size = System::Drawing::Size(52, 24);
			this->errorMessageLabel->TabIndex = 37;
			this->errorMessageLabel->Text = L"Error";
			this->errorMessageLabel->Visible = false;
			// 
			// genderButtonFemale
			// 
			this->genderButtonFemale->AutoSize = true;
			this->genderButtonFemale->Location = System::Drawing::Point(222, 104);
			this->genderButtonFemale->Name = L"genderButtonFemale";
			this->genderButtonFemale->Size = System::Drawing::Size(101, 29);
			this->genderButtonFemale->TabIndex = 36;
			this->genderButtonFemale->TabStop = true;
			this->genderButtonFemale->Text = L"Female";
			this->genderButtonFemale->UseVisualStyleBackColor = true;
			// 
			// genderButtonMale
			// 
			this->genderButtonMale->AutoSize = true;
			this->genderButtonMale->Location = System::Drawing::Point(128, 104);
			this->genderButtonMale->Name = L"genderButtonMale";
			this->genderButtonMale->Size = System::Drawing::Size(77, 29);
			this->genderButtonMale->TabIndex = 35;
			this->genderButtonMale->TabStop = true;
			this->genderButtonMale->Text = L"Male";
			this->genderButtonMale->UseVisualStyleBackColor = true;
			// 
			// ageRangeLabel
			// 
			this->ageRangeLabel->AutoSize = true;
			this->ageRangeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageRangeLabel->Location = System::Drawing::Point(258, 55);
			this->ageRangeLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->ageRangeLabel->Name = L"ageRangeLabel";
			this->ageRangeLabel->Size = System::Drawing::Size(120, 25);
			this->ageRangeLabel->TabIndex = 23;
			this->ageRangeLabel->Text = L"ages 15-80";
			// 
			// ageNumeric
			// 
			this->ageNumeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageNumeric->Location = System::Drawing::Point(128, 49);
			this->ageNumeric->Margin = System::Windows::Forms::Padding(6);
			this->ageNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			this->ageNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->ageNumeric->Name = L"ageNumeric";
			this->ageNumeric->Size = System::Drawing::Size(106, 31);
			this->ageNumeric->TabIndex = 22;
			this->ageNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::Color::Black;
			this->submitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(304, 330);
			this->submitButton->Margin = System::Windows::Forms::Padding(6);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(150, 44);
			this->submitButton->TabIndex = 21;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &CalorieCalculatorForm::submitButton_Click);
			// 
			// genderLabel
			// 
			this->genderLabel->AutoSize = true;
			this->genderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genderLabel->Location = System::Drawing::Point(11, 104);
			this->genderLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->genderLabel->Name = L"genderLabel";
			this->genderLabel->Size = System::Drawing::Size(83, 25);
			this->genderLabel->TabIndex = 25;
			this->genderLabel->Text = L"Gender";
			// 
			// activityDropdown
			// 
			this->activityDropdown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->activityDropdown->FormattingEnabled = true;
			this->activityDropdown->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Basal Metabolic Rate (BMR)", L"Sedentary: little or no exercise",
					L"Light: exercise 1-3 times/week", L"Moderate: exercise 4-5 times/week", L"Active: daily exercise or intense exercise 3-4 times/week",
					L"Very Active: intense exercise 6-7 times/week", L"Extra Active: very intense exercise daily, or physical job"
			});
			this->activityDropdown->Location = System::Drawing::Point(128, 250);
			this->activityDropdown->Name = L"activityDropdown";
			this->activityDropdown->Size = System::Drawing::Size(569, 33);
			this->activityDropdown->TabIndex = 33;
			// 
			// activityLabel
			// 
			this->activityLabel->AutoSize = true;
			this->activityLabel->Location = System::Drawing::Point(11, 250);
			this->activityLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->activityLabel->Name = L"activityLabel";
			this->activityLabel->Size = System::Drawing::Size(81, 25);
			this->activityLabel->TabIndex = 34;
			this->activityLabel->Text = L"Activity";
			// 
			// ageLabel
			// 
			this->ageLabel->AutoSize = true;
			this->ageLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageLabel->Location = System::Drawing::Point(11, 50);
			this->ageLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(50, 25);
			this->ageLabel->TabIndex = 18;
			this->ageLabel->Text = L"Age";
			// 
			// heightLabel
			// 
			this->heightLabel->AutoSize = true;
			this->heightLabel->Location = System::Drawing::Point(11, 157);
			this->heightLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->heightLabel->Name = L"heightLabel";
			this->heightLabel->Size = System::Drawing::Size(74, 25);
			this->heightLabel->TabIndex = 19;
			this->heightLabel->Text = L"Height";
			// 
			// weightLabel
			// 
			this->weightLabel->AutoSize = true;
			this->weightLabel->Location = System::Drawing::Point(11, 200);
			this->weightLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->weightLabel->Name = L"weightLabel";
			this->weightLabel->Size = System::Drawing::Size(79, 25);
			this->weightLabel->TabIndex = 20;
			this->weightLabel->Text = L"Weight";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->USUnitsTab);
			this->tabControl1->Controls->Add(this->MetricUnitsTab);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 408);
			this->tabControl1->TabIndex = 36;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &CalorieCalculatorForm::tabControl1_SelectedIndexChanged);
			// 
			// USUnitsTab
			// 
			this->USUnitsTab->BackColor = System::Drawing::Color::DimGray;
			this->USUnitsTab->Controls->Add(this->heightInchesLabel);
			this->USUnitsTab->Controls->Add(this->poundsLabel);
			this->USUnitsTab->Controls->Add(this->heightFeetLabel);
			this->USUnitsTab->Controls->Add(this->weightLbsNumeric);
			this->USUnitsTab->Controls->Add(this->heightInchesNumeric);
			this->USUnitsTab->Controls->Add(this->heightFeetNumeric);
			this->USUnitsTab->Location = System::Drawing::Point(4, 34);
			this->USUnitsTab->Name = L"USUnitsTab";
			this->USUnitsTab->Padding = System::Windows::Forms::Padding(3);
			this->USUnitsTab->Size = System::Drawing::Size(724, 370);
			this->USUnitsTab->TabIndex = 0;
			this->USUnitsTab->Text = L"US Units";
			// 
			// heightInchesLabel
			// 
			this->heightInchesLabel->AutoSize = true;
			this->heightInchesLabel->Location = System::Drawing::Point(363, 125);
			this->heightInchesLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->heightInchesLabel->Name = L"heightInchesLabel";
			this->heightInchesLabel->Size = System::Drawing::Size(75, 25);
			this->heightInchesLabel->TabIndex = 30;
			this->heightInchesLabel->Text = L"Inches";
			// 
			// poundsLabel
			// 
			this->poundsLabel->AutoSize = true;
			this->poundsLabel->Location = System::Drawing::Point(234, 175);
			this->poundsLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->poundsLabel->Name = L"poundsLabel";
			this->poundsLabel->Size = System::Drawing::Size(85, 25);
			this->poundsLabel->TabIndex = 32;
			this->poundsLabel->Text = L"Pounds";
			// 
			// heightFeetLabel
			// 
			this->heightFeetLabel->AutoSize = true;
			this->heightFeetLabel->Location = System::Drawing::Point(211, 125);
			this->heightFeetLabel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->heightFeetLabel->Name = L"heightFeetLabel";
			this->heightFeetLabel->Size = System::Drawing::Size(55, 25);
			this->heightFeetLabel->TabIndex = 28;
			this->heightFeetLabel->Text = L"Feet";
			// 
			// weightLbsNumeric
			// 
			this->weightLbsNumeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->weightLbsNumeric->Location = System::Drawing::Point(124, 166);
			this->weightLbsNumeric->Margin = System::Windows::Forms::Padding(6);
			this->weightLbsNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->weightLbsNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->weightLbsNumeric->Name = L"weightLbsNumeric";
			this->weightLbsNumeric->Size = System::Drawing::Size(106, 31);
			this->weightLbsNumeric->TabIndex = 31;
			this->weightLbsNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			// 
			// heightInchesNumeric
			// 
			this->heightInchesNumeric->Location = System::Drawing::Point(280, 118);
			this->heightInchesNumeric->Name = L"heightInchesNumeric";
			this->heightInchesNumeric->Size = System::Drawing::Size(80, 31);
			this->heightInchesNumeric->TabIndex = 29;
			this->heightInchesNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// heightFeetNumeric
			// 
			this->heightFeetNumeric->Location = System::Drawing::Point(124, 118);
			this->heightFeetNumeric->Name = L"heightFeetNumeric";
			this->heightFeetNumeric->Size = System::Drawing::Size(80, 31);
			this->heightFeetNumeric->TabIndex = 27;
			this->heightFeetNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// MetricUnitsTab
			// 
			this->MetricUnitsTab->BackColor = System::Drawing::Color::DimGray;
			this->MetricUnitsTab->Controls->Add(this->weightKgLabel);
			this->MetricUnitsTab->Controls->Add(this->heightCmNumeric);
			this->MetricUnitsTab->Controls->Add(this->weightKgNumeric);
			this->MetricUnitsTab->Controls->Add(this->heightCmLabel);
			this->MetricUnitsTab->ForeColor = System::Drawing::Color::White;
			this->MetricUnitsTab->Location = System::Drawing::Point(4, 34);
			this->MetricUnitsTab->Name = L"MetricUnitsTab";
			this->MetricUnitsTab->Padding = System::Windows::Forms::Padding(3);
			this->MetricUnitsTab->Size = System::Drawing::Size(724, 370);
			this->MetricUnitsTab->TabIndex = 1;
			this->MetricUnitsTab->Text = L"Metric Units";
			// 
			// weightKgLabel
			// 
			this->weightKgLabel->AutoSize = true;
			this->weightKgLabel->Location = System::Drawing::Point(234, 173);
			this->weightKgLabel->Name = L"weightKgLabel";
			this->weightKgLabel->Size = System::Drawing::Size(35, 25);
			this->weightKgLabel->TabIndex = 34;
			this->weightKgLabel->Text = L"kg";
			// 
			// heightCmNumeric
			// 
			this->heightCmNumeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->heightCmNumeric->Location = System::Drawing::Point(124, 118);
			this->heightCmNumeric->Margin = System::Windows::Forms::Padding(6);
			this->heightCmNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3302, 0, 0, 0 });
			this->heightCmNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->heightCmNumeric->Name = L"heightCmNumeric";
			this->heightCmNumeric->Size = System::Drawing::Size(106, 31);
			this->heightCmNumeric->TabIndex = 33;
			this->heightCmNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			// 
			// weightKgNumeric
			// 
			this->weightKgNumeric->DecimalPlaces = 1;
			this->weightKgNumeric->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->weightKgNumeric->Location = System::Drawing::Point(124, 166);
			this->weightKgNumeric->Margin = System::Windows::Forms::Padding(6);
			this->weightKgNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 908, 0, 0, 0 });
			this->weightKgNumeric->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->weightKgNumeric->Name = L"weightKgNumeric";
			this->weightKgNumeric->Size = System::Drawing::Size(106, 31);
			this->weightKgNumeric->TabIndex = 32;
			this->weightKgNumeric->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65, 0, 0, 0 });
			// 
			// heightCmLabel
			// 
			this->heightCmLabel->AutoSize = true;
			this->heightCmLabel->Location = System::Drawing::Point(232, 127);
			this->heightCmLabel->Name = L"heightCmLabel";
			this->heightCmLabel->Size = System::Drawing::Size(40, 25);
			this->heightCmLabel->TabIndex = 0;
			this->heightCmLabel->Text = L"cm";
			// 
			// CalorieCalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(733, 409);
			this->Controls->Add(this->inputPanel);
			this->Controls->Add(this->resultsPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"CalorieCalculatorForm";
			this->Text = L"CalorieCalculator";
			this->resultsPanel->ResumeLayout(false);
			this->resultsPanel->PerformLayout();
			this->inputPanel->ResumeLayout(false);
			this->inputPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageNumeric))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->USUnitsTab->ResumeLayout(false);
			this->USUnitsTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightLbsNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightInchesNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightFeetNumeric))->EndInit();
			this->MetricUnitsTab->ResumeLayout(false);
			this->MetricUnitsTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->heightCmNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightKgNumeric))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool isValidSubmission();
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void displayResults(const unsigned long long maintenenceCalories);
	private: System::Void returnButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateUSTab();
	private: System::Void updateMetricTab();
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
