#pragma once
#include "LogIn.h"
#include <fstream>
#include <iostream>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Plans
	/// </summary>
	public ref class Plans : public System::Windows::Forms::Form
	{
	public:
		Plans(void)
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
		~Plans()
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ DoneButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Plans::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DoneButton = (gcnew System::Windows::Forms::Button());
			this->StartPosition = FormStartPosition::CenterScreen;
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(194, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 119);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Workout";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Plans::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(323, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 119);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Diets";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Plans::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(22, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Plant";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Plans::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(139, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Keto";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Plans::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(256, 41);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Low fat";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Plans::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(373, 41);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Paleo";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Plans::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(490, 41);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"DASH";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Plans::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(139, 296);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L"General";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Plans::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(256, 296);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Endurance";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Plans::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(373, 296);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Yoga";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &Plans::button10_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->textBox1->Location = System::Drawing::Point(22, 84);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(579, 206);
			this->textBox1->TabIndex = 10;
			this->textBox1->Visible = false;
			// 
			// DoneButton
			// 
			this->DoneButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->DoneButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DoneButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoneButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DoneButton->Location = System::Drawing::Point(507, 327);
			this->DoneButton->Name = L"DoneButton";
			this->DoneButton->Size = System::Drawing::Size(111, 37);
			this->DoneButton->TabIndex = 11;
			this->DoneButton->Text = L"Done";
			this->DoneButton->UseVisualStyleBackColor = false;
			this->DoneButton->Visible = false;
			this->DoneButton->Click += gcnew System::EventHandler(this, &Plans::DoneButton_Click);
			// 
			// Plans
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(630, 367);
			this->Controls->Add(this->DoneButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Plans";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Plans";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button3->Show();
		this->button4->Show();
		this->button5->Show();
		this->button6->Show();
		this->button7->Show();
		this->button8->Hide();
		this->button9->Hide();
		this->button10->Hide();
		this->DoneButton->Show();
		this->textBox1->Show();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button3->Hide();
	this->button4->Hide();
	this->button5->Hide();
	this->button6->Hide();
	this->button7->Hide();
	this->button8->Show();
	this->button9->Show();
	this->button10->Show();
	this->textBox1->Show();
	this->DoneButton->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	DIET d1;
	//DIET S;
	size_t startpos, endpos, seppos;
	std::string temp,menu;
	menu = d1.displayPlan("PLANT");
	startpos = menu.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = menu.find_first_of('\n', startpos + 1);	//updating end position
		temp = menu.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void DoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button3->Hide();
	this->button4->Hide();
	this->button5->Hide();
	this->button6->Hide();
	this->button7->Hide();
	this->button8->Hide();
	this->button9->Hide();
	this->button10->Hide();
	textBox1->Clear();
	textBox1->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	DIET d1;
	//DIET S;
	size_t startpos, endpos, seppos;
	std::string temp, menu;
	menu = d1.displayPlan("KETO");
	startpos = menu.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = menu.find_first_of('\n', startpos + 1);	//updating end position
		temp = menu.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	DIET d1;
	//DIET S;
	size_t startpos, endpos, seppos;
	std::string temp, menu;
	menu = d1.displayPlan("LOWFAT");
	startpos = menu.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = menu.find_first_of('\n', startpos + 1);	//updating end position
		temp = menu.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	DIET d1;
	//DIET S;
	size_t startpos, endpos, seppos;
	std::string temp, menu;
	menu = d1.displayPlan("PALEO");
	startpos = menu.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = menu.find_first_of('\n', startpos + 1);	//updating end position
		temp = menu.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	DIET d1;
	//DIET S;
	size_t startpos, endpos, seppos;
	std::string temp, menu;
	menu = d1.displayPlan("DASH");
	startpos = menu.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = menu.find_first_of('\n', startpos + 1);	//updating end position
		temp = menu.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	Workout w1;
	size_t startpos, endpos, seppos;
	std::string temp, plan;
	plan = w1.displayPlan("GENERAL");
	startpos = plan.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = plan.find_first_of('\n', startpos + 1);	//updating end position
		temp = plan.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	Workout w1;
	size_t startpos, endpos, seppos;
	std::string temp, plan;
	plan = w1.displayPlan("ENDURANCE");
	startpos = plan.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = plan.find_first_of('\n', startpos + 1);	//updating end position
		temp = plan.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	Workout w1;
	size_t startpos, endpos, seppos;
	std::string temp, plan;
	plan = w1.displayPlan("YOGA");
	startpos = plan.find('\n');
	for (int x = 0; x < 7; x++)
	{
		endpos = plan.find_first_of('\n', startpos + 1);	//updating end position
		temp = plan.substr(startpos, endpos - startpos);//storing the substd::string from startpos to seppos in details
		std::string Model(temp);
		String^ MyString = gcnew String(Model.c_str());
		textBox1->Text += MyString + "\r\n";
		startpos = endpos + 1;
	}
}
};
}
