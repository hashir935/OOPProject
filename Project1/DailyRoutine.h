#pragma once
#include "LogIn.h"
#include "Form2.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DailyRoutine
	/// </summary>
	public ref class DailyRoutine : public System::Windows::Forms::Form
	{
	public:
		DailyRoutine(void)
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
		~DailyRoutine()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ timebox1;
    private: System::Windows::Forms::TextBox^ timebox2;
    private: System::Windows::Forms::TextBox^ timebox3;
    private: System::Windows::Forms::TextBox^ timebox4;
    private: System::Windows::Forms::TextBox^ timebox8;




    private: System::Windows::Forms::TextBox^ timebox5;
    private: System::Windows::Forms::TextBox^ timebox6;
    private: System::Windows::Forms::TextBox^ timebox7;



    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ timebox9;
    private: System::Windows::Forms::TextBox^ timebox10;
    private: System::Windows::Forms::TextBox^ timebox11;
    private: System::Windows::Forms::TextBox^ timebox12;
    private: System::Windows::Forms::TextBox^ timebox13;
    private: System::Windows::Forms::TextBox^ timebox14;
    private: System::Windows::Forms::TextBox^ textBox15;







    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TextBox^ Breakfast;
    private: System::Windows::Forms::TextBox^ Lunch;
    private: System::Windows::Forms::TextBox^ Dinner;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ WTextBox;




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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DailyRoutine::typeid));
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->timebox1 = (gcnew System::Windows::Forms::TextBox());
            this->timebox2 = (gcnew System::Windows::Forms::TextBox());
            this->timebox3 = (gcnew System::Windows::Forms::TextBox());
            this->timebox4 = (gcnew System::Windows::Forms::TextBox());
            this->timebox8 = (gcnew System::Windows::Forms::TextBox());
            this->timebox5 = (gcnew System::Windows::Forms::TextBox());
            this->timebox6 = (gcnew System::Windows::Forms::TextBox());
            this->timebox7 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->timebox9 = (gcnew System::Windows::Forms::TextBox());
            this->timebox10 = (gcnew System::Windows::Forms::TextBox());
            this->timebox11 = (gcnew System::Windows::Forms::TextBox());
            this->timebox12 = (gcnew System::Windows::Forms::TextBox());
            this->timebox13 = (gcnew System::Windows::Forms::TextBox());
            this->timebox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->Breakfast = (gcnew System::Windows::Forms::TextBox());
            this->Lunch = (gcnew System::Windows::Forms::TextBox());
            this->Dinner = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->WTextBox = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox2->Location = System::Drawing::Point(169, 73);
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox2->Size = System::Drawing::Size(543, 34);
            this->textBox2->TabIndex = 1;
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox3->Location = System::Drawing::Point(169, 113);
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox3->Size = System::Drawing::Size(543, 34);
            this->textBox3->TabIndex = 2;
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox4->Location = System::Drawing::Point(169, 153);
            this->textBox4->Name = L"textBox4";
            this->textBox4->ReadOnly = true;
            this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox4->Size = System::Drawing::Size(543, 34);
            this->textBox4->TabIndex = 3;
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox5->Location = System::Drawing::Point(169, 193);
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox5->Size = System::Drawing::Size(543, 34);
            this->textBox5->TabIndex = 4;
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox6->Location = System::Drawing::Point(169, 277);
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox6->Size = System::Drawing::Size(543, 34);
            this->textBox6->TabIndex = 5;
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox7->Location = System::Drawing::Point(169, 317);
            this->textBox7->Name = L"textBox7";
            this->textBox7->ReadOnly = true;
            this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox7->Size = System::Drawing::Size(543, 34);
            this->textBox7->TabIndex = 6;
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox8->Location = System::Drawing::Point(169, 357);
            this->textBox8->Name = L"textBox8";
            this->textBox8->ReadOnly = true;
            this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox8->Size = System::Drawing::Size(543, 34);
            this->textBox8->TabIndex = 7;
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox9->Location = System::Drawing::Point(169, 397);
            this->textBox9->Name = L"textBox9";
            this->textBox9->ReadOnly = true;
            this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox9->Size = System::Drawing::Size(543, 34);
            this->textBox9->TabIndex = 8;
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox10->Location = System::Drawing::Point(169, 442);
            this->textBox10->Name = L"textBox10";
            this->textBox10->ReadOnly = true;
            this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox10->Size = System::Drawing::Size(543, 34);
            this->textBox10->TabIndex = 9;
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox11->Location = System::Drawing::Point(169, 482);
            this->textBox11->Name = L"textBox11";
            this->textBox11->ReadOnly = true;
            this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox11->Size = System::Drawing::Size(543, 34);
            this->textBox11->TabIndex = 10;
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox12
            // 
            this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox12->Location = System::Drawing::Point(169, 522);
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox12->Size = System::Drawing::Size(543, 34);
            this->textBox12->TabIndex = 11;
            this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox13
            // 
            this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox13->Location = System::Drawing::Point(170, 562);
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox13->Size = System::Drawing::Size(542, 34);
            this->textBox13->TabIndex = 12;
            this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox14
            // 
            this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox14->Location = System::Drawing::Point(170, 602);
            this->textBox14->Name = L"textBox14";
            this->textBox14->ReadOnly = true;
            this->textBox14->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox14->Size = System::Drawing::Size(542, 34);
            this->textBox14->TabIndex = 13;
            this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox1
            // 
            this->timebox1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox1->Location = System::Drawing::Point(12, 73);
            this->timebox1->Name = L"timebox1";
            this->timebox1->ReadOnly = true;
            this->timebox1->Size = System::Drawing::Size(151, 34);
            this->timebox1->TabIndex = 14;
            this->timebox1->Text = L"8:00-9:00";
            this->timebox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox2
            // 
            this->timebox2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox2->Location = System::Drawing::Point(12, 113);
            this->timebox2->Name = L"timebox2";
            this->timebox2->ReadOnly = true;
            this->timebox2->Size = System::Drawing::Size(151, 34);
            this->timebox2->TabIndex = 15;
            this->timebox2->Text = L"9:00-10:00";
            this->timebox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox3
            // 
            this->timebox3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox3->Location = System::Drawing::Point(12, 153);
            this->timebox3->Name = L"timebox3";
            this->timebox3->ReadOnly = true;
            this->timebox3->Size = System::Drawing::Size(151, 34);
            this->timebox3->TabIndex = 16;
            this->timebox3->Text = L"10:00-11:00";
            this->timebox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox4
            // 
            this->timebox4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox4->Location = System::Drawing::Point(12, 193);
            this->timebox4->Name = L"timebox4";
            this->timebox4->ReadOnly = true;
            this->timebox4->Size = System::Drawing::Size(151, 34);
            this->timebox4->TabIndex = 17;
            this->timebox4->Text = L"11:00-12:00";
            this->timebox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox8
            // 
            this->timebox8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox8->Location = System::Drawing::Point(11, 402);
            this->timebox8->Name = L"timebox8";
            this->timebox8->ReadOnly = true;
            this->timebox8->Size = System::Drawing::Size(152, 34);
            this->timebox8->TabIndex = 18;
            this->timebox8->Text = L"3:00-4:00";
            this->timebox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox5
            // 
            this->timebox5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox5->Location = System::Drawing::Point(11, 277);
            this->timebox5->Name = L"timebox5";
            this->timebox5->ReadOnly = true;
            this->timebox5->Size = System::Drawing::Size(152, 34);
            this->timebox5->TabIndex = 19;
            this->timebox5->Text = L"12:00-1:00";
            this->timebox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox6
            // 
            this->timebox6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox6->Location = System::Drawing::Point(11, 317);
            this->timebox6->Name = L"timebox6";
            this->timebox6->ReadOnly = true;
            this->timebox6->Size = System::Drawing::Size(152, 34);
            this->timebox6->TabIndex = 20;
            this->timebox6->Text = L"1:00-2:00";
            this->timebox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox7
            // 
            this->timebox7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox7->Location = System::Drawing::Point(11, 357);
            this->timebox7->Name = L"timebox7";
            this->timebox7->ReadOnly = true;
            this->timebox7->Size = System::Drawing::Size(152, 34);
            this->timebox7->TabIndex = 21;
            this->timebox7->Text = L"2:00-3:00";
            this->timebox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->label1->Location = System::Drawing::Point(48, 230);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(63, 31);
            this->label1->TabIndex = 22;
            this->label1->Text = L"P.M.";
            // 
            // timebox9
            // 
            this->timebox9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox9->Location = System::Drawing::Point(12, 442);
            this->timebox9->Name = L"timebox9";
            this->timebox9->ReadOnly = true;
            this->timebox9->Size = System::Drawing::Size(152, 34);
            this->timebox9->TabIndex = 23;
            this->timebox9->Text = L"4:00-5:00";
            this->timebox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox10
            // 
            this->timebox10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox10->Location = System::Drawing::Point(11, 482);
            this->timebox10->Name = L"timebox10";
            this->timebox10->ReadOnly = true;
            this->timebox10->Size = System::Drawing::Size(152, 34);
            this->timebox10->TabIndex = 24;
            this->timebox10->Text = L"5:00-6:00";
            this->timebox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox11
            // 
            this->timebox11->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox11->Location = System::Drawing::Point(11, 522);
            this->timebox11->Name = L"timebox11";
            this->timebox11->ReadOnly = true;
            this->timebox11->Size = System::Drawing::Size(152, 34);
            this->timebox11->TabIndex = 25;
            this->timebox11->Text = L"6:00-7:00";
            this->timebox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox12
            // 
            this->timebox12->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox12->Location = System::Drawing::Point(12, 562);
            this->timebox12->Name = L"timebox12";
            this->timebox12->ReadOnly = true;
            this->timebox12->Size = System::Drawing::Size(152, 34);
            this->timebox12->TabIndex = 26;
            this->timebox12->Text = L"7:00-8:00";
            this->timebox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox13
            // 
            this->timebox13->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox13->Location = System::Drawing::Point(12, 602);
            this->timebox13->Name = L"timebox13";
            this->timebox13->ReadOnly = true;
            this->timebox13->Size = System::Drawing::Size(152, 34);
            this->timebox13->TabIndex = 27;
            this->timebox13->Text = L"9:00-10:00";
            this->timebox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // timebox14
            // 
            this->timebox14->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timebox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->timebox14->Location = System::Drawing::Point(12, 642);
            this->timebox14->Name = L"timebox14";
            this->timebox14->ReadOnly = true;
            this->timebox14->Size = System::Drawing::Size(152, 34);
            this->timebox14->TabIndex = 28;
            this->timebox14->Text = L"10:00-11:00";
            this->timebox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox15
            // 
            this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->textBox15->Location = System::Drawing::Point(169, 642);
            this->textBox15->Name = L"textBox15";
            this->textBox15->ReadOnly = true;
            this->textBox15->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox15->Size = System::Drawing::Size(543, 34);
            this->textBox15->TabIndex = 29;
            this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->label2->Location = System::Drawing::Point(12, 27);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(102, 31);
            this->label2->TabIndex = 30;
            this->label2->Text = L"Timings";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->label3->Location = System::Drawing::Point(163, 27);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(109, 31);
            this->label3->TabIndex = 31;
            this->label3->Text = L"Todo list";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button1->Location = System::Drawing::Point(709, 12);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(123, 46);
            this->button1->TabIndex = 32;
            this->button1->Text = L"Edit";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &DailyRoutine::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->button2->Cursor = System::Windows::Forms::Cursors::AppStarting;
            this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button2->Location = System::Drawing::Point(709, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(123, 46);
            this->button2->TabIndex = 33;
            this->button2->Text = L"Save";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &DailyRoutine::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->button3->Cursor = System::Windows::Forms::Cursors::AppStarting;
            this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button3->Location = System::Drawing::Point(580, 12);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(123, 46);
            this->button3->TabIndex = 34;
            this->button3->Text = L"Load Data";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &DailyRoutine::button3_Click);
            // 
            // Breakfast
            // 
            this->Breakfast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->Breakfast->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Breakfast->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->Breakfast->Location = System::Drawing::Point(718, 73);
            this->Breakfast->Multiline = true;
            this->Breakfast->Name = L"Breakfast";
            this->Breakfast->ReadOnly = true;
            this->Breakfast->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->Breakfast->Size = System::Drawing::Size(114, 101);
            this->Breakfast->TabIndex = 35;
            this->Breakfast->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // Lunch
            // 
            this->Lunch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->Lunch->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Lunch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->Lunch->Location = System::Drawing::Point(718, 180);
            this->Lunch->Multiline = true;
            this->Lunch->Name = L"Lunch";
            this->Lunch->ReadOnly = true;
            this->Lunch->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->Lunch->Size = System::Drawing::Size(114, 101);
            this->Lunch->TabIndex = 36;
            this->Lunch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // Dinner
            // 
            this->Dinner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->Dinner->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Dinner->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->Dinner->Location = System::Drawing::Point(718, 290);
            this->Dinner->Multiline = true;
            this->Dinner->Name = L"Dinner";
            this->Dinner->ReadOnly = true;
            this->Dinner->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->Dinner->Size = System::Drawing::Size(114, 101);
            this->Dinner->TabIndex = 37;
            this->Dinner->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->label4->Location = System::Drawing::Point(718, 400);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(112, 31);
            this->label4->TabIndex = 38;
            this->label4->Text = L"Workout ";
            // 
            // WTextBox
            // 
            this->WTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
                static_cast<System::Int32>(static_cast<System::Byte>(193)));
            this->WTextBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->WTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
                static_cast<System::Int32>(static_cast<System::Byte>(81)));
            this->WTextBox->Location = System::Drawing::Point(716, 442);
            this->WTextBox->Multiline = true;
            this->WTextBox->Name = L"WTextBox";
            this->WTextBox->ReadOnly = true;
            this->WTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->WTextBox->Size = System::Drawing::Size(114, 101);
            this->WTextBox->TabIndex = 39;
            this->WTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // DailyRoutine
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(895, 414);
            this->Controls->Add(this->WTextBox);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->Dinner);
            this->Controls->Add(this->Lunch);
            this->Controls->Add(this->Breakfast);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox15);
            this->Controls->Add(this->timebox14);
            this->Controls->Add(this->timebox13);
            this->Controls->Add(this->timebox12);
            this->Controls->Add(this->timebox11);
            this->Controls->Add(this->timebox10);
            this->Controls->Add(this->timebox9);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->timebox7);
            this->Controls->Add(this->timebox6);
            this->Controls->Add(this->timebox5);
            this->Controls->Add(this->timebox8);
            this->Controls->Add(this->timebox4);
            this->Controls->Add(this->timebox3);
            this->Controls->Add(this->timebox2);
            this->Controls->Add(this->timebox1);
            this->Controls->Add(this->textBox14);
            this->Controls->Add(this->textBox13);
            this->Controls->Add(this->textBox12);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->textBox9);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Name = L"DailyRoutine";
            this->ShowIcon = false;
            this->ShowInTaskbar = false;
            this->Text = L"Daily Routine";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    button1->Hide();
    button2->Show();
    this->textBox2->ReadOnly = false;
    this->textBox3->ReadOnly = false;
    this->textBox4->ReadOnly = false;
    this->textBox5->ReadOnly = false;
    this->textBox6->ReadOnly = false;
    this->textBox7->ReadOnly = false;
    this->textBox8->ReadOnly = false;
    this->textBox9->ReadOnly = false;
    this->textBox10->ReadOnly = false;
    this->textBox11->ReadOnly = false;
    this->textBox12->ReadOnly = false;
    this->textBox13->ReadOnly = false;
    this->textBox14->ReadOnly = false;
    this->textBox15->ReadOnly = false;
    //timeboxes
    this->timebox1->ReadOnly = false;
    this->timebox2->ReadOnly = false;
    this->timebox3->ReadOnly = false;
    this->timebox4->ReadOnly = false;
    this->timebox5->ReadOnly = false;
    this->timebox6->ReadOnly = false;
    this->timebox7->ReadOnly = false;
    this->timebox8->ReadOnly = false;
    this->timebox9->ReadOnly = false;
    this->timebox10->ReadOnly = false;
    this->timebox11->ReadOnly = false;
    this->timebox12->ReadOnly = false;
    this->timebox13->ReadOnly = false;
    this->timebox14->ReadOnly = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Information Saved!");
    button2->Hide();
    button1->Show();
    //Taking input
    std::string uname;
    routine r2;
    uname = r2.trueUsername();
    r2.setUsername(uname);
    r2.modifyRoutine("1", "2", toStandardString(textBox2->Text));
    r2.modifyRoutine("2", "3", toStandardString(textBox3->Text));
    r2.modifyRoutine("3", "4", toStandardString(textBox4->Text));
    r2.modifyRoutine("4", "5", toStandardString(textBox5->Text));
    r2.modifyRoutine("5", "6", toStandardString(textBox6->Text));
    r2.modifyRoutine("6", "7", toStandardString(textBox7->Text));
    r2.modifyRoutine("7", "8", toStandardString(textBox8->Text));
    r2.modifyRoutine("8", "9", toStandardString(textBox9->Text));
    r2.modifyRoutine("9", "10", toStandardString(textBox10->Text));
    r2.modifyRoutine("10", "11", toStandardString(textBox11->Text));
    r2.modifyRoutine("11", "12", toStandardString(textBox12->Text));
    r2.modifyRoutine("12", "13", toStandardString(textBox13->Text));
    r2.modifyRoutine("13", "14", toStandardString(textBox14->Text));
    r2.modifyRoutine("14", "15", toStandardString(textBox15->Text));
    //setting read only property
    this->textBox2->ReadOnly = false;
    this->textBox3->ReadOnly = true;
    this->textBox4->ReadOnly = true;
    this->textBox5->ReadOnly = true;
    this->textBox6->ReadOnly = true;
    this->textBox7->ReadOnly = true;
    this->textBox8->ReadOnly = true;
    this->textBox9->ReadOnly = true;
    this->textBox10->ReadOnly = true;
    this->textBox11->ReadOnly = true;
    this->textBox12->ReadOnly = true;
    this->textBox13->ReadOnly = true;
    this->textBox14->ReadOnly = true;
    this->textBox15->ReadOnly = true;
    //timeboxes
    this->timebox1->ReadOnly = true;
    this->timebox2->ReadOnly = true;
    this->timebox3->ReadOnly = true;
    this->timebox4->ReadOnly = true;
    this->timebox5->ReadOnly = true;
    this->timebox6->ReadOnly = true;
    this->timebox7->ReadOnly = true;
    this->timebox8->ReadOnly = true;
    this->timebox9->ReadOnly = true;
    this->timebox10->ReadOnly = true;
    this->timebox11->ReadOnly = true;
    this->timebox12->ReadOnly = true;
    this->timebox13->ReadOnly = true;
    this->timebox14->ReadOnly = true;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    std::string uname, diet,lunch,dinner,breakfast,workout;
    routine r1;
    DIET d;
    Workout w;
    uname = r1.trueUsername();
    r1.setUsername(uname);
    User user;
    diet = user.Diet;
    workout = user.Workout;
    //std::string Mess(diet);
    //String^ message = gcnew String(Mess.c_str());
    //MessageBox::Show(message);
    if (!diet.compare("diet")) {
        breakfast = "";
        lunch = "";
        dinner = "";
    }
    else {
        breakfast = d.getbreakfast(user.Diet);
        lunch = d.getlunch(user.Diet);
        dinner = d.getdinner(user.Diet);
    }
    if (!workout.compare("workout")) {
        workout = "";
    }
    else
    {
        workout = w.search(user.Workout);
    }
    //converting to system strings
    std::string B(breakfast);
    String^ BREAKFAST = gcnew String(B.c_str());
    std::string L(lunch);
    String^ LUNCH = gcnew String(L.c_str());
    std::string D(dinner);
    String^ DINNER = gcnew String(D.c_str());
    std::string W(workout);
    String^ WORKOUT = gcnew String(W.c_str());
    this->Breakfast->Text = BREAKFAST;
    this->Lunch->Text = LUNCH;
    this->Dinner->Text = DINNER;
    this->WTextBox->Text = WORKOUT;
    //first slot
    std::string Model(r1.getRoutine("1", "2"));
    String^ str1 = gcnew String(Model.c_str());
    this->textBox2->Text = str1;
    //second slot
    std::string Model1(r1.getRoutine("2", "3"));
    String^ str2 = gcnew String(Model1.c_str());
    this->textBox3->Text = str2;
    //third slot
    std::string Model2(r1.getRoutine("3", "4"));
    String^ str3 = gcnew String(Model2.c_str());
    this->textBox4->Text = str3;
    //4th slot
    std::string Model3(r1.getRoutine("4", "5"));
    String^ str4 = gcnew String(Model3.c_str());
    this->textBox5->Text = str4;
    //5th slot
    std::string Model4(r1.getRoutine("5", "6"));
    String^ str5 = gcnew String(Model4.c_str());
    this->textBox6->Text = str5;
    //6th slot
    std::string Model5(r1.getRoutine("6", "7"));
    String^ str6 = gcnew String(Model5.c_str());
    this->textBox7->Text = str6;
    //7th slot
    std::string Model6(r1.getRoutine("7", "8"));
    String^ str7 = gcnew String(Model6.c_str());
    this->textBox8->Text = str7;
    //8th slot
    std::string Model7(r1.getRoutine("8", "9"));
    String^ str8 = gcnew String(Model7.c_str());
    this->textBox9->Text = str8;
    //9th slot
    std::string Model8(r1.getRoutine("9", "10"));
    String^ str9 = gcnew String(Model8.c_str());
    this->textBox10->Text = str9;
    //10th slot
    std::string Model9(r1.getRoutine("10", "11"));
    String^ str10 = gcnew String(Model9.c_str());
    this->textBox11->Text = str10;
    //11th slot
    std::string Model10(r1.getRoutine("11", "12"));
    String^ str11 = gcnew String(Model10.c_str());
    this->textBox12->Text = str11;
    //12th slot
    std::string Model11(r1.getRoutine("12", "13"));
    String^ str12 = gcnew String(Model11.c_str());
    this->textBox13->Text = str12;
    //13th slot
    std::string Model12(r1.getRoutine("13", "14"));
    String^ str13 = gcnew String(Model12.c_str());
    this->textBox14->Text = str13;
    //14th slot
    std::string Model13(r1.getRoutine("14", "15"));
    String^ str14 = gcnew String(Model13.c_str());
    this->textBox15->Text = str14;
}
};
}
