#pragma once
#include "Header.h"

namespace TASKS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm(){
			if (components){
				delete components;
			}
		}
    private: System::Windows::Forms::TabPage^ tabPage4;
    protected:
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::GroupBox^ groupBox17;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::GroupBox^ groupBox15;
    private: System::Windows::Forms::ListBox^ listBox8;
    private: System::Windows::Forms::GroupBox^ groupBox14;
    private: System::Windows::Forms::ListBox^ listBox7;
    private: System::Windows::Forms::GroupBox^ groupBox16;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::GroupBox^ groupBox11;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::GroupBox^ groupBox12;
    private: System::Windows::Forms::ListBox^ listBox6;
    private: System::Windows::Forms::GroupBox^ groupBox13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::GroupBox^ groupBox10;
    private: System::Windows::Forms::ListBox^ listBox5;





















    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
    private: System::Windows::Forms::GroupBox^ groupBox4;
    private: System::Windows::Forms::ListBox^ listBox2;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::GroupBox^ groupBox9;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage2;






















private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::ListBox^ listBox4;





private: System::Windows::Forms::NotifyIcon^ notifyIcon1;












private: System::ComponentModel::IContainer^ components;


	protected:

	private:


#pragma region Windows Form Designer generated code

		void InitializeComponent(void) {
            this->components = (gcnew System::ComponentModel::Container());
            System::Windows::Forms::TabPage^ tabPage1;
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox2 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox8 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox7 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox6 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox5 = (gcnew System::Windows::Forms::ListBox());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox3 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->listBox4 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
            tabPage1 = (gcnew System::Windows::Forms::TabPage());
            tabPage1->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            this->groupBox4->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->groupBox17->SuspendLayout();
            this->groupBox15->SuspendLayout();
            this->groupBox14->SuspendLayout();
            this->groupBox16->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->groupBox11->SuspendLayout();
            this->groupBox12->SuspendLayout();
            this->groupBox13->SuspendLayout();
            this->groupBox10->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->groupBox6->SuspendLayout();
            this->groupBox7->SuspendLayout();
            this->groupBox8->SuspendLayout();
            this->groupBox5->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabPage1
            // 
            tabPage1->Controls->Add(this->tableLayoutPanel3);
            tabPage1->Cursor = System::Windows::Forms::Cursors::Default;
            tabPage1->Location = System::Drawing::Point(4, 29);
            tabPage1->Name = L"tabPage1";
            tabPage1->Padding = System::Windows::Forms::Padding(3);
            tabPage1->Size = System::Drawing::Size(813, 573);
            tabPage1->TabIndex = 0;
            tabPage1->Text = L"Задание 1";
            tabPage1->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->ColumnCount = 2;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                49.87654F)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50.12346F)));
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel5, 1, 0);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 1;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.79578F)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(807, 567);
            this->tableLayoutPanel3->TabIndex = 0;
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->ColumnCount = 2;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                45.4321F)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                54.5679F)));
            this->tableLayoutPanel4->Controls->Add(this->groupBox4, 0, 0);
            this->tableLayoutPanel4->Controls->Add(this->groupBox3, 0, 0);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 1;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(396, 561);
            this->tableLayoutPanel4->TabIndex = 0;
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->listBox2);
            this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->groupBox4->Location = System::Drawing::Point(182, 3);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(211, 555);
            this->groupBox4->TabIndex = 16;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"Результат сортировки:";
            // 
            // listBox2
            // 
            this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox2->FormattingEnabled = true;
            this->listBox2->HorizontalScrollbar = true;
            this->listBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->listBox2->ItemHeight = 22;
            this->listBox2->Location = System::Drawing::Point(3, 22);
            this->listBox2->Name = L"listBox2";
            this->listBox2->Size = System::Drawing::Size(205, 530);
            this->listBox2->TabIndex = 0;
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->listBox1);
            this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox3->Location = System::Drawing::Point(3, 3);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(173, 555);
            this->groupBox3->TabIndex = 15;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Исходный массив:";
            // 
            // listBox1
            // 
            this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->HorizontalScrollbar = true;
            this->listBox1->ItemHeight = 22;
            this->listBox1->Location = System::Drawing::Point(3, 22);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(167, 530);
            this->listBox1->TabIndex = 0;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->ColumnCount = 1;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel5->Controls->Add(this->groupBox1, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->groupBox2, 0, 1);
            this->tableLayoutPanel5->Controls->Add(this->groupBox9, 0, 2);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(405, 3);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 64.17911F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35.8209F)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 226)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(399, 561);
            this->tableLayoutPanel5->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->textBox3);
            this->groupBox1->Controls->Add(this->textBox2);
            this->groupBox1->Controls->Add(this->textBox1);
            this->groupBox1->Controls->Add(this->button1);
            this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox1->Location = System::Drawing::Point(3, 3);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(393, 208);
            this->groupBox1->TabIndex = 10;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Параметры генерации массива";
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(52, 109);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(265, 20);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Введите значение диапазона до:";
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(55, 74);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(263, 20);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Введите значение диапазона от:";
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(56, 36);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(248, 20);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Введите количество значений:";
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox3->Location = System::Drawing::Point(326, 103);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(61, 29);
            this->textBox3->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox2->Location = System::Drawing::Point(326, 68);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(61, 29);
            this->textBox2->TabIndex = 2;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox1->Location = System::Drawing::Point(326, 30);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(61, 29);
            this->textBox1->TabIndex = 1;
            // 
            // button1
            // 
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Location = System::Drawing::Point(3, 138);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(384, 64);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Сгенирировать";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox2->Controls->Add(this->button2);
            this->groupBox2->Controls->Add(this->textBox4);
            this->groupBox2->Controls->Add(this->label4);
            this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox2->Location = System::Drawing::Point(3, 217);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(393, 114);
            this->groupBox2->TabIndex = 11;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Параметры ручного ввода";
            // 
            // button2
            // 
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->Location = System::Drawing::Point(3, 71);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(387, 40);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Ввод";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // textBox4
            // 
            this->textBox4->Dock = System::Windows::Forms::DockStyle::Top;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox4->Location = System::Drawing::Point(3, 42);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(387, 29);
            this->textBox4->TabIndex = 1;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Top;
            this->label4->Location = System::Drawing::Point(3, 22);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(262, 20);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Введите значения через пробел:\r\n";
            // 
            // groupBox9
            // 
            this->groupBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox9->Controls->Add(this->button4);
            this->groupBox9->Controls->Add(this->button5);
            this->groupBox9->Controls->Add(this->button3);
            this->groupBox9->Location = System::Drawing::Point(3, 337);
            this->groupBox9->Name = L"groupBox9";
            this->groupBox9->Size = System::Drawing::Size(393, 221);
            this->groupBox9->TabIndex = 15;
            this->groupBox9->TabStop = false;
            // 
            // button4
            // 
            this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(3, 76);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(387, 100);
            this->button4->TabIndex = 12;
            this->button4->Text = L"Очистить поле";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button5
            // 
            this->button5->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->Location = System::Drawing::Point(3, 176);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(387, 42);
            this->button5->TabIndex = 13;
            this->button5->Text = L"Выход";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button3
            // 
            this->button3->Dock = System::Windows::Forms::DockStyle::Top;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->Location = System::Drawing::Point(3, 22);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(387, 54);
            this->button3->TabIndex = 11;
            this->button3->Text = L"Сохранить в файл";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->tableLayoutPanel7);
            this->tabPage4->Location = System::Drawing::Point(4, 29);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(813, 573);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Задание 4";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->ColumnCount = 2;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                49.37853F)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50.62147F)));
            this->tableLayoutPanel7->Controls->Add(this->groupBox17, 0, 1);
            this->tableLayoutPanel7->Controls->Add(this->groupBox15, 1, 0);
            this->tableLayoutPanel7->Controls->Add(this->groupBox14, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->groupBox16, 1, 1);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 2;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 79.71781F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.28219F)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(807, 567);
            this->tableLayoutPanel7->TabIndex = 0;
            // 
            // groupBox17
            // 
            this->groupBox17->Controls->Add(this->button16);
            this->groupBox17->Controls->Add(this->button15);
            this->groupBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox17->Location = System::Drawing::Point(3, 454);
            this->groupBox17->Name = L"groupBox17";
            this->groupBox17->Size = System::Drawing::Size(392, 110);
            this->groupBox17->TabIndex = 3;
            this->groupBox17->TabStop = false;
            // 
            // button16
            // 
            this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button16->Location = System::Drawing::Point(3, 66);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(383, 47);
            this->button16->TabIndex = 1;
            this->button16->Text = L"Сохранить в файл\r\n";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // button15
            // 
            this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button15->Location = System::Drawing::Point(3, 12);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(383, 49);
            this->button15->TabIndex = 0;
            this->button15->Text = L"Ввод из файла\r\n";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // groupBox15
            // 
            this->groupBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox15->Controls->Add(this->listBox8);
            this->groupBox15->Location = System::Drawing::Point(401, 3);
            this->groupBox15->Name = L"groupBox15";
            this->groupBox15->Size = System::Drawing::Size(403, 445);
            this->groupBox15->TabIndex = 1;
            this->groupBox15->TabStop = false;
            this->groupBox15->Text = L"Полученный текст:";
            // 
            // listBox8
            // 
            this->listBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox8->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox8->FormattingEnabled = true;
            this->listBox8->HorizontalScrollbar = true;
            this->listBox8->ItemHeight = 22;
            this->listBox8->Location = System::Drawing::Point(3, 22);
            this->listBox8->Name = L"listBox8";
            this->listBox8->Size = System::Drawing::Size(397, 420);
            this->listBox8->TabIndex = 0;
            // 
            // groupBox14
            // 
            this->groupBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox14->Controls->Add(this->listBox7);
            this->groupBox14->Location = System::Drawing::Point(3, 3);
            this->groupBox14->Name = L"groupBox14";
            this->groupBox14->Size = System::Drawing::Size(392, 445);
            this->groupBox14->TabIndex = 0;
            this->groupBox14->TabStop = false;
            this->groupBox14->Text = L"Исходный текст:";
            // 
            // listBox7
            // 
            this->listBox7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox7->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox7->FormattingEnabled = true;
            this->listBox7->HorizontalScrollbar = true;
            this->listBox7->ItemHeight = 22;
            this->listBox7->Location = System::Drawing::Point(3, 22);
            this->listBox7->Name = L"listBox7";
            this->listBox7->Size = System::Drawing::Size(386, 420);
            this->listBox7->TabIndex = 0;
            // 
            // groupBox16
            // 
            this->groupBox16->Controls->Add(this->button18);
            this->groupBox16->Controls->Add(this->button17);
            this->groupBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox16->Location = System::Drawing::Point(401, 454);
            this->groupBox16->Name = L"groupBox16";
            this->groupBox16->Size = System::Drawing::Size(403, 110);
            this->groupBox16->TabIndex = 2;
            this->groupBox16->TabStop = false;
            // 
            // button18
            // 
            this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button18->Location = System::Drawing::Point(3, 66);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(394, 47);
            this->button18->TabIndex = 2;
            this->button18->Text = L"Выход";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // button17
            // 
            this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button17->Location = System::Drawing::Point(3, 12);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(394, 49);
            this->button17->TabIndex = 1;
            this->button17->Text = L"Очистить поле\r\n";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->tableLayoutPanel1);
            this->tabPage3->Location = System::Drawing::Point(4, 29);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(813, 573);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Задание 3";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                55.06024F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                44.93976F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                302)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->groupBox10, 0, 0);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 1;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.78261F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 567)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 567)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(807, 567);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel6->ColumnCount = 1;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel6->Controls->Add(this->groupBox11, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->groupBox12, 0, 1);
            this->tableLayoutPanel6->Controls->Add(this->groupBox13, 0, 2);
            this->tableLayoutPanel6->Location = System::Drawing::Point(447, 3);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 3;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 70.84871F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 29.15129F)));
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 289)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(357, 561);
            this->tableLayoutPanel6->TabIndex = 0;
            // 
            // groupBox11
            // 
            this->groupBox11->Controls->Add(this->label9);
            this->groupBox11->Controls->Add(this->button11);
            this->groupBox11->Controls->Add(this->textBox9);
            this->groupBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox11->Location = System::Drawing::Point(3, 3);
            this->groupBox11->Name = L"groupBox11";
            this->groupBox11->Size = System::Drawing::Size(351, 186);
            this->groupBox11->TabIndex = 0;
            this->groupBox11->TabStop = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(56, 19);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(218, 60);
            this->label9->TabIndex = 2;
            this->label9->Text = L"Введите искомый k-ый\r\nчлен последовательности \r\nA(n+1) = An + 1/(1+An):";
            // 
            // button11
            // 
            this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button11->Location = System::Drawing::Point(6, 128);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(339, 52);
            this->button11->TabIndex = 1;
            this->button11->Text = L"Получить значение";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
            // 
            // textBox9
            // 
            this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox9->Location = System::Drawing::Point(6, 82);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(339, 29);
            this->textBox9->TabIndex = 0;
            // 
            // groupBox12
            // 
            this->groupBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox12->Controls->Add(this->listBox6);
            this->groupBox12->Location = System::Drawing::Point(3, 195);
            this->groupBox12->Name = L"groupBox12";
            this->groupBox12->Size = System::Drawing::Size(351, 73);
            this->groupBox12->TabIndex = 1;
            this->groupBox12->TabStop = false;
            this->groupBox12->Text = L"Результат:";
            // 
            // listBox6
            // 
            this->listBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox6->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox6->FormattingEnabled = true;
            this->listBox6->ItemHeight = 22;
            this->listBox6->Location = System::Drawing::Point(3, 22);
            this->listBox6->Name = L"listBox6";
            this->listBox6->Size = System::Drawing::Size(345, 48);
            this->listBox6->TabIndex = 0;
            // 
            // groupBox13
            // 
            this->groupBox13->Controls->Add(this->button14);
            this->groupBox13->Controls->Add(this->button13);
            this->groupBox13->Controls->Add(this->button12);
            this->groupBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox13->Location = System::Drawing::Point(3, 274);
            this->groupBox13->Name = L"groupBox13";
            this->groupBox13->Size = System::Drawing::Size(351, 284);
            this->groupBox13->TabIndex = 2;
            this->groupBox13->TabStop = false;
            // 
            // button14
            // 
            this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button14->Location = System::Drawing::Point(3, 73);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(345, 159);
            this->button14->TabIndex = 2;
            this->button14->Text = L"Очистить поле";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // button13
            // 
            this->button13->Dock = System::Windows::Forms::DockStyle::Top;
            this->button13->Location = System::Drawing::Point(3, 22);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(345, 51);
            this->button13->TabIndex = 1;
            this->button13->Text = L"Сохранить в файл";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
            // 
            // button12
            // 
            this->button12->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->button12->Location = System::Drawing::Point(3, 232);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(345, 49);
            this->button12->TabIndex = 0;
            this->button12->Text = L"Выход";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
            // 
            // groupBox10
            // 
            this->groupBox10->Controls->Add(this->listBox5);
            this->groupBox10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox10->Location = System::Drawing::Point(3, 3);
            this->groupBox10->Name = L"groupBox10";
            this->groupBox10->Size = System::Drawing::Size(438, 561);
            this->groupBox10->TabIndex = 1;
            this->groupBox10->TabStop = false;
            this->groupBox10->Text = L"Промежуточные резуьтаты:";
            // 
            // listBox5
            // 
            this->listBox5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox5->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox5->FormattingEnabled = true;
            this->listBox5->ItemHeight = 22;
            this->listBox5->Location = System::Drawing::Point(3, 22);
            this->listBox5->Name = L"listBox5";
            this->listBox5->Size = System::Drawing::Size(432, 536);
            this->listBox5->TabIndex = 0;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(821, 606);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->tableLayoutPanel2);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(813, 573);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Задание 2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                48.74317F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                51.25683F)));
            this->tableLayoutPanel2->Controls->Add(this->groupBox6, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->groupBox7, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->groupBox8, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->groupBox5, 1, 1);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 2;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 58.37743F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 41.62257F)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(807, 567);
            this->tableLayoutPanel2->TabIndex = 0;
            // 
            // groupBox6
            // 
            this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox6->Controls->Add(this->listBox3);
            this->groupBox6->Location = System::Drawing::Point(3, 3);
            this->groupBox6->Name = L"groupBox6";
            this->groupBox6->Size = System::Drawing::Size(387, 325);
            this->groupBox6->TabIndex = 37;
            this->groupBox6->TabStop = false;
            this->groupBox6->Text = L"Исходная матрица:";
            // 
            // listBox3
            // 
            this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox3->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox3->FormattingEnabled = true;
            this->listBox3->HorizontalScrollbar = true;
            this->listBox3->ItemHeight = 22;
            this->listBox3->Location = System::Drawing::Point(3, 22);
            this->listBox3->Name = L"listBox3";
            this->listBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->listBox3->ScrollAlwaysVisible = true;
            this->listBox3->Size = System::Drawing::Size(381, 300);
            this->listBox3->TabIndex = 0;
            this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
            this->listBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox3_MouseMove);
            // 
            // groupBox7
            // 
            this->groupBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->groupBox7->Controls->Add(this->listBox4);
            this->groupBox7->Location = System::Drawing::Point(396, 3);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(408, 325);
            this->groupBox7->TabIndex = 40;
            this->groupBox7->TabStop = false;
            this->groupBox7->Text = L"Полученная матрица:";
            // 
            // listBox4
            // 
            this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->listBox4->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->listBox4->FormattingEnabled = true;
            this->listBox4->HorizontalScrollbar = true;
            this->listBox4->ItemHeight = 22;
            this->listBox4->Location = System::Drawing::Point(3, 22);
            this->listBox4->Name = L"listBox4";
            this->listBox4->Size = System::Drawing::Size(402, 300);
            this->listBox4->TabIndex = 0;
            // 
            // groupBox8
            // 
            this->groupBox8->Controls->Add(this->button7);
            this->groupBox8->Controls->Add(this->button10);
            this->groupBox8->Controls->Add(this->button8);
            this->groupBox8->Controls->Add(this->button9);
            this->groupBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox8->Location = System::Drawing::Point(3, 334);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(387, 230);
            this->groupBox8->TabIndex = 41;
            this->groupBox8->TabStop = false;
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(10, 22);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(116, 117);
            this->button7->TabIndex = 30;
            this->button7->Text = L"Ввод из файла";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button10
            // 
            this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button10->Location = System::Drawing::Point(10, 145);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(371, 82);
            this->button10->TabIndex = 33;
            this->button10->Text = L"Выход";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // button8
            // 
            this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button8->Location = System::Drawing::Point(132, 22);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(127, 117);
            this->button8->TabIndex = 31;
            this->button8->Text = L"Сохранить в файл";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button9
            // 
            this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button9->Location = System::Drawing::Point(265, 22);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(116, 117);
            this->button9->TabIndex = 32;
            this->button9->Text = L"Очистить поле";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->textBox8);
            this->groupBox5->Controls->Add(this->label8);
            this->groupBox5->Controls->Add(this->textBox7);
            this->groupBox5->Controls->Add(this->button6);
            this->groupBox5->Controls->Add(this->label7);
            this->groupBox5->Controls->Add(this->textBox6);
            this->groupBox5->Controls->Add(this->label5);
            this->groupBox5->Controls->Add(this->label6);
            this->groupBox5->Controls->Add(this->textBox5);
            this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->groupBox5->Location = System::Drawing::Point(396, 334);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(408, 230);
            this->groupBox5->TabIndex = 39;
            this->groupBox5->TabStop = false;
            this->groupBox5->Text = L"Параметры генерации матрицы:";
            // 
            // textBox8
            // 
            this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox8->Location = System::Drawing::Point(277, 147);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(125, 29);
            this->textBox8->TabIndex = 7;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(6, 150);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(265, 20);
            this->label8->TabIndex = 3;
            this->label8->Text = L"Введите значение диапазона до:";
            // 
            // textBox7
            // 
            this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox7->Location = System::Drawing::Point(277, 110);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(125, 29);
            this->textBox7->TabIndex = 6;
            // 
            // button6
            // 
            this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button6->Location = System::Drawing::Point(10, 182);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(392, 45);
            this->button6->TabIndex = 2;
            this->button6->Text = L"Сгенирировать";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(6, 113);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(263, 20);
            this->label7->TabIndex = 2;
            this->label7->Text = L"Введите значение диапазона от:";
            // 
            // textBox6
            // 
            this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox6->Location = System::Drawing::Point(277, 73);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(125, 29);
            this->textBox6->TabIndex = 5;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(6, 38);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(220, 20);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Введите количество строк:";
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(6, 76);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(249, 20);
            this->label6->TabIndex = 1;
            this->label6->Text = L"Введите количество столбцов:";
            // 
            // textBox5
            // 
            this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Courier New", 14.25F, System::Drawing::FontStyle::Bold));
            this->textBox5->Location = System::Drawing::Point(277, 35);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(125, 29);
            this->textBox5->TabIndex = 4;
            // 
            // notifyIcon1
            // 
            this->notifyIcon1->Text = L"notifyIcon1";
            this->notifyIcon1->Visible = true;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(821, 606);
            this->Controls->Add(this->tabControl1);
            this->MinimumSize = System::Drawing::Size(837, 645);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Курсовая работа";
            tabPage1->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel4->ResumeLayout(false);
            this->groupBox4->ResumeLayout(false);
            this->groupBox3->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox9->ResumeLayout(false);
            this->tabPage4->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            this->groupBox17->ResumeLayout(false);
            this->groupBox15->ResumeLayout(false);
            this->groupBox14->ResumeLayout(false);
            this->groupBox16->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel6->ResumeLayout(false);
            this->groupBox11->ResumeLayout(false);
            this->groupBox11->PerformLayout();
            this->groupBox12->ResumeLayout(false);
            this->groupBox13->ResumeLayout(false);
            this->groupBox10->ResumeLayout(false);
            this->tabControl1->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->groupBox6->ResumeLayout(false);
            this->groupBox7->ResumeLayout(false);
            this->groupBox8->ResumeLayout(false);
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

// Задача 1
			System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private:	System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { Close(); }
// Задача 2
			System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private:	System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { Close(); }
// Задача 3
            System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
private:    System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { Close(); }
// Задача 4
            System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);
private:    System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { Close(); }

    
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    listBox4->SelectedIndex = listBox3->SelectedIndex;
    listBox4->TopIndex = listBox3->TopIndex;
   
    
    
   
}


       


private: System::Void listBox3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    listBox4->SelectedIndex = listBox3->SelectedIndex;
    listBox4->TopIndex = listBox3->TopIndex;
}

};
}