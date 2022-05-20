#include <ctype.h>

#pragma once

namespace Calculator
{
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
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::ComboBox^ comboBox1;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(144, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X^8 + ";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(85, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 21);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::DarkGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(199, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 21);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->BackColor = System::Drawing::Color::DarkGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(313, 83);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 21);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(258, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"X^7 + ";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(372, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X^6 + ";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::DarkGray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(541, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 21);
			this->textBox3->TabIndex = 15;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::Color::DarkGray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(427, 83);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 21);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(486, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"X^5 + ";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->BackColor = System::Drawing::Color::DarkGray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(997, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 21);
			this->textBox5->TabIndex = 23;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(942, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"X^1 + ";
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox7->BackColor = System::Drawing::Color::DarkGray;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Location = System::Drawing::Point(883, 83);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 21);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(828, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"X^2 + ";
			// 
			// textBox8
			// 
			this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox8->BackColor = System::Drawing::Color::DarkGray;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Location = System::Drawing::Point(769, 83);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(53, 21);
			this->textBox8->TabIndex = 19;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(714, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"X^3 + ";
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox9->BackColor = System::Drawing::Color::DarkGray;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Location = System::Drawing::Point(655, 83);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 21);
			this->textBox9->TabIndex = 17;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(600, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"X^4 + ";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(1056, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"X^0";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(307, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(475, 31);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Калькулятор многочленов 8 степени";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->BackColor = System::Drawing::Color::DarkGray;
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"+", L"-", L"*" });
			this->comboBox2->Location = System::Drawing::Point(12, 107);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(52, 32);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(1056, 148);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 20);
			this->label11->TabIndex = 45;
			this->label11->Text = L"X^0";
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox10->BackColor = System::Drawing::Color::DarkGray;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Location = System::Drawing::Point(997, 147);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(53, 21);
			this->textBox10->TabIndex = 44;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(942, 148);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 20);
			this->label12->TabIndex = 43;
			this->label12->Text = L"X^1 + ";
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox11->BackColor = System::Drawing::Color::DarkGray;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Location = System::Drawing::Point(883, 147);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(53, 21);
			this->textBox11->TabIndex = 42;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(828, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 20);
			this->label13->TabIndex = 41;
			this->label13->Text = L"X^2 + ";
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox12->BackColor = System::Drawing::Color::DarkGray;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Location = System::Drawing::Point(769, 147);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(53, 21);
			this->textBox12->TabIndex = 40;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(714, 148);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 20);
			this->label14->TabIndex = 39;
			this->label14->Text = L"X^3 + ";
			// 
			// textBox13
			// 
			this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox13->BackColor = System::Drawing::Color::DarkGray;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Location = System::Drawing::Point(655, 147);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(53, 21);
			this->textBox13->TabIndex = 38;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label15->ForeColor = System::Drawing::SystemColors::Control;
			this->label15->Location = System::Drawing::Point(600, 148);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 20);
			this->label15->TabIndex = 37;
			this->label15->Text = L"X^4 + ";
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::Color::DarkGray;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Location = System::Drawing::Point(541, 147);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(53, 21);
			this->textBox14->TabIndex = 36;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(486, 148);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 20);
			this->label16->TabIndex = 35;
			this->label16->Text = L"X^5 + ";
			// 
			// textBox15
			// 
			this->textBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox15->BackColor = System::Drawing::Color::DarkGray;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Location = System::Drawing::Point(427, 147);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(53, 21);
			this->textBox15->TabIndex = 34;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label17->ForeColor = System::Drawing::SystemColors::Control;
			this->label17->Location = System::Drawing::Point(372, 148);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 20);
			this->label17->TabIndex = 33;
			this->label17->Text = L"X^6 + ";
			// 
			// textBox16
			// 
			this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox16->BackColor = System::Drawing::Color::DarkGray;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Location = System::Drawing::Point(313, 147);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(53, 21);
			this->textBox16->TabIndex = 32;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label18->ForeColor = System::Drawing::SystemColors::Control;
			this->label18->Location = System::Drawing::Point(258, 148);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 20);
			this->label18->TabIndex = 31;
			this->label18->Text = L"X^7 + ";
			// 
			// textBox17
			// 
			this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox17->BackColor = System::Drawing::Color::DarkGray;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox17->Location = System::Drawing::Point(199, 147);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(53, 21);
			this->textBox17->TabIndex = 30;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// textBox18
			// 
			this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox18->BackColor = System::Drawing::Color::DarkGray;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox18->Location = System::Drawing::Point(85, 147);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(53, 21);
			this->textBox18->TabIndex = 29;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label19->ForeColor = System::Drawing::SystemColors::Control;
			this->label19->Location = System::Drawing::Point(144, 148);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 20);
			this->label19->TabIndex = 28;
			this->label19->Text = L"X^8 + ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->ImageLocation = L"line.jpg";
			this->pictureBox1->Location = System::Drawing::Point(69, 186);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1037, 13);
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label20->ForeColor = System::Drawing::SystemColors::Control;
			this->label20->Location = System::Drawing::Point(1056, 262);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 20);
			this->label20->TabIndex = 64;
			this->label20->Text = L"X^0";
			// 
			// textBox19
			// 
			this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox19->BackColor = System::Drawing::Color::DarkGray;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox19->Location = System::Drawing::Point(997, 261);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(53, 21);
			this->textBox19->TabIndex = 63;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label21->ForeColor = System::Drawing::SystemColors::Control;
			this->label21->Location = System::Drawing::Point(942, 262);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(53, 20);
			this->label21->TabIndex = 62;
			this->label21->Text = L"X^1 + ";
			// 
			// textBox20
			// 
			this->textBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox20->BackColor = System::Drawing::Color::DarkGray;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox20->Location = System::Drawing::Point(883, 261);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(53, 21);
			this->textBox20->TabIndex = 61;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label22->ForeColor = System::Drawing::SystemColors::Control;
			this->label22->Location = System::Drawing::Point(828, 262);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 20);
			this->label22->TabIndex = 60;
			this->label22->Text = L"X^2 + ";
			// 
			// textBox21
			// 
			this->textBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox21->BackColor = System::Drawing::Color::DarkGray;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox21->Location = System::Drawing::Point(769, 261);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(53, 21);
			this->textBox21->TabIndex = 59;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label23->ForeColor = System::Drawing::SystemColors::Control;
			this->label23->Location = System::Drawing::Point(714, 262);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 20);
			this->label23->TabIndex = 58;
			this->label23->Text = L"X^3 + ";
			// 
			// textBox22
			// 
			this->textBox22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox22->BackColor = System::Drawing::Color::DarkGray;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox22->Location = System::Drawing::Point(655, 261);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(53, 21);
			this->textBox22->TabIndex = 57;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label24->ForeColor = System::Drawing::SystemColors::Control;
			this->label24->Location = System::Drawing::Point(600, 262);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(53, 20);
			this->label24->TabIndex = 56;
			this->label24->Text = L"X^4 + ";
			// 
			// textBox23
			// 
			this->textBox23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox23->BackColor = System::Drawing::Color::DarkGray;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox23->Location = System::Drawing::Point(541, 261);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(53, 21);
			this->textBox23->TabIndex = 55;
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label25->ForeColor = System::Drawing::SystemColors::Control;
			this->label25->Location = System::Drawing::Point(486, 262);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 20);
			this->label25->TabIndex = 54;
			this->label25->Text = L"X^5 + ";
			// 
			// textBox24
			// 
			this->textBox24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox24->BackColor = System::Drawing::Color::DarkGray;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox24->Location = System::Drawing::Point(427, 261);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(53, 21);
			this->textBox24->TabIndex = 53;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label26->ForeColor = System::Drawing::SystemColors::Control;
			this->label26->Location = System::Drawing::Point(372, 262);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(53, 20);
			this->label26->TabIndex = 52;
			this->label26->Text = L"X^6 + ";
			// 
			// textBox25
			// 
			this->textBox25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox25->BackColor = System::Drawing::Color::DarkGray;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox25->Location = System::Drawing::Point(313, 261);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(53, 21);
			this->textBox25->TabIndex = 51;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label27->ForeColor = System::Drawing::SystemColors::Control;
			this->label27->Location = System::Drawing::Point(258, 262);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(53, 20);
			this->label27->TabIndex = 50;
			this->label27->Text = L"X^7 + ";
			// 
			// textBox26
			// 
			this->textBox26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox26->BackColor = System::Drawing::Color::DarkGray;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox26->Location = System::Drawing::Point(199, 261);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(53, 21);
			this->textBox26->TabIndex = 49;
			// 
			// textBox27
			// 
			this->textBox27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox27->BackColor = System::Drawing::Color::DarkGray;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox27->Location = System::Drawing::Point(85, 261);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(53, 21);
			this->textBox27->TabIndex = 48;
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label28->ForeColor = System::Drawing::SystemColors::Control;
			this->label28->Location = System::Drawing::Point(144, 262);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 20);
			this->label28->TabIndex = 47;
			this->label28->Text = L"X^8 + ";
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label29->ForeColor = System::Drawing::SystemColors::Control;
			this->label29->Location = System::Drawing::Point(31, 186);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 25);
			this->label29->TabIndex = 65;
			this->label29->Text = L"=";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(85, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 66;
			this->button1->Text = L"Результат";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(85, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 30);
			this->button2->TabIndex = 67;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox29
			// 
			this->textBox29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox29->BackColor = System::Drawing::Color::DarkGray;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox29->Location = System::Drawing::Point(883, 217);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(53, 21);
			this->textBox29->TabIndex = 82;
			this->textBox29->Visible = false;
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label32->ForeColor = System::Drawing::SystemColors::Control;
			this->label32->Location = System::Drawing::Point(828, 218);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(62, 20);
			this->label32->TabIndex = 81;
			this->label32->Text = L"X^10 + ";
			this->label32->Visible = false;
			// 
			// textBox30
			// 
			this->textBox30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox30->BackColor = System::Drawing::Color::DarkGray;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox30->Location = System::Drawing::Point(769, 217);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(53, 21);
			this->textBox30->TabIndex = 80;
			this->textBox30->Visible = false;
			// 
			// label33
			// 
			this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label33->ForeColor = System::Drawing::SystemColors::Control;
			this->label33->Location = System::Drawing::Point(714, 218);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 20);
			this->label33->TabIndex = 79;
			this->label33->Text = L"X^11 + ";
			this->label33->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox31->BackColor = System::Drawing::Color::DarkGray;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox31->Location = System::Drawing::Point(655, 217);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(53, 21);
			this->textBox31->TabIndex = 78;
			this->textBox31->Visible = false;
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label34->ForeColor = System::Drawing::SystemColors::Control;
			this->label34->Location = System::Drawing::Point(600, 218);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(62, 20);
			this->label34->TabIndex = 77;
			this->label34->Text = L"X^12 + ";
			this->label34->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox32->BackColor = System::Drawing::Color::DarkGray;
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox32->Location = System::Drawing::Point(541, 217);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(53, 21);
			this->textBox32->TabIndex = 76;
			this->textBox32->Visible = false;
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label35->ForeColor = System::Drawing::SystemColors::Control;
			this->label35->Location = System::Drawing::Point(486, 218);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(62, 20);
			this->label35->TabIndex = 75;
			this->label35->Text = L"X^13 + ";
			this->label35->Visible = false;
			// 
			// textBox33
			// 
			this->textBox33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox33->BackColor = System::Drawing::Color::DarkGray;
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox33->Location = System::Drawing::Point(427, 217);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(53, 21);
			this->textBox33->TabIndex = 74;
			this->textBox33->Visible = false;
			// 
			// label36
			// 
			this->label36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label36->ForeColor = System::Drawing::SystemColors::Control;
			this->label36->Location = System::Drawing::Point(372, 218);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(62, 20);
			this->label36->TabIndex = 73;
			this->label36->Text = L"X^14 + ";
			this->label36->Visible = false;
			// 
			// textBox34
			// 
			this->textBox34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox34->BackColor = System::Drawing::Color::DarkGray;
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox34->Location = System::Drawing::Point(313, 217);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(53, 21);
			this->textBox34->TabIndex = 72;
			this->textBox34->Visible = false;
			// 
			// label37
			// 
			this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label37->ForeColor = System::Drawing::SystemColors::Control;
			this->label37->Location = System::Drawing::Point(258, 218);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(62, 20);
			this->label37->TabIndex = 71;
			this->label37->Text = L"X^15 + ";
			this->label37->Visible = false;
			// 
			// textBox35
			// 
			this->textBox35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox35->BackColor = System::Drawing::Color::DarkGray;
			this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox35->Location = System::Drawing::Point(199, 217);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(53, 21);
			this->textBox35->TabIndex = 70;
			this->textBox35->Visible = false;
			// 
			// textBox36
			// 
			this->textBox36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox36->BackColor = System::Drawing::Color::DarkGray;
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox36->Location = System::Drawing::Point(85, 217);
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(53, 21);
			this->textBox36->TabIndex = 69;
			this->textBox36->Visible = false;
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label38->ForeColor = System::Drawing::SystemColors::Control;
			this->label38->Location = System::Drawing::Point(144, 218);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(62, 20);
			this->label38->TabIndex = 68;
			this->label38->Text = L"X^16 + ";
			this->label38->Visible = false;
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label31->ForeColor = System::Drawing::SystemColors::Control;
			this->label31->Location = System::Drawing::Point(942, 218);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(53, 20);
			this->label31->TabIndex = 83;
			this->label31->Text = L"X^9 + ";
			this->label31->Visible = false;
			// 
			// label30
			// 
			this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->label30->ForeColor = System::Drawing::SystemColors::Control;
			this->label30->Location = System::Drawing::Point(57, 262);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 20);
			this->label30->TabIndex = 84;
			this->label30->Text = L"+ ";
			this->label30->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->BackColor = System::Drawing::Color::DarkGray;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"РУС", L"ENG" });
			this->comboBox1->Location = System::Drawing::Point(1013, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(79, 23);
			this->comboBox1->TabIndex = 85;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1116, 413);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Калькулятор многочленов 8 степени";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Обработка нажатия на кнопку результат 
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//Коэффициенты первого многочлена
			int x0_1;
			int x1_1;
			int x2_1;
			int x3_1;
			int x4_1;
			int x5_1;
			int x6_1;
			int x7_1;
			int x8_1;

			//Коэффициенты второго многочлена
			int x0_2;
			int x1_2;
			int x2_2;
			int x3_2;
			int x4_2;
			int x5_2;
			int x6_2;
			int x7_2;
			int x8_2;

			//Коэффициенты результата
			int x0_3;
			int x1_3;
			int x2_3;
			int x3_3;
			int x4_3;
			int x5_3;
			int x6_3;
			int x7_3;
			int x8_3;

			int x9_3;
			int x10_3;
			int x11_3;
			int x12_3;
			int x13_3;
			int x14_3;
			int x15_3;
			int x16_3;

			//Занесение коэффициентов в переменные (или 0, если ничего не введено)
			if (textBox5->Text == "")
				x0_1 = 0;
			else
				x0_1 = System::Convert::ToInt32(textBox5->Text);

			if (textBox7->Text == "")
				x1_1 = 0;
			else
				x1_1 = System::Convert::ToInt32(textBox7->Text);

			if (textBox8->Text == "")
				x2_1 = 0;
			else
				x2_1 = System::Convert::ToInt32(textBox8->Text);

			if (textBox9->Text == "")
				x3_1 = 0;
			else
				x3_1 = System::Convert::ToInt32(textBox9->Text);

			if (textBox3->Text == "")
				x4_1 = 0;
			else
				x4_1 = System::Convert::ToInt32(textBox3->Text);

			if (textBox4->Text == "")
				x5_1 = 0;
			else
				x5_1 = System::Convert::ToInt32(textBox4->Text);

			if (textBox6->Text == "")
				x6_1 = 0;
			else
				x6_1 = System::Convert::ToInt32(textBox6->Text);

			if (textBox2->Text == "")
				x7_1 = 0;
			else
				x7_1 = System::Convert::ToInt32(textBox2->Text);

			if (textBox1->Text == "")
				x8_1 = 0;
			else
				x8_1 = System::Convert::ToInt32(textBox1->Text);



			if (textBox10->Text == "")
				x0_2 = 0;
			else
				x0_2 = System::Convert::ToInt32(textBox10->Text);

			if (textBox11->Text == "")
				x1_2 = 0;
			else
				x1_2 = System::Convert::ToInt32(textBox11->Text);

			if (textBox12->Text == "")
				x2_2 = 0;
			else
				x2_2 = System::Convert::ToInt32(textBox12->Text);

			if (textBox13->Text == "")
				x3_2 = 0;
			else
				x3_2 = System::Convert::ToInt32(textBox13->Text);

			if (textBox14->Text == "")
				x4_2 = 0;
			else
				x4_2 = System::Convert::ToInt32(textBox14->Text);

			if (textBox15->Text == "")
				x5_2 = 0;
			else
				x5_2 = System::Convert::ToInt32(textBox15->Text);

			if (textBox16->Text == "")
				x6_2 = 0;
			else
				x6_2 = System::Convert::ToInt32(textBox16->Text);

			if (textBox17->Text == "")
				x7_2 = 0;
			else
				x7_2 = System::Convert::ToInt32(textBox17->Text);

			if (textBox18->Text == "")
				x8_2 = 0;
			else
				x8_2 = System::Convert::ToInt32(textBox18->Text);

			//Если Выбран сложение
			if (comboBox2->SelectedItem == "+")
			{
				//Присвоение коэффициентов результата
				x0_3 = x0_1 + x0_2;
				x1_3 = x1_1 + x1_2;
				x2_3 = x2_1 + x2_2;
				x3_3 = x3_1 + x3_2;
				x4_3 = x4_1 + x4_2;
				x5_3 = x5_1 + x5_2;
				x6_3 = x6_1 + x6_2;
				x7_3 = x7_1 + x7_2;
				x8_3 = x8_1 + x8_2;

				//Вывод результата
				textBox27->Text = System::Convert::ToString(x8_3);
				textBox26->Text = System::Convert::ToString(x7_3);
				textBox25->Text = System::Convert::ToString(x6_3);
				textBox24->Text = System::Convert::ToString(x5_3);
				textBox23->Text = System::Convert::ToString(x4_3);
				textBox22->Text = System::Convert::ToString(x3_3);
				textBox21->Text = System::Convert::ToString(x2_3);
				textBox20->Text = System::Convert::ToString(x1_3);
				textBox19->Text = System::Convert::ToString(x0_3);

				//Выставление пустых значений в незадействованных ячейках результата
				textBox36->Text = "";
				textBox35->Text = "";
				textBox34->Text = "";
				textBox33->Text = "";
				textBox32->Text = "";
				textBox31->Text = "";
				textBox30->Text = "";
				textBox29->Text = "";

				//Прячет незадействованные ячейки результата
				textBox36->Visible = 0;
				textBox35->Visible = 0;
				textBox34->Visible = 0;
				textBox33->Visible = 0;
				textBox32->Visible = 0;
				textBox31->Visible = 0;
				textBox30->Visible = 0;
				textBox29->Visible = 0;

				//Прячет незадействованную часть итогового многочлена 
				label38->Visible = 0;
				label37->Visible = 0;
				label36->Visible = 0;
				label35->Visible = 0;
				label34->Visible = 0;
				label33->Visible = 0;
				label32->Visible = 0;
				label31->Visible = 0;
				label30->Visible = 0;
			}

			//Если выбрано вычитание
			else if (comboBox2->SelectedItem == "-")
			{
				//Присвоение коэффициентов результата
				x0_3 = x0_1 - x0_2;
				x1_3 = x1_1 - x1_2;
				x2_3 = x2_1 - x2_2;
				x3_3 = x3_1 - x3_2;
				x4_3 = x4_1 - x4_2;
				x5_3 = x5_1 - x5_2;
				x6_3 = x6_1 - x6_2;
				x7_3 = x7_1 - x7_2;
				x8_3 = x8_1 - x8_2;

				//Вывод результата
				textBox27->Text = System::Convert::ToString(x8_3);
				textBox26->Text = System::Convert::ToString(x7_3);
				textBox25->Text = System::Convert::ToString(x6_3);
				textBox24->Text = System::Convert::ToString(x5_3);
				textBox23->Text = System::Convert::ToString(x4_3);
				textBox22->Text = System::Convert::ToString(x3_3);
				textBox21->Text = System::Convert::ToString(x2_3);
				textBox20->Text = System::Convert::ToString(x1_3);
				textBox19->Text = System::Convert::ToString(x0_3);

				//Выставление пустых значений в незадействованных ячейках результата
				textBox36->Text = "";
				textBox35->Text = "";
				textBox34->Text = "";
				textBox33->Text = "";
				textBox32->Text = "";
				textBox31->Text = "";
				textBox30->Text = "";
				textBox29->Text = "";

				//Прячет незадействованные ячейки результата
				textBox36->Visible = 0;
				textBox35->Visible = 0;
				textBox34->Visible = 0;
				textBox33->Visible = 0;
				textBox32->Visible = 0;
				textBox31->Visible = 0;
				textBox30->Visible = 0;
				textBox29->Visible = 0;

				//Прячет незадействованную часть итогового многочлена 
				label38->Visible = 0;
				label37->Visible = 0;
				label36->Visible = 0;
				label35->Visible = 0;
				label34->Visible = 0;
				label33->Visible = 0;
				label32->Visible = 0;
				label31->Visible = 0;
				label30->Visible = 0;
			}

			else if (comboBox2->SelectedItem == "*")
			{
				//Присвоение коэффициентов результата
				x0_3 = x0_1 * x0_2;
				x1_3 = x1_1 * x0_2 + x0_1 * x1_2;
				x2_3 = x2_1 * x0_2 + x1_1 * x1_2 + x0_1 * x2_2;
				x3_3 = x3_1 * x0_2 + x2_1 * x1_2 + x1_1 * x2_2 + x0_1 * x3_2;
				x4_3 = x4_1 * x0_2 + x3_1 * x1_2 + x2_1 * x2_2 + x1_1 * x3_2 + x0_1 * x4_2;
				x5_3 = x5_1 * x0_2 + x4_1 * x1_2 + x3_1 * x2_2 + x2_1 * x3_2 + x1_1 * x4_2 + x0_1 * x5_2;
				x6_3 = x6_1 * x0_2 + x5_1 * x1_2 + x4_1 * x2_2 + x3_1 * x3_2 + x2_1 * x4_2 + x1_1 * x5_2 + x0_1 * x6_2;
				x7_3 = x7_1 * x0_2 + x6_1 * x1_2 + x5_1 * x2_2 + x4_1 * x3_2 + x3_1 * x4_2 + x2_1 * x5_2 + x1_1 * x6_2 + x0_1 * x7_2;
				x8_3 = x8_1 * x0_2 + x7_1 * x1_2 + x6_1 * x2_2 + x5_1 * x3_2 + x4_1 * x4_2 + x3_1 * x5_2 + x2_1 * x6_2 + x1_1 * x7_2 + x0_1 * x8_2;

				x9_3 = x8_1 * x1_2 + x7_1 * x2_2 + x6_1 * x3_2 + x5_1 * x4_2 + x4_1 * x5_2 + x3_1 * x6_2 + x2_1 * x7_2 + x1_1 * x8_2;
				x10_3 = x8_1 * x2_2 + x7_1 * x3_2 + x6_1 * x4_2 + x5_1 * x5_2 + x4_1 * x6_2 + x3_1 * x7_2 + x2_1 * x8_2;
				x11_3 = x8_1 * x3_2 + x7_1 * x4_2 + x6_1 * x5_2 + x5_1 * x6_2 + x4_1 * x7_2 + x3_1 * x8_2;
				x12_3 = x8_1 * x4_2 + x7_1 * x5_2 + x6_1 * x6_2 + x5_1 * x7_2 + x4_1 * x8_2;
				x13_3 = x8_1 * x5_2 + x7_1 * x6_2 + x6_1 * x7_2 + x5_1 * x8_2;
				x14_3 = x8_1 * x6_2 + x7_1 * x7_2 + x6_1 * x8_2;
				x15_3 = x8_1 * x7_2 + x7_1 * x8_2;
				x16_3 = x8_1 * x8_2;

				//Вывод результата
				textBox36->Text = System::Convert::ToString(x16_3);
				textBox35->Text = System::Convert::ToString(x15_3);
				textBox34->Text = System::Convert::ToString(x14_3);
				textBox33->Text = System::Convert::ToString(x13_3);
				textBox32->Text = System::Convert::ToString(x12_3);
				textBox31->Text = System::Convert::ToString(x11_3);
				textBox30->Text = System::Convert::ToString(x10_3);
				textBox29->Text = System::Convert::ToString(x9_3);

				textBox27->Text = System::Convert::ToString(x8_3);
				textBox26->Text = System::Convert::ToString(x7_3);
				textBox25->Text = System::Convert::ToString(x6_3);
				textBox24->Text = System::Convert::ToString(x5_3);
				textBox23->Text = System::Convert::ToString(x4_3);
				textBox22->Text = System::Convert::ToString(x3_3);
				textBox21->Text = System::Convert::ToString(x2_3);
				textBox20->Text = System::Convert::ToString(x1_3);
				textBox19->Text = System::Convert::ToString(x0_3);

				//Показывает задействованные только в умножении коэффициенты
				textBox36->Visible = 1;
				textBox35->Visible = 1;
				textBox34->Visible = 1;
				textBox33->Visible = 1;
				textBox32->Visible = 1;
				textBox31->Visible = 1;
				textBox30->Visible = 1;
				textBox29->Visible = 1;

				//Показывает задействованную только в умножении часть многочлена
				label38->Visible = 1;
				label37->Visible = 1;
				label36->Visible = 1;
				label35->Visible = 1;
				label34->Visible = 1;
				label33->Visible = 1;
				label32->Visible = 1;
				label31->Visible = 1;
				label30->Visible = 1;
			}
			//Если не выбрана никакая операция
			else
			{
				MessageBox::Show("Выберите операцию", "Не выбрана операция");
			}
		}

		//Обработка нажатия на кнопку сброса
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			//Опустошает все коэффициенты
			textBox36->Text = "";
			textBox35->Text = "";
			textBox34->Text = "";
			textBox33->Text = "";
			textBox32->Text = "";
			textBox31->Text = "";
			textBox30->Text = "";
			textBox29->Text = "";
			textBox27->Text = "";
			textBox26->Text = "";
			textBox25->Text = "";
			textBox24->Text = "";
			textBox23->Text = "";
			textBox22->Text = "";
			textBox21->Text = "";
			textBox20->Text = "";
			textBox19->Text = "";
			textBox18->Text = "";
			textBox17->Text = "";
			textBox16->Text = "";
			textBox15->Text = "";
			textBox14->Text = "";
			textBox13->Text = "";
			textBox12->Text = "";
			textBox11->Text = "";
			textBox10->Text = "";
			textBox9->Text = "";
			textBox8->Text = "";
			textBox7->Text = "";
			textBox6->Text = "";
			textBox5->Text = "";
			textBox4->Text = "";
			textBox3->Text = "";
			textBox2->Text = "";
			textBox1->Text = "";

			//Прячет незадействованные в сложении и вычитании коэффициенты
			textBox36->Visible = 0;
			textBox35->Visible = 0;
			textBox34->Visible = 0;
			textBox33->Visible = 0;
			textBox32->Visible = 0;
			textBox31->Visible = 0;
			textBox30->Visible = 0;
			textBox29->Visible = 0;

			//Прячет незадействованную в сложении и вычитании часть многочлена
			label38->Visible = 0;
			label37->Visible = 0;
			label36->Visible = 0;
			label35->Visible = 0;
			label34->Visible = 0;
			label33->Visible = 0;
			label32->Visible = 0;
			label31->Visible = 0;
			label30->Visible = 0;
		}

		private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{

		}

		//Запрет на ввод любых символов, кроме цифр в текстовые поля
		private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox1->Text->Length; ++i)
				if (textBox1->Text[i] >= '0' && textBox1->Text[i] <= '9')
					fin += textBox1->Text[i];

			textBox1->Text = fin;
		}
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox2->Text->Length; ++i)
				if (textBox2->Text[i] >= '0' && textBox2->Text[i] <= '9')
					fin += textBox2->Text[i];

			textBox2->Text = fin;
		}
		private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox6->Text->Length; ++i)
				if (textBox6->Text[i] >= '0' && textBox6->Text[i] <= '9')
					fin += textBox6->Text[i];

			textBox6->Text = fin;
		}
		private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox4->Text->Length; ++i)
				if (textBox4->Text[i] >= '0' && textBox4->Text[i] <= '9')
					fin += textBox4->Text[i];

			textBox4->Text = fin;
		}
		private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox3->Text->Length; ++i)
				if (textBox3->Text[i] >= '0' && textBox3->Text[i] <= '9')
					fin += textBox3->Text[i];

			textBox3->Text = fin;
		}
		private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox9->Text->Length; ++i)
				if (textBox9->Text[i] >= '0' && textBox9->Text[i] <= '9')
					fin += textBox9->Text[i];

			textBox9->Text = fin;
		}
		private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox8->Text->Length; ++i)
				if (textBox8->Text[i] >= '0' && textBox8->Text[i] <= '9')
					fin += textBox8->Text[i];

			textBox8->Text = fin;
		}
		private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox7->Text->Length; ++i)
				if (textBox7->Text[i] >= '0' && textBox7->Text[i] <= '9')
					fin += textBox7->Text[i];

			textBox7->Text = fin;
		}
		private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox5->Text->Length; ++i)
				if (textBox5->Text[i] >= '0' && textBox5->Text[i] <= '9')
					fin += textBox5->Text[i];

			textBox5->Text = fin;
		}
		private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox18->Text->Length; ++i)
				if (textBox18->Text[i] >= '0' && textBox18->Text[i] <= '9')
					fin += textBox18->Text[i];

			textBox18->Text = fin;
		}
		private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox17->Text->Length; ++i)
				if (textBox17->Text[i] >= '0' && textBox17->Text[i] <= '9')
					fin += textBox17->Text[i];

			textBox17->Text = fin;
		}
		private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox16->Text->Length; ++i)
				if (textBox16->Text[i] >= '0' && textBox16->Text[i] <= '9')
					fin += textBox16->Text[i];

			textBox16->Text = fin;

		}
		private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox15->Text->Length; ++i)
				if (textBox15->Text[i] >= '0' && textBox15->Text[i] <= '9')
					fin += textBox15->Text[i];

			textBox15->Text = fin;
		}
		private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox14->Text->Length; ++i)
				if (textBox14->Text[i] >= '0' && textBox14->Text[i] <= '9')
					fin += textBox14->Text[i];

			textBox14->Text = fin;
		}
		private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox13->Text->Length; ++i)
				if (textBox13->Text[i] >= '0' && textBox13->Text[i] <= '9')
					fin += textBox13->Text[i];

			textBox13->Text = fin;
		}
		private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox12->Text->Length; ++i)
				if (textBox12->Text[i] >= '0' && textBox12->Text[i] <= '9')
					fin += textBox12->Text[i];

			textBox12->Text = fin;
		}
		private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox11->Text->Length; ++i)
				if (textBox11->Text[i] >= '0' && textBox11->Text[i] <= '9')
					fin += textBox11->Text[i];

			textBox11->Text = fin;
		}
		private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			String^ fin;

			for (int i = 0; i < textBox10->Text->Length; ++i)
				if (textBox10->Text[i] >= '0' && textBox10->Text[i] <= '9')
					fin += textBox10->Text[i];

			textBox10->Text = fin;
		}

		//Выставление значений по умолчанию для операции и для языка
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			comboBox1->SelectedIndex = 0;
			comboBox1->SelectedItem = "РУС";

			comboBox2->SelectedIndex = 0;
			comboBox2->SelectedItem = "+";
		}

		//Обработка смены языка
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (comboBox1->SelectedItem == "РУС")
			{
				button1->Text = "Результат";
				button2->Text = "Сброс";
				label10->Text = "Кальулятор многочленов 8 степени";
			}
			else if (comboBox1->SelectedItem == "ENG")
			{
				button1->Text = "Calculate";
				button2->Text = "Reset";
				label10->Text = "Polynomial calculator of 8th degree";
			}
		}
	};
}