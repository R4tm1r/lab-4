#pragma once

namespace Calculator {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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

	protected:
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
	private: System::Windows::Forms::RichTextBox^ Number_1;
	protected:
	private: System::Windows::Forms::RichTextBox^ Number_2;
	private: System::Windows::Forms::RichTextBox^ Result;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ Operation_sign;



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
			this->Number_1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Number_2 = (gcnew System::Windows::Forms::RichTextBox());
			this->Result = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Operation_sign = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Number_1
			// 
			this->Number_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Number_1->Location = System::Drawing::Point(29, 90);
			this->Number_1->Name = L"Number_1";
			this->Number_1->Size = System::Drawing::Size(259, 58);
			this->Number_1->TabIndex = 0;
			this->Number_1->Text = L"";
			this->Number_1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// Number_2
			// 
			this->Number_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Number_2->Location = System::Drawing::Point(29, 246);
			this->Number_2->Name = L"Number_2";
			this->Number_2->Size = System::Drawing::Size(259, 60);
			this->Number_2->TabIndex = 1;
			this->Number_2->Text = L"";
			this->Number_2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// Result
			// 
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->Location = System::Drawing::Point(29, 362);
			this->Result->Name = L"Result";
			this->Result->ReadOnly = true;
			this->Result->Size = System::Drawing::Size(259, 60);
			this->Result->TabIndex = 2;
			this->Result->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(173, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Calculation_button);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(29, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 57);
			this->button2->TabIndex = 4;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Reset);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(26, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L" ������ �����:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"������ �����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 343);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"���������:";
			// 
			// Operation_sign
			// 
			this->Operation_sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Operation_sign->FormattingEnabled = true;
			this->Operation_sign->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->Operation_sign->Location = System::Drawing::Point(126, 170);
			this->Operation_sign->Name = L"Operation_sign";
			this->Operation_sign->Size = System::Drawing::Size(53, 39);
			this->Operation_sign->TabIndex = 8;
			this->Operation_sign->Text = L"+";
			this->Operation_sign->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 523);
			this->Controls->Add(this->Operation_sign);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Number_2);
			this->Controls->Add(this->Number_1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //Proverka vvoda
		   bool Protect() {
		   if (Number_1->Text->Length == 0 || Number_2->Text->Length == 0) 
			   return false;

		   for (int i = 0; i < Number_1->Text->Length; i++) {
			   if (Number_1->Text[i] >= '0' && Number_1->Text[i] <= '9' || Number_1->Text[i] == ',') {}
			   else return false;
		   };

		   for (int i = 0; i < Number_2->Text->Length; i++) {
			   if (Number_2->Text[i] >= '0' && Number_2->Text[i] <= '9' || Number_2->Text[i] == ',') {}
			   else return false;
		   };
		   return true;
	   }

		   //Knopki vichisleniya
private: System::Void Calculation_button(System::Object^ sender, System::EventArgs^ e) {
	if (Protect()) {
		double num1, num2, res;
		num1 = System::Convert::ToDouble(Number_1->Text);
		num2 = System::Convert::ToDouble(Number_2->Text);

		if (Operation_sign->SelectedItem == "+") {
			res = num1 + num2;
		}
		else if (Operation_sign->SelectedItem == "-") {
			res = num1 - num2;
		}
		else if (Operation_sign->SelectedItem == "*") {
			res = num1 * num2;
		}
		else if (Operation_sign->SelectedItem == "/") {
			if (num2 != 0)
				res = num1 / num2;
			else (MessageBox::Show("Delenie na 0", "Error"));
		}
		Result->Text = System::Convert::ToString(res);
	}
	else(MessageBox::Show("Oshibka vvoda", "Error"));
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   

	   //Reset buttons
private: System::Void Reset(System::Object^ sender, System::EventArgs^ e) {
	Number_2->Text = L"";
	Number_1->Text = L"";
	Result->Text = L"";
}
};
}
