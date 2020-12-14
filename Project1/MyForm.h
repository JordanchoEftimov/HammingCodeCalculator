#pragma once
#include <cmath>
#include <cstring>
#include <ctype.h>
namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox15;


	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::GroupBox^ groupBox3;









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(292, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(454, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hamming Code Calculator";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label2->Location = System::Drawing::Point(588, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Made by Jordancho Eftimov";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(320, 144);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(346, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ве молиме изберете една од понудените опции:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(324, 166);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(261, 21);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Кодирање на број со Хамингов код";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(324, 194);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(279, 21);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Декодирање на број од Хамингов код";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(364, 235);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(308, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(472, 267);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Пресметај";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(604, 319);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(274, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Податоци за декодирањето";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 350);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(223, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"1. Бројот претставен бинарно е:";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(16, 369);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(211, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Integer not inserted";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 398);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(301, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"2. Бројот на податочни битови изнесува - n:";
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::Red;
			this->textBox3->Location = System::Drawing::Point(16, 417);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(211, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Integer not inserted";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 446);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(299, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"3. Бројот на контролни битови изнесува - k:";
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::Red;
			this->textBox4->Location = System::Drawing::Point(16, 465);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(211, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"Integer not inserted";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 494);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(290, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"4. Вредности на контролните битови C се:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 510);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(-4, 343);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(310, 17);
			this->label11->TabIndex = 17;
			this->label11->Text = L"5. Битот за парност (само за растојание 4) е:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(-4, 390);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(297, 17);
			this->label12->TabIndex = 18;
			this->label12->Text = L"6. Внесениот број кодиран во Хамингов код";
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(9, 364);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 22);
			this->textBox5->TabIndex = 19;
			this->textBox5->Text = L"Integer not inserted";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(9, 430);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(211, 22);
			this->textBox6->TabIndex = 21;
			this->textBox6->Text = L"Integer not inserted";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(9, 494);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 22);
			this->textBox7->TabIndex = 22;
			this->textBox7->Text = L"Integer not inserted";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(-4, 456);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(297, 17);
			this->label14->TabIndex = 23;
			this->label14->Text = L"7. Внесениот број кодиран во Хамингов код";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(435, 350);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(220, 17);
			this->label16->TabIndex = 25;
			this->label16->Text = L"1. Број на контролни битови - k:";
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::Red;
			this->textBox8->Location = System::Drawing::Point(456, 369);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(189, 22);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"Code not inserted";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(436, 398);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(222, 17);
			this->label17->TabIndex = 27;
			this->label17->Text = L"2. Број на податочни битови - n:";
			// 
			// textBox9
			// 
			this->textBox9->ForeColor = System::Drawing::Color::Red;
			this->textBox9->Location = System::Drawing::Point(456, 417);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(189, 22);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"Code not inserted";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(436, 446);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(251, 17);
			this->label18->TabIndex = 29;
			this->label18->Text = L"3. Вредност на податочните битови:";
			// 
			// textBox10
			// 
			this->textBox10->ForeColor = System::Drawing::Color::Red;
			this->textBox10->Location = System::Drawing::Point(456, 465);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(189, 22);
			this->textBox10->TabIndex = 30;
			this->textBox10->Text = L"Code not inserted";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(435, 494);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(263, 17);
			this->label19->TabIndex = 31;
			this->label19->Text = L"4. Вредност на контролните битови C:";
			// 
			// textBox11
			// 
			this->textBox11->ForeColor = System::Drawing::Color::Red;
			this->textBox11->Location = System::Drawing::Point(456, 513);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(189, 22);
			this->textBox11->TabIndex = 32;
			this->textBox11->Text = L"Code not inserted";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(435, 542);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(244, 17);
			this->label20->TabIndex = 33;
			this->label20->Text = L"5. Контролните битови C, изразени";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(436, 558);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(92, 17);
			this->label21->TabIndex = 34;
			this->label21->Text = L"поединечно:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(743, 350);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(285, 17);
			this->label23->TabIndex = 36;
			this->label23->Text = L"7. Синдромот од P контролните битови е:";
			// 
			// textBox12
			// 
			this->textBox12->ForeColor = System::Drawing::Color::Red;
			this->textBox12->Location = System::Drawing::Point(784, 369);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(195, 22);
			this->textBox12->TabIndex = 37;
			this->textBox12->Text = L"Code not inserted";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(743, 398);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(233, 17);
			this->label24->TabIndex = 38;
			this->label24->Text = L"8. Според синдромот настанато е";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(743, 414);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(258, 17);
			this->label25->TabIndex = 39;
			this->label25->Text = L"грешка на (доколку е 0 нема грешка):";
			// 
			// textBox13
			// 
			this->textBox13->ForeColor = System::Drawing::Color::Red;
			this->textBox13->Location = System::Drawing::Point(784, 437);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(195, 22);
			this->textBox13->TabIndex = 40;
			this->textBox13->Text = L"Code not inserted";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(743, 469);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(250, 17);
			this->label26->TabIndex = 41;
			this->label26->Text = L"9. Кодот испратен по корекцијата е:";
			// 
			// textBox14
			// 
			this->textBox14->ForeColor = System::Drawing::Color::Red;
			this->textBox14->Location = System::Drawing::Point(784, 489);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(195, 22);
			this->textBox14->TabIndex = 42;
			this->textBox14->Text = L"Code not inserted";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(743, 517);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(243, 17);
			this->label27->TabIndex = 43;
			this->label27->Text = L"10. Бил испратен бројот (бинарно):";
			// 
			// textBox15
			// 
			this->textBox15->ForeColor = System::Drawing::Color::Red;
			this->textBox15->Location = System::Drawing::Point(784, 538);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(195, 22);
			this->textBox15->TabIndex = 44;
			this->textBox15->Text = L"Code not inserted";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(743, 569);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(242, 17);
			this->label28->TabIndex = 46;
			this->label28->Text = L"11. Бил испратен бројот (декадно):";
			// 
			// textBox16
			// 
			this->textBox16->ForeColor = System::Drawing::Color::Red;
			this->textBox16->Location = System::Drawing::Point(784, 588);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(195, 22);
			this->textBox16->TabIndex = 47;
			this->textBox16->Text = L"Code not inserted";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(-4, 473);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(128, 17);
			this->label15->TabIndex = 24;
			this->label15->Text = L"со растојание 4 e:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(-4, 409);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(128, 17);
			this->label13->TabIndex = 20;
			this->label13->Text = L"со растојание 3 е:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 16);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Податоци за кодирањето";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Red;
			this->label29->Location = System::Drawing::Point(47, 210);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(133, 18);
			this->label29->TabIndex = 25;
			this->label29->Text = L"Integer not inserted";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Location = System::Drawing::Point(7, 303);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(373, 652);
			this->groupBox1->TabIndex = 45;
			this->groupBox1->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(29, 406);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(263, 17);
			this->label22->TabIndex = 35;
			this->label22->Text = L"6. Вредност на контролните битови P:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Red;
			this->label30->Location = System::Drawing::Point(84, 267);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(125, 18);
			this->label30->TabIndex = 26;
			this->label30->Text = L"Code not inserted";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label31->Location = System::Drawing::Point(84, 423);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(125, 18);
			this->label31->TabIndex = 27;
			this->label31->Text = L"Code not inserted";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Location = System::Drawing::Point(407, 306);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(625, 649);
			this->groupBox3->TabIndex = 48;
			this->groupBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1033, 865);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Hamming Code Calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Insert decimal number";
		textBox1->ForeColor = Color::Gray;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Insert the binary string to decode";
		textBox1->ForeColor = Color::Gray;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->TextLength == 0 || textBox1->Text == "Insert decimal number" ||
			textBox1->Text == "Insert the binary string to decode") {
			MessageBox::Show("Please fill in the blank!", "Error has occured",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			if (radioButton1->Checked) {
				String^ number = textBox1->Text;

				bool flag = false;
				for (int i = 0; i < number->Length; i++) {
					if (!isdigit(number[i])) {
						flag = true;
					}
				}
				if (flag) {
					MessageBox::Show("Please insert a valid integer", "Integer not inserted",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else if (number->Length > 10) {
					MessageBox::Show("Please insert integer smaller then 2,147,483,648",
						"Integer too big!",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else if (System::Convert::ToInt64(number) > 2147483647) {
					MessageBox::Show("Please insert integer smaller then 2,147,483,648", 
						"Integer too big!",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else {
					int temp = System::Convert::ToInt32(number);
					int n = 0;
					int help = temp;
					while (help) {
						help /= 2;
						n++;
					}
					int* binary = new int[n];
					for (int i = n - 1; i >= 0; i--) {
						int bit = temp % 2;
						binary[i] = bit;
						temp /= 2;
					}

					int k;
					for (int i = 0; ; i++) {
						if (n <= pow(2, i) - 1 - i) {
							k = i;
							break;
						}
					}

					int* code = new int[n + k];
					int* C = new int[k];

					for (int i = 0; i < n + k; i++) {
						code[i] = 9;
					}

					for (int i = 0; i < k; i++) {
						C[i] = 0;
					}

					for (int i = 0; i < k; i++) {
						int index = pow(2, i) - 1;
						code[index] = C[i];
					}

					int j = 0;
					for (int i = 0; i < n + k; i++) {
						if (code[i] == 9) {
							code[i] = binary[j];
							j++;
						}
					}

					for (int i = 0; i < k; i++) {
						int sum = 0;
						int counter = pow(2, i);
						for (int j = pow(2, i) - 1; j < n + k; j++) {
							if (!counter) {
								counter += pow(2, i);
								j += pow(2, i) - 1;
							}
							else {
								sum += code[j];
								counter--;
							}
						}
						int newindex = pow(2, i) - 1;
						code[newindex] = sum % 2;
						C[i] = sum % 2;
					}

					int sum = 0;
					int parity;
					for (int i = 0; i < n + k; i++) {
						if (code[i]) {
							sum++;
						}
					}
					if (sum % 2) {
						parity = 1;
					}
					else {
						parity = 0;
					}


					number = "";
					for (int i = 0; i < n; i++) {
						number += System::Convert::ToString(binary[i]);
					}
					textBox2->Text = number;
					textBox2->ForeColor = Color::Black;


					String^ data_number = System::Convert::ToString(n);
					textBox3->Text = data_number;
					textBox3->ForeColor = Color::Black;


					String^ control_bits = System::Convert::ToString(k);
					textBox4->Text = control_bits;
					textBox4->ForeColor = Color::Black;


					String^ parity_bit = System::Convert::ToString(parity);
					textBox5->Text = parity_bit;
					textBox5->ForeColor = Color::Black;

					String^ coded = "";
					for (int i = 0; i < n + k; i++) {
						coded += System::Convert::ToString(code[i]);
					}
					textBox6->Text = coded;
					textBox6->ForeColor = Color::Black;

					coded += System::Convert::ToString(parity);
					textBox7->Text = coded;
					textBox7->ForeColor = Color::Black;

					String^ control_C = "";
					for (int i = 0; i < k; i++) {
						control_C += System::Convert::ToString("C" + (pow(2, i)) + " :" + C[i]);
						control_C += "\n";
					}
					label29->Text = control_C;
					label29->ForeColor = Color::Black;

					delete[] binary;
					delete[] code;
					delete[] C;

					//default values to textBoxes that are not neccessary
					textBox8->Text = "No data";
					textBox8->ForeColor = Color::Red;

					textBox9->Text = "No data";
					textBox9->ForeColor = Color::Red;

					textBox10->Text = "No data";
					textBox10->ForeColor = Color::Red;

					textBox11->Text = "No data";
					textBox11->ForeColor = Color::Red;

					label30->Text = "No data";
					label30->ForeColor = Color::Red;

					label31->Text = "No data";
					label31->ForeColor = Color::Red;

					textBox12->Text = "No data";
					textBox12->ForeColor = Color::Red;

					textBox13->Text = "No data";
					textBox13->ForeColor = Color::Red;

					textBox14->Text = "No data";
					textBox14->ForeColor = Color::Red;

					textBox15->Text = "No data";
					textBox15->ForeColor = Color::Red;

					textBox16->Text = "No data";
					textBox16->ForeColor = Color::Red;
				}
			}
			if (radioButton2->Checked) {
				String^ input = textBox1->Text;

				bool flag = false;
				for (int i = 0; i < input->Length; i++) {
					if (input[i] != '1' && input[i] != '0') {
						flag = true;
					}
				}
				if (flag) {
					MessageBox::Show("Please insert a valid binary string", "Binary string not inserted",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else if (input->Length > 37) {
					MessageBox::Show("The maximum size for the binary string is 37 bits!", "Binary string too big!",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				else {
					int n = input->Length;
					int hamming[100];

					for (int i = 0; i < n; i++) {
						hamming[i] = input[i] - '0';
					}

					int controls = ceil(log2(n + 1));
					int data = n - controls;

					int* first_binary = new int[data];
					int j = 0;
					int power = 1;
					for (int i = 0; i < n; i++) {
						if (i == power - 1) {
							power *= 2;
						}
						else first_binary[j++] = hamming[i];
					}

					int* first_controls = new int[controls];
					j = 0;
					power = 1;
					for (int i = 0; i < n; i++) {
						if (i == power - 1) {
							first_controls[j++] = hamming[i];
							power *= 2;
						}
					}


					int* P = new int[controls];
					for (int i = 0; i < controls; i++) {
						int sum = 0;
						int counter = pow(2, i);
						for (int j = pow(2, i) - 1; j < n; j++) {
							if (!counter) {
								counter += pow(2, i);
								j += pow(2, i) - 1;
							}
							else {
								sum += hamming[j];
								counter--;
							}
						}
						P[i] = sum % 2;
					}

					int mistake = 0;

					for (int i = 0; i < controls; i++) {
						mistake += P[i] * pow(2, i);
					}

					if (mistake) {
						if (hamming[mistake - 1]) {
							hamming[mistake - 1] = 0;
						}
						else hamming[mistake - 1] = 1;
					}

					int* binary = new int[data];
					j = 0;
					power = 1;
					for (int i = 0; i < n; i++) {
						if (i == power - 1) {
							power *= 2;
						}
						else binary[j++] = hamming[i];
					}
					int decimal = 0;
					int p = 0;
					for (int i = data - 1; i >= 0; i--) {
						decimal += binary[i] * pow(2, p++);
					}

					String^ k = System::Convert::ToString(controls);
					textBox8->Text = k;
					textBox8->ForeColor = Color::Black;

					String^ data_bits = System::Convert::ToString(data);
					textBox9->Text = data_bits;
					textBox9->ForeColor = Color::Black;

					String^ binary_data = "";
					for (int i = 0; i < data; i++) {
						binary_data += System::Convert::ToString(first_binary[i]);
					}
					textBox10->Text = binary_data;
					textBox10->ForeColor = Color::Black;

					String^ controls_data = "";
					for (int i = 0; i < controls; i++) {
						controls_data += System::Convert::ToString(first_controls[i]);
					}
					textBox11->Text = controls_data;
					textBox11->ForeColor = Color::Black;

					String^ P_controls = "";
					for (int i = controls - 1; i >= 0; i--) {
						P_controls += System::Convert::ToString(P[i]);
					}
					textBox12->Text = P_controls;
					textBox12->ForeColor = Color::Black;

					String^ miss = System::Convert::ToString(mistake);
					textBox13->Text = miss;
					textBox13->ForeColor = Color::Black;

					String^ correction = "";
					for (int i = 0; i < n; i++) {
						correction += System::Convert::ToString(hamming[i]);
					}
					textBox14->Text = correction;
					textBox14->ForeColor = Color::Black;

					String^ corrected_binary = "";
					for (int i = 0; i < data; i++) {
						corrected_binary += System::Convert::ToString(binary[i]);
					}
					textBox15->Text = corrected_binary;
					textBox15->ForeColor = Color::Black;

					String^ corrected_decimal = System::Convert::ToString(decimal);
					textBox16->Text = corrected_decimal;
					textBox16->ForeColor = Color::Black;

					String^ control_P = "";
					for (int i = 0; i < controls; i++) {
						control_P += System::Convert::ToString("P" + (pow(2, i)) + " :" + P[i]);
						control_P += "\n";
					}
					label31->Text = control_P;
					label31->ForeColor = Color::Black;

					String^ control_C = "";
					for (int i = 0; i < controls; i++) {
						control_C += System::Convert::ToString("C" + (pow(2, i)) + " :" + first_controls[i]);
						control_C += "\n";
					}
					label30->Text = control_C;
					label30->ForeColor = Color::Black;

					delete[] first_controls;
					delete[] first_binary;
					delete[] P;
					delete[] binary;

					//default values to textBoxes that are not neccessary
					textBox2->Text = "No data";
					textBox2->ForeColor = Color::Red;

					textBox3->Text = "No data";
					textBox3->ForeColor = Color::Red;

					textBox4->Text = "No data";
					textBox4->ForeColor = Color::Red;

					label29->Text = "No data";
					label29->ForeColor = Color::Red;

					textBox5->Text = "No data";
					textBox5->ForeColor = Color::Red;

					textBox6->Text = "No data";
					textBox6->ForeColor = Color::Red;

					textBox7->Text = "No data";
					textBox7->ForeColor = Color::Red;
				}
			}
		}
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		textBox1->Text = "";
		textBox1->ForeColor = Color::Black;
	}
};
}


