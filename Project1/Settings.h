#pragma once
#include "Form4.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
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
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ ConfirmButton;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ diet5;
	private: System::Windows::Forms::Button^ DietConfirmButton;
	private: System::Windows::Forms::RadioButton^ diet4;
	private: System::Windows::Forms::RadioButton^ diet3;
	private: System::Windows::Forms::RadioButton^ diet2;
	private: System::Windows::Forms::RadioButton^ diet1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ WorkOutConfirmButton;
	private: System::Windows::Forms::RadioButton^ WorkOutButton2;
	private: System::Windows::Forms::RadioButton^ WorkOutButton3;
	private: System::Windows::Forms::RadioButton^ WorkOutButton1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ MedDoneButton;

	private: System::Windows::Forms::Button^ EnterMed;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox6;

	private: System::Windows::Forms::Button^ DetailsDoneButton;
	private: System::Windows::Forms::Button^ SaveNewDetails;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Button^ ChangeDets2;




	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ConfirmButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->diet5 = (gcnew System::Windows::Forms::RadioButton());
			this->DietConfirmButton = (gcnew System::Windows::Forms::Button());
			this->diet4 = (gcnew System::Windows::Forms::RadioButton());
			this->diet3 = (gcnew System::Windows::Forms::RadioButton());
			this->diet2 = (gcnew System::Windows::Forms::RadioButton());
			this->diet1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->WorkOutConfirmButton = (gcnew System::Windows::Forms::Button());
			this->WorkOutButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->WorkOutButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->WorkOutButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->EnterMed = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MedDoneButton = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->DetailsDoneButton = (gcnew System::Windows::Forms::Button());
			this->SaveNewDetails = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ChangeDets2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->StartPosition = FormStartPosition::CenterScreen;
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(5, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(696, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Templates";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Settings::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(5, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(696, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Diet Plans";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Settings::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(5, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(696, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Work Out Plans";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Settings::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(5, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(696, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Medical Details";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Settings::button4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(78, 23);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Settings::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(6, 48);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 23);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"9-5 Worker";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Settings::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(6, 77);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(100, 23);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Housewife";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Visible = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Settings::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(6, 106);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(114, 23);
			this->radioButton4->TabIndex = 8;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Entrepreneur";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Visible = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Settings::radioButton4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->groupBox1->Controls->Add(this->ConfirmButton);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(178, 54);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(306, 251);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Templates";
			this->groupBox1->Visible = false;
			// 
			// ConfirmButton
			// 
			this->ConfirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->ConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmButton->Location = System::Drawing::Point(189, 152);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(84, 29);
			this->ConfirmButton->TabIndex = 16;
			this->ConfirmButton->Text = L"Confirm";
			this->ConfirmButton->UseVisualStyleBackColor = false;
			this->ConfirmButton->Visible = false;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &Settings::ConfirmButton_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(28, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 28);
			this->textBox2->TabIndex = 15;
			this->textBox2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 28);
			this->textBox1->TabIndex = 14;
			this->textBox1->Visible = false;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(152, 48);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(56, 18);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Custom";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->Visible = false;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Settings::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(79, 48);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(67, 18);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"University";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->Visible = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(19, 48);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(53, 18);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"School";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->groupBox2->Controls->Add(this->diet5);
			this->groupBox2->Controls->Add(this->DietConfirmButton);
			this->groupBox2->Controls->Add(this->diet4);
			this->groupBox2->Controls->Add(this->diet3);
			this->groupBox2->Controls->Add(this->diet2);
			this->groupBox2->Controls->Add(this->diet1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(178, 54);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(285, 251);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Diet Plans";
			this->groupBox2->Visible = false;
			// 
			// diet5
			// 
			this->diet5->AutoSize = true;
			this->diet5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diet5->Location = System::Drawing::Point(17, 168);
			this->diet5->Name = L"diet5";
			this->diet5->Size = System::Drawing::Size(110, 26);
			this->diet5->TabIndex = 18;
			this->diet5->TabStop = true;
			this->diet5->Text = L"DASH Diet";
			this->diet5->UseVisualStyleBackColor = true;
			this->diet5->Visible = false;
			// 
			// DietConfirmButton
			// 
			this->DietConfirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->DietConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DietConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DietConfirmButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DietConfirmButton->Location = System::Drawing::Point(197, 205);
			this->DietConfirmButton->Name = L"DietConfirmButton";
			this->DietConfirmButton->Size = System::Drawing::Size(84, 29);
			this->DietConfirmButton->TabIndex = 17;
			this->DietConfirmButton->Text = L"Confirm";
			this->DietConfirmButton->UseVisualStyleBackColor = false;
			this->DietConfirmButton->Visible = false;
			this->DietConfirmButton->Click += gcnew System::EventHandler(this, &Settings::DietConfirmButton_Click);
			// 
			// diet4
			// 
			this->diet4->AutoSize = true;
			this->diet4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diet4->Location = System::Drawing::Point(17, 135);
			this->diet4->Name = L"diet4";
			this->diet4->Size = System::Drawing::Size(108, 26);
			this->diet4->TabIndex = 3;
			this->diet4->TabStop = true;
			this->diet4->Text = L"Paleo Diet";
			this->diet4->UseVisualStyleBackColor = true;
			this->diet4->Visible = false;
			// 
			// diet3
			// 
			this->diet3->AutoSize = true;
			this->diet3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diet3->Location = System::Drawing::Point(17, 103);
			this->diet3->Name = L"diet3";
			this->diet3->Size = System::Drawing::Size(100, 26);
			this->diet3->TabIndex = 2;
			this->diet3->TabStop = true;
			this->diet3->Text = L"Keto Diet";
			this->diet3->UseVisualStyleBackColor = true;
			this->diet3->Visible = false;
			// 
			// diet2
			// 
			this->diet2->AutoSize = true;
			this->diet2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diet2->Location = System::Drawing::Point(17, 72);
			this->diet2->Name = L"diet2";
			this->diet2->Size = System::Drawing::Size(126, 26);
			this->diet2->TabIndex = 1;
			this->diet2->TabStop = true;
			this->diet2->Text = L"Low Fat Diet";
			this->diet2->UseVisualStyleBackColor = true;
			this->diet2->Visible = false;
			// 
			// diet1
			// 
			this->diet1->AutoSize = true;
			this->diet1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->diet1->Location = System::Drawing::Point(17, 42);
			this->diet1->Name = L"diet1";
			this->diet1->Size = System::Drawing::Size(156, 26);
			this->diet1->TabIndex = 0;
			this->diet1->TabStop = true;
			this->diet1->Text = L"Plant Based Diet";
			this->diet1->UseVisualStyleBackColor = true;
			this->diet1->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->groupBox3->Controls->Add(this->WorkOutConfirmButton);
			this->groupBox3->Controls->Add(this->WorkOutButton2);
			this->groupBox3->Controls->Add(this->WorkOutButton3);
			this->groupBox3->Controls->Add(this->WorkOutButton1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Location = System::Drawing::Point(178, 54);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(306, 245);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Work Out Plans";
			this->groupBox3->Visible = false;
			// 
			// WorkOutConfirmButton
			// 
			this->WorkOutConfirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->WorkOutConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->WorkOutConfirmButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->WorkOutConfirmButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WorkOutConfirmButton->Location = System::Drawing::Point(201, 202);
			this->WorkOutConfirmButton->Name = L"WorkOutConfirmButton";
			this->WorkOutConfirmButton->Size = System::Drawing::Size(84, 29);
			this->WorkOutConfirmButton->TabIndex = 18;
			this->WorkOutConfirmButton->Text = L"Confirm";
			this->WorkOutConfirmButton->UseVisualStyleBackColor = false;
			this->WorkOutConfirmButton->Visible = false;
			this->WorkOutConfirmButton->Click += gcnew System::EventHandler(this, &Settings::WorkOutConfirmButton_Click);
			// 
			// WorkOutButton2
			// 
			this->WorkOutButton2->AutoSize = true;
			this->WorkOutButton2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WorkOutButton2->Location = System::Drawing::Point(21, 93);
			this->WorkOutButton2->Name = L"WorkOutButton2";
			this->WorkOutButton2->Size = System::Drawing::Size(110, 26);
			this->WorkOutButton2->TabIndex = 2;
			this->WorkOutButton2->TabStop = true;
			this->WorkOutButton2->Text = L"Endurance";
			this->WorkOutButton2->UseVisualStyleBackColor = true;
			this->WorkOutButton2->Visible = false;
			// 
			// WorkOutButton3
			// 
			this->WorkOutButton3->AutoSize = true;
			this->WorkOutButton3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WorkOutButton3->Location = System::Drawing::Point(21, 131);
			this->WorkOutButton3->Name = L"WorkOutButton3";
			this->WorkOutButton3->Size = System::Drawing::Size(69, 26);
			this->WorkOutButton3->TabIndex = 1;
			this->WorkOutButton3->TabStop = true;
			this->WorkOutButton3->Text = L"Yoga";
			this->WorkOutButton3->UseVisualStyleBackColor = true;
			this->WorkOutButton3->Visible = false;
			// 
			// WorkOutButton1
			// 
			this->WorkOutButton1->AutoSize = true;
			this->WorkOutButton1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WorkOutButton1->Location = System::Drawing::Point(21, 54);
			this->WorkOutButton1->Name = L"WorkOutButton1";
			this->WorkOutButton1->Size = System::Drawing::Size(90, 26);
			this->WorkOutButton1->TabIndex = 0;
			this->WorkOutButton1->TabStop = true;
			this->WorkOutButton1->Text = L"General";
			this->WorkOutButton1->UseVisualStyleBackColor = true;
			this->WorkOutButton1->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(5, 180);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(696, 36);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Modify Details";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Settings::button6_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->groupBox4->Controls->Add(this->EnterMed);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->MedDoneButton);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox4->Location = System::Drawing::Point(178, 54);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(357, 231);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Medical Details";
			this->groupBox4->Visible = false;
			// 
			// EnterMed
			// 
			this->EnterMed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->EnterMed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EnterMed->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EnterMed->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterMed->Location = System::Drawing::Point(251, 138);
			this->EnterMed->Name = L"EnterMed";
			this->EnterMed->Size = System::Drawing::Size(84, 29);
			this->EnterMed->TabIndex = 24;
			this->EnterMed->Text = L"Enter";
			this->EnterMed->UseVisualStyleBackColor = false;
			this->EnterMed->Visible = false;
			this->EnterMed->Click += gcnew System::EventHandler(this, &Settings::EnterMed_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 17);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Time:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 17);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Medicine Name:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(215, 28);
			this->textBox4->TabIndex = 21;
			this->textBox4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(215, 28);
			this->textBox3->TabIndex = 20;
			this->textBox3->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 19);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Enter all your medical details";
			// 
			// MedDoneButton
			// 
			this->MedDoneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->MedDoneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MedDoneButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MedDoneButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MedDoneButton->Location = System::Drawing::Point(251, 180);
			this->MedDoneButton->Name = L"MedDoneButton";
			this->MedDoneButton->Size = System::Drawing::Size(84, 29);
			this->MedDoneButton->TabIndex = 18;
			this->MedDoneButton->Text = L"Done";
			this->MedDoneButton->UseVisualStyleBackColor = false;
			this->MedDoneButton->Visible = false;
			this->MedDoneButton->Click += gcnew System::EventHandler(this, &Settings::MedDoneButton_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->groupBox6->Controls->Add(this->DetailsDoneButton);
			this->groupBox6->Controls->Add(this->SaveNewDetails);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->ChangeDets2);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox6->Location = System::Drawing::Point(178, 54);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(377, 270);
			this->groupBox6->TabIndex = 25;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Change Details";
			this->groupBox6->Visible = false;
			// 
			// DetailsDoneButton
			// 
			this->DetailsDoneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->DetailsDoneButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DetailsDoneButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DetailsDoneButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DetailsDoneButton->Location = System::Drawing::Point(260, 231);
			this->DetailsDoneButton->Name = L"DetailsDoneButton";
			this->DetailsDoneButton->Size = System::Drawing::Size(84, 29);
			this->DetailsDoneButton->TabIndex = 28;
			this->DetailsDoneButton->Text = L"Done";
			this->DetailsDoneButton->UseVisualStyleBackColor = false;
			this->DetailsDoneButton->Visible = false;
			this->DetailsDoneButton->Click += gcnew System::EventHandler(this, &Settings::DetailsDoneButton_Click);
			// 
			// SaveNewDetails
			// 
			this->SaveNewDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->SaveNewDetails->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveNewDetails->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveNewDetails->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveNewDetails->Location = System::Drawing::Point(260, 231);
			this->SaveNewDetails->Name = L"SaveNewDetails";
			this->SaveNewDetails->Size = System::Drawing::Size(84, 29);
			this->SaveNewDetails->TabIndex = 27;
			this->SaveNewDetails->Text = L"Save";
			this->SaveNewDetails->UseVisualStyleBackColor = false;
			this->SaveNewDetails->Visible = false;
			this->SaveNewDetails->Click += gcnew System::EventHandler(this, &Settings::SaveNewDetails_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(140, 135);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(195, 25);
			this->textBox7->TabIndex = 26;
			this->textBox7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 19);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Confirm Password";
			this->label6->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(140, 90);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(195, 25);
			this->textBox6->TabIndex = 24;
			this->textBox6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 19);
			this->label5->TabIndex = 23;
			this->label5->Text = L"New Password";
			this->label5->Visible = false;
			// 
			// ChangeDets2
			// 
			this->ChangeDets2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->ChangeDets2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ChangeDets2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ChangeDets2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChangeDets2->Location = System::Drawing::Point(14, 37);
			this->ChangeDets2->Name = L"ChangeDets2";
			this->ChangeDets2->Size = System::Drawing::Size(329, 29);
			this->ChangeDets2->TabIndex = 20;
			this->ChangeDets2->Text = L"Change Password";
			this->ChangeDets2->UseVisualStyleBackColor = false;
			this->ChangeDets2->Visible = false;
			this->ChangeDets2->Click += gcnew System::EventHandler(this, &Settings::ChangeDets2_Click);
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(714, 356);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Settings";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Settings";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

//Templates Button
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox1->Show();
	this->radioButton1->Show();
	this->radioButton2->Show();
	this->radioButton3->Show();
	this->radioButton4->Show();
	this->ConfirmButton->Show();
	this->button2->Hide();
	this->button3->Hide();
	this->button4->Hide();
	this->button6->Hide();
}
	   //Entreprenure
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton5->Hide();
	this->radioButton6->Hide();
	this->radioButton7->Hide();
	this->textBox1->Hide();
	//og locations
	this->radioButton2->Location = System::Drawing::Point(6, 48); 
	this->radioButton3->Location = System::Drawing::Point(6, 77);
	this->radioButton4->Location = System::Drawing::Point(6, 106);
	//this->textBox2->Show();
	//textBox2->Text = "Enter Work Timings";
	//this->ConfirmButton->Location = System::Drawing::Point(191, 182);
}
	   //Student
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Hide();
	this->radioButton5->Show();
	this->radioButton6->Show();
	//this->radioButton7->Show();
	this->radioButton2->Location = System::Drawing::Point(6, 75);
	this->radioButton3->Location = System::Drawing::Point(6, 104);
	this->radioButton4->Location = System::Drawing::Point(6, 133);
	this->ConfirmButton->Location = System::Drawing::Point(191, 182);

}
	   //Student > Custom
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//this->textBox1->Show();
	//textBox1->Text = "Enter timings";
	//this->radioButton2->Location = System::Drawing::Point(6, 95);
	//this->radioButton3->Location = System::Drawing::Point(6, 124);
	//this->radioButton4->Location = System::Drawing::Point(6, 153);
	//this->ConfirmButton->Location = System::Drawing::Point(191, 202);
}
	   //9-5 Worker
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton5->Hide();
	this->radioButton6->Hide();
	this->radioButton7->Hide();
	this->textBox1->Hide();
	this->textBox2->Hide();
	this->radioButton2->Location = System::Drawing::Point(6, 48);
	this->radioButton3->Location = System::Drawing::Point(6, 77);
	this->radioButton4->Location = System::Drawing::Point(6, 106);
	this->ConfirmButton->Location = System::Drawing::Point(191, 162);
}
	   //Housewife
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton5->Hide();
	this->radioButton6->Hide();
	this->radioButton7->Hide();
	this->textBox1->Hide();
	this->textBox2->Hide();
	this->radioButton2->Location = System::Drawing::Point(6, 48);
	this->radioButton3->Location = System::Drawing::Point(6, 77);
	this->radioButton4->Location = System::Drawing::Point(6, 106);
	this->ConfirmButton->Location = System::Drawing::Point(191, 162);
}
	   //confirm template
