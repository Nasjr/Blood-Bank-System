#pragma once
#include "Recipient.h"
#include "Donor.h"
#include "Donate.h"
#include"user.h"
#include"recipiant.h"
#include<vector>
#include<map>
#include <string>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Project1;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void read_data();
		void store_data();
	protected:
		vector<recipient>* recip=new vector<recipient>;
		vector<Donate>* donor=new vector<Donate>;
		map<string, string>* log_in = new map<string, string>;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->bunifuThinButton23);
			this->panel1->Controls->Add(this->bunifuThinButton22);
			this->panel1->Controls->Add(this->bunifuThinButton21);
			this->panel1->Controls->Add(this->bunifuTextbox2);
			this->panel1->Controls->Add(this->bunifuTextbox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(187, 39);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 480);
			this->panel1->TabIndex = 0;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Sign as Donor";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(253, 370);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(188, 73);
			this->bunifuThinButton23->TabIndex = 5;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &MyForm::bunifuThinButton23_Click);
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Sign as Recipient";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(20, 370);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(189, 73);
			this->bunifuThinButton22->TabIndex = 4;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &MyForm::bunifuThinButton22_Click);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Login";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(127, 309);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(181, 50);
			this->bunifuThinButton21->TabIndex = 3;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &MyForm::bunifuThinButton21_Click);
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(80, 222);
			this->bunifuTextbox2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(289, 58);
			this->bunifuTextbox2->TabIndex = 2;
			this->bunifuTextbox2->text = L"Password:";
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(80, 140);
			this->bunifuTextbox1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(289, 58);
			this->bunifuTextbox1->TabIndex = 1;
			this->bunifuTextbox1->text = L"E-MAIL:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(119, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 553);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Recipient^ a = gcnew Recipient(this,recip, log_in);
		a->Show();
    }
   
     private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {
		 this->Hide();
		 Donor^ b = gcnew Donor(this,donor,log_in);
		 b->Show();
     }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	read_data();
}

private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	store_data();
}
};
}
