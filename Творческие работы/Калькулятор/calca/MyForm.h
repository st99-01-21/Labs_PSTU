#pragma once
#include <iostream>
#include "kramer.h"

namespace calca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 135);
			this->label1->TabIndex = 0;
			this->label1->Text = L"{";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(115, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x  +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(199, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"y  +";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(278, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"z  =";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(249, 36);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(328, 36);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(35, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(81, 79);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(328, 79);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(35, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(249, 79);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(34, 22);
			this->textBox7->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(165, 79);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(37, 22);
			this->textBox8->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(278, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"z  =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(199, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"y  +";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(115, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 25);
			this->label7->TabIndex = 9;
			this->label7->Text = L"x  +";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(81, 122);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(37, 22);
			this->textBox9->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(328, 122);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(35, 22);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(249, 122);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(34, 22);
			this->textBox11->TabIndex = 20;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(165, 122);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(37, 22);
			this->textBox12->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(278, 118);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"z  =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(199, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 25);
			this->label9->TabIndex = 17;
			this->label9->Text = L"y  +";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(115, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 25);
			this->label10->TabIndex = 16;
			this->label10->Text = L"x  +";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(50, 189);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(233, 104);
			this->listBox1->TabIndex = 23;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(397, 33);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(391, 189);
			this->textBox13->TabIndex = 24;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(794, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"x  =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(794, 108);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 25);
			this->label12->TabIndex = 26;
			this->label12->Text = L"y  =";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(794, 178);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 25);
			this->label13->TabIndex = 27;
			this->label13->Text = L"z  =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(857, 43);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 17);
			this->label14->TabIndex = 28;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(844, 40);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(44, 22);
			this->textBox14->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(844, 111);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(44, 22);
			this->textBox15->TabIndex = 30;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(844, 181);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(47, 22);
			this->textBox16->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(397, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 65);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(530, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 65);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(662, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 65);
			this->button3->TabIndex = 34;
			this->button3->Text = L"С";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 385);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //отчистить
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox13->Text = "";
		textBox14->Text = "";
		textBox15->Text = "";
		textBox16->Text = "";
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
		textBox12->Text = "";

	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
		   //сохранить
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (listBox1->Items->Count != 4) {
			switch (listBox1->Items->Count)
			{
			case 0:
				listBox1->Items->Add("система " + System::Convert::ToString(listBox1->Items->Count + 1));
				system1[0][0] = System::Convert::ToInt16(textBox1->Text);
				system1[0][1] = System::Convert::ToInt16(textBox2->Text);
				system1[0][2] = System::Convert::ToInt16(textBox3->Text);
				system1[0][3] = System::Convert::ToInt16(textBox4->Text);
				system1[1][0] = System::Convert::ToInt16(textBox5->Text);
				system1[1][1] = System::Convert::ToInt16(textBox8->Text);
				system1[1][2] = System::Convert::ToInt16(textBox7->Text);
				system1[1][3] = System::Convert::ToInt16(textBox6->Text);
				system1[2][0] = System::Convert::ToInt16(textBox9->Text);
				system1[2][1] = System::Convert::ToInt16(textBox12->Text);
				system1[2][2] = System::Convert::ToInt16(textBox11->Text);
				system1[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 1:
				listBox1->Items->Add("система " + System::Convert::ToString(listBox1->Items->Count + 1));
				system2[0][0] = System::Convert::ToInt16(textBox1->Text);
				system2[0][1] = System::Convert::ToInt16(textBox2->Text);
				system2[0][2] = System::Convert::ToInt16(textBox3->Text);
				system2[0][3] = System::Convert::ToInt16(textBox4->Text);
				system2[1][0] = System::Convert::ToInt16(textBox5->Text);
				system2[1][1] = System::Convert::ToInt16(textBox8->Text);
				system2[1][2] = System::Convert::ToInt16(textBox7->Text);
				system2[1][3] = System::Convert::ToInt16(textBox6->Text);
				system2[2][0] = System::Convert::ToInt16(textBox9->Text);
				system2[2][1] = System::Convert::ToInt16(textBox12->Text);
				system2[2][2] = System::Convert::ToInt16(textBox11->Text);
				system2[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 2:
				listBox1->Items->Add("система " + System::Convert::ToString(listBox1->Items->Count + 1));
				system3[0][0] = System::Convert::ToInt16(textBox1->Text);
				system3[0][1] = System::Convert::ToInt16(textBox2->Text);
				system3[0][2] = System::Convert::ToInt16(textBox3->Text);
				system3[0][3] = System::Convert::ToInt16(textBox4->Text);
				system3[1][0] = System::Convert::ToInt16(textBox5->Text);
				system3[1][1] = System::Convert::ToInt16(textBox8->Text);
				system3[1][2] = System::Convert::ToInt16(textBox7->Text);
				system3[1][3] = System::Convert::ToInt16(textBox6->Text);
				system3[2][0] = System::Convert::ToInt16(textBox9->Text);
				system3[2][1] = System::Convert::ToInt16(textBox12->Text);
				system3[2][2] = System::Convert::ToInt16(textBox11->Text);
				system3[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 3:
				listBox1->Items->Add("система " + System::Convert::ToString(listBox1->Items->Count + 1));
				system4[0][0] = System::Convert::ToInt16(textBox1->Text);
				system4[0][1] = System::Convert::ToInt16(textBox2->Text);
				system4[0][2] = System::Convert::ToInt16(textBox3->Text);
				system4[0][3] = System::Convert::ToInt16(textBox4->Text);
				system4[1][0] = System::Convert::ToInt16(textBox5->Text);
				system4[1][1] = System::Convert::ToInt16(textBox8->Text);
				system4[1][2] = System::Convert::ToInt16(textBox7->Text);
				system4[1][3] = System::Convert::ToInt16(textBox6->Text);
				system4[2][0] = System::Convert::ToInt16(textBox9->Text);
				system4[2][1] = System::Convert::ToInt16(textBox12->Text);
				system4[2][2] = System::Convert::ToInt16(textBox11->Text);
				system4[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			default:
				break;
			}
		}
		else
		{
			switch (listBox1->SelectedIndex)
			{
			case 0:
				system1[0][0] = System::Convert::ToInt16(textBox1->Text);
				system1[0][1] = System::Convert::ToInt16(textBox2->Text);
				system1[0][2] = System::Convert::ToInt16(textBox3->Text);
				system1[0][3] = System::Convert::ToInt16(textBox4->Text);
				system1[1][0] = System::Convert::ToInt16(textBox5->Text);
				system1[1][1] = System::Convert::ToInt16(textBox8->Text);
				system1[1][2] = System::Convert::ToInt16(textBox7->Text);
				system1[1][3] = System::Convert::ToInt16(textBox6->Text);
				system1[2][0] = System::Convert::ToInt16(textBox9->Text);
				system1[2][1] = System::Convert::ToInt16(textBox12->Text);
				system1[2][2] = System::Convert::ToInt16(textBox11->Text);
				system1[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 1:
				system2[0][0] = System::Convert::ToInt16(textBox1->Text);
				system2[0][1] = System::Convert::ToInt16(textBox2->Text);
				system2[0][2] = System::Convert::ToInt16(textBox3->Text);
				system2[0][3] = System::Convert::ToInt16(textBox4->Text);
				system2[1][0] = System::Convert::ToInt16(textBox5->Text);
				system2[1][1] = System::Convert::ToInt16(textBox8->Text);
				system2[1][2] = System::Convert::ToInt16(textBox7->Text);
				system2[1][3] = System::Convert::ToInt16(textBox6->Text);
				system2[2][0] = System::Convert::ToInt16(textBox9->Text);
				system2[2][1] = System::Convert::ToInt16(textBox12->Text);
				system2[2][2] = System::Convert::ToInt16(textBox11->Text);
				system2[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 2:
				system3[0][0] = System::Convert::ToInt16(textBox1->Text);
				system3[0][1] = System::Convert::ToInt16(textBox2->Text);
				system3[0][2] = System::Convert::ToInt16(textBox3->Text);
				system3[0][3] = System::Convert::ToInt16(textBox4->Text);
				system3[1][0] = System::Convert::ToInt16(textBox5->Text);
				system3[1][1] = System::Convert::ToInt16(textBox8->Text);
				system3[1][2] = System::Convert::ToInt16(textBox7->Text);
				system3[1][3] = System::Convert::ToInt16(textBox6->Text);
				system3[2][0] = System::Convert::ToInt16(textBox9->Text);
				system3[2][1] = System::Convert::ToInt16(textBox12->Text);
				system3[2][2] = System::Convert::ToInt16(textBox11->Text);
				system3[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			case 3:
				system4[0][0] = System::Convert::ToInt16(textBox1->Text);
				system4[0][1] = System::Convert::ToInt16(textBox2->Text);
				system4[0][2] = System::Convert::ToInt16(textBox3->Text);
				system4[0][3] = System::Convert::ToInt16(textBox4->Text);
				system4[1][0] = System::Convert::ToInt16(textBox5->Text);
				system4[1][1] = System::Convert::ToInt16(textBox8->Text);
				system4[1][2] = System::Convert::ToInt16(textBox7->Text);
				system4[1][3] = System::Convert::ToInt16(textBox6->Text);
				system4[2][0] = System::Convert::ToInt16(textBox9->Text);
				system4[2][1] = System::Convert::ToInt16(textBox12->Text);
				system4[2][2] = System::Convert::ToInt16(textBox11->Text);
				system4[2][3] = System::Convert::ToInt16(textBox10->Text);
				break;
			default:
				break;
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //вычислить
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox4->Text == "" || textBox5->Text == "" ||
			textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "")
		{
			textBox13->Text = "Необходимо заполнить все поля системы! ";
		}
		else {
			coeffs[0][0] = System::Convert::ToInt16(textBox1->Text);
			coeffs[0][1] = System::Convert::ToInt16(textBox2->Text);
			coeffs[0][2] = System::Convert::ToInt16(textBox3->Text);
			constants[0] = System::Convert::ToInt16(textBox4->Text);
			coeffs[1][0] = System::Convert::ToInt16(textBox5->Text);
			coeffs[1][1] = System::Convert::ToInt16(textBox8->Text);
			coeffs[1][2] = System::Convert::ToInt16(textBox7->Text);
			constants[1] = System::Convert::ToInt16(textBox6->Text);
			coeffs[2][0] = System::Convert::ToInt16(textBox9->Text);
			coeffs[2][1] = System::Convert::ToInt16(textBox12->Text);
			coeffs[2][2] = System::Convert::ToInt16(textBox11->Text);
			constants[2] = System::Convert::ToInt16(textBox10->Text);




			textBox13->Text = textBox1->Text + "x + " + textBox2->Text + "y + " + textBox3->Text + "z = " + textBox4->Text + "\r\n\r\n"
				+ textBox5->Text + "x + " + textBox8->Text + "y + " + textBox7->Text + "z = " + textBox6->Text + "\r\n\r\n"
				+ textBox9->Text + "x + " + textBox12->Text + "y + " + textBox11->Text + "z = " + textBox10->Text;

			int det = determinant(coeffs);
			int detX1 = determinantX1(coeffs, constants);
			int detX2 = determinantX2(coeffs, constants);
			int detX3 = determinantX3(coeffs, constants);

			if (det != 0)
			{
				textBox14->Text = System::Convert::ToString((float)detX1 / (float)det);
				textBox15->Text = System::Convert::ToString((float)detX2 / (float)det);
				textBox16->Text = System::Convert::ToString((float)detX3 / (float)det);
			}
			else
				textBox13->Text = "Ошибка";
		}
	}
		   //listBox
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		switch (listBox1->SelectedIndex)
		{
		case 0:
			textBox1->Text = System::Convert::ToString(system1[0][0]);
			textBox2->Text = System::Convert::ToString(system1[0][1]);
			textBox3->Text = System::Convert::ToString(system1[0][2]);
			textBox4->Text = System::Convert::ToString(system1[0][3]);
			textBox5->Text = System::Convert::ToString(system1[1][0]);
			textBox8->Text = System::Convert::ToString(system1[1][1]);
			textBox7->Text = System::Convert::ToString(system1[1][2]);
			textBox6->Text = System::Convert::ToString(system1[1][3]);
			textBox9->Text = System::Convert::ToString(system1[2][0]);
			textBox12->Text = System::Convert::ToString(system1[2][2]);
			textBox11->Text = System::Convert::ToString(system1[2][2]);
			textBox10->Text = System::Convert::ToString(system1[2][3]);
			textBox13->Text = textBox1->Text + "x + " + textBox2->Text + "y + " + textBox3->Text + "z = " + textBox4->Text + "\r\n\r\n"
				+ textBox5->Text + "x + " + textBox8->Text + "y + " + textBox7->Text + "z = " + textBox6->Text + "\r\n\r\n"
				+ textBox9->Text + "x + " + textBox12->Text + "y + " + textBox11->Text + "z = " + textBox10->Text;
			break;
		case 1:
			textBox1->Text = System::Convert::ToString(system2[0][0]);
			textBox2->Text = System::Convert::ToString(system2[0][1]);
			textBox3->Text = System::Convert::ToString(system2[0][2]);
			textBox4->Text = System::Convert::ToString(system2[0][3]);
			textBox5->Text = System::Convert::ToString(system2[1][0]);
			textBox8->Text = System::Convert::ToString(system2[1][1]);
			textBox7->Text = System::Convert::ToString(system2[1][2]);
			textBox6->Text = System::Convert::ToString(system2[1][3]);
			textBox9->Text = System::Convert::ToString(system2[2][0]);
			textBox12->Text = System::Convert::ToString(system2[2][2]);
			textBox11->Text = System::Convert::ToString(system2[2][2]);
			textBox10->Text = System::Convert::ToString(system2[2][3]);
			textBox13->Text = textBox1->Text + "x + " + textBox2->Text + "y + " + textBox3->Text + "z = " + textBox4->Text + "\r\n\r\n"
				+ textBox5->Text + "x + " + textBox8->Text + "y + " + textBox7->Text + "z = " + textBox6->Text + "\r\n\r\n"
				+ textBox9->Text + "x + " + textBox12->Text + "y + " + textBox11->Text + "z = " + textBox10->Text;
			break;
		case 2:
			textBox1->Text = System::Convert::ToString(system3[0][0]);
			textBox2->Text = System::Convert::ToString(system3[0][1]);
			textBox3->Text = System::Convert::ToString(system3[0][2]);
			textBox4->Text = System::Convert::ToString(system3[0][3]);
			textBox5->Text = System::Convert::ToString(system3[1][0]);
			textBox8->Text = System::Convert::ToString(system3[1][1]);
			textBox7->Text = System::Convert::ToString(system3[1][2]);
			textBox6->Text = System::Convert::ToString(system3[1][3]);
			textBox9->Text = System::Convert::ToString(system3[2][0]);
			textBox12->Text = System::Convert::ToString(system3[2][2]);
			textBox11->Text = System::Convert::ToString(system3[2][2]);
			textBox10->Text = System::Convert::ToString(system3[2][3]);
			textBox13->Text = textBox1->Text + "x + " + textBox2->Text + "y + " + textBox3->Text + "z = " + textBox4->Text + "\r\n\r\n"
				+ textBox5->Text + "x + " + textBox8->Text + "y + " + textBox7->Text + "z = " + textBox6->Text + "\r\n\r\n"
				+ textBox9->Text + "x + " + textBox12->Text + "y + " + textBox11->Text + "z = " + textBox10->Text;
			break;
		case 3:
			textBox1->Text = System::Convert::ToString(system4[0][0]);
			textBox2->Text = System::Convert::ToString(system4[0][1]);
			textBox3->Text = System::Convert::ToString(system4[0][2]);
			textBox4->Text = System::Convert::ToString(system4[0][3]);
			textBox5->Text = System::Convert::ToString(system4[1][0]);
			textBox8->Text = System::Convert::ToString(system4[1][1]);
			textBox7->Text = System::Convert::ToString(system4[1][2]);
			textBox6->Text = System::Convert::ToString(system4[1][3]);
			textBox9->Text = System::Convert::ToString(system4[2][0]);
			textBox12->Text = System::Convert::ToString(system4[2][2]);
			textBox11->Text = System::Convert::ToString(system4[2][2]);
			textBox10->Text = System::Convert::ToString(system4[2][3]);
			textBox13->Text = textBox1->Text + "x + " + textBox2->Text + "y + " + textBox3->Text + "z = " + textBox4->Text + "\r\n\r\n"
				+ textBox5->Text + "x + " + textBox8->Text + "y + " + textBox7->Text + "z = " + textBox6->Text + "\r\n\r\n"
				+ textBox9->Text + "x + " + textBox12->Text + "y + " + textBox11->Text + "z = " + textBox10->Text;
			break;
		default:
			break;
		}
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