private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Backend
	int count;
	routine r1;
	std::string uname;
	uname = r1.trueUsername();
	User user;
	ourSettings s1;
	r1.setUsername(uname);
	std::string temp = user.Template;
	count = GetLoginCount(uname);
	if (this->radioButton5->Checked == true) {
		s1.ModifyTemplate("SchoolStudent");
		switch (count) {
		case 0: r1.NewUserRoutine(1); break;
		default: r1.modifyUserRoutine(1); break;
		}
	}
	else if (this->radioButton6->Checked == true) {
		s1.ModifyTemplate("UniStudent");
		switch (count) {
		case 0: r1.NewUserRoutine(2); break;
		default: r1.modifyUserRoutine(2); break;
		}
	}
	else if (this->radioButton2->Checked == true) {
		s1.ModifyTemplate("9to5");
		switch (count) {
		case 0: r1.NewUserRoutine(3); break;
		default: r1.modifyUserRoutine(3); break;
		}
	}
	else if (this->radioButton3->Checked == true) {
		s1.ModifyTemplate("Housewife");
		switch (count) {
		case 0: r1.NewUserRoutine(4); break;
		default: r1.modifyUserRoutine(4); break;
		}
	}
	else if (this->radioButton4->Checked == true) {
		s1.ModifyTemplate("Entrepreneur");
		switch (count) {
		case 0: r1.NewUserRoutine(5); break;
		default: r1.modifyUserRoutine(5); break;
		}
	}
	IncrementLoginCount(uname);
	
	//GUI
	//hiding subcomponenets
	this->groupBox1->Hide();
	this->radioButton1->Hide();
	this->radioButton2->Hide();
	this->radioButton3->Hide();
	this->radioButton4->Hide();
	this->radioButton5->Hide();
	this->radioButton6->Hide();
	this->radioButton7->Hide();
	this->textBox1->Hide();
	this->textBox2->Hide();
	//showing buttons
	this->button2->Show();
	this->button3->Show();
	this->button4->Show();
	this->button6->Show();
}
	   //Diet Plans Button
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Hide();
	this->button3->Hide();
	this->button4->Hide();
	this->button6->Hide();
	this->button2->Location = System::Drawing::Point(5, 12);
	this->groupBox2->Show();
	this->diet1->Show();
	this->diet2->Show();
	this->diet3->Show();
	this->diet4->Show();
	this->diet5->Show();
	this->DietConfirmButton->Show();
}
private: System::Void DietConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ourSettings s2;
	if (this->diet1->Checked == true) {
		s2.ModifyDiet("PLANT");
	}
	else if (this->diet2->Checked == true) {
		s2.ModifyDiet("LOWFAT");
	}
	else if (this->diet3->Checked == true) {
		s2.ModifyDiet("KETO");
	}
	else if (this->diet4->Checked == true) {
		s2.ModifyDiet("DASH");
	}
	else if (this->diet5->Checked == true) {
		s2.ModifyDiet("PALEO");
	}
	//GUI
	this->groupBox2->Hide();
	this->diet1->Hide();
	this->diet2->Hide();
	this->diet3->Hide();
	this->diet4->Hide();
	this->diet5->Hide();
	this->DietConfirmButton->Hide();
	this->button2->Location = System::Drawing::Point(5, 54);
	this->button1->Show();
	this->button3->Show();
	this->button4->Show();
	this->button6->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Hide();
	this->button2->Hide();
	this->button4->Hide();
	this->button6->Hide();
	this->button3->Location = System::Drawing::Point(5, 12);
	this->groupBox3->Show();
	this->WorkOutButton1->Show();
	this->WorkOutButton2->Show();
	this->WorkOutButton3->Show();
	this->WorkOutConfirmButton->Show();
}
private: System::Void WorkOutConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Backend
	//std::string uname;
	//Login l2;
	//uname = l2.trueUsername();
	ourSettings s3;
	if (this->WorkOutButton1->Checked == true) {
		s3.ModifyWorkout("GENERAL");
	}
	else if (this->WorkOutButton2->Checked == true) {
		s3.ModifyWorkout("ENDURANCE");
	}
	else if (this->WorkOutButton3->Checked == true) {
		s3.ModifyWorkout("YOGA");
	}
	//GUI
	this->groupBox3->Hide();
	this->WorkOutButton1->Hide();
	this->WorkOutButton2->Hide();
	this->WorkOutButton3->Hide();
	this->WorkOutConfirmButton->Show();
	this->button3->Location = System::Drawing::Point(5, 94);
	this->button1->Show();
	this->button2->Show();
	this->button4->Show();
	this->button6->Show();
}
	   //Medical Details
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Hide();
	this->button2->Hide();
	this->button3->Hide();
	this->button6->Hide();
	this->button4->Location = System::Drawing::Point(5, 12);
	this->groupBox4->Show();
	this->label1->Show();
	this->label2->Show();
	this->label3->Show();
	this->textBox3->Show();
	this->textBox4->Show();
	this->EnterMed->Show();
	this->MedDoneButton->Show();
}

private: System::Void EnterMed_Click(System::Object^ sender, System::EventArgs^ e) {
	Medication M1;
	M1.AddPrescription(toStandardString(textBox3->Text), toStandardString(textBox4->Text));
	MessageBox::Show("Information Saved.\n You can enter more if you want!");
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void MedDoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox4->Hide();
	this->label1->Hide();
	this->label2->Hide();
	this->label3->Hide();
	this->textBox3->Hide();
	this->textBox4->Hide();
	this->button4->Location = System::Drawing::Point(5, 138);
	this->button1->Show();
	this->button2->Show();
	this->button3->Show();
	this->button6->Show();
}
	   //
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Hide();
	this->button2->Hide();
	this->button3->Hide();
	this->button4->Hide();
	this->button6->Location = System::Drawing::Point(5, 12);
	this->groupBox6->Show();
	this->ChangeDets2->Show();//Button2
	this->DetailsDoneButton->Show();

}
private: System::Void ChangeDets1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ChangeDets2->Hide();
	this->SaveNewDetails->Show();
	this->DetailsDoneButton->Location = System::Drawing::Point(170, 231);
}
private: System::Void ChangeDets2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ChangeDets2->Location = System::Drawing::Point(15, 36);
	this->label5->Location = System::Drawing::Point(22, 78);
	this->textBox6->Location = System::Drawing::Point(136, 78);
	this->label6->Location = System::Drawing::Point(2, 115);
	this->textBox7->Location = System::Drawing::Point(136, 115);
	this->label5->Show();
	this->label6->Show();
	this->textBox6->Show();
	this->textBox7->Show();
	this->SaveNewDetails->Show();
	this->DetailsDoneButton->Location = System::Drawing::Point(170, 231);
}
private: System::Void SaveNewDetails_Click(System::Object^ sender, System::EventArgs^ e) {
	//Backend
	std::string s1, s2;
	s1 = toStandardString(this->textBox6->Text);
	s2 = toStandardString(this->textBox7->Text);
	ourSettings set;
	if (!s1.compare(s2)) {
		set.ModifyPassword(toStandardString(this->textBox6->Text));
		MessageBox::Show("Information Saved");
		this->label5->Hide();
		this->label6->Hide();
		this->textBox6->Clear();
		this->textBox7->Clear();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->ChangeDets2->Location = System::Drawing::Point(15, 36);
		this->ChangeDets2->Show();
		this->SaveNewDetails->Hide();
		this->DetailsDoneButton->Location = System::Drawing::Point(260, 231);
	}
	else {
		MessageBox::Show("Passwords to not match, try again!");
		textBox6->Clear();
		textBox7->Clear();
	}
}
private: System::Void DetailsDoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//GUI
	this->groupBox6->Hide();
	this->ChangeDets2->Hide();
	this->label5->Hide();
	this->label6->Hide();
	this->textBox6->Hide();
	this->textBox7->Hide(); 
	this->SaveNewDetails->Hide(); //SaveButton
	this->DetailsDoneButton->Hide();
	//show
	this->button6->Location = System::Drawing::Point(5,180);
	this->button1->Show();
	this->button2->Show();
	this->button3->Show();
	this->button4->Show();
}
};
}
