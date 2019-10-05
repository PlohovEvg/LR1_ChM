#pragma once
#include "Functions.h"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubViV2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ui;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubUiVi;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  n_Text;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  U0_Text;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  h_Text;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Epsilon_Text;
	private: System::Windows::Forms::TextBox^  Y2_Text;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Y1_Text;

	private: System::Windows::Forms::TextBox^  X2_Text;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  X1_Text;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  b_Text;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Y2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Y1_Text = (gcnew System::Windows::Forms::TextBox());
			this->X2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->X1_Text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_Text = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->h_Text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->U0_Text = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubViV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubUiVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(999, 659);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->Y2_Text);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->Y1_Text);
			this->tabPage1->Controls->Add(this->X2_Text);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->X1_Text);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->b_Text);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->h_Text);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->Epsilon_Text);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->n_Text);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->U0_Text);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(991, 633);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			// 
			// Y2_Text
			// 
			this->Y2_Text->Location = System::Drawing::Point(396, 133);
			this->Y2_Text->Name = L"Y2_Text";
			this->Y2_Text->Size = System::Drawing::Size(57, 20);
			this->Y2_Text->TabIndex = 40;
			this->Y2_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::Y2_Text_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(356, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 39;
			this->label2->Text = L" Y2 = ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(356, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 38;
			this->label3->Text = L" Y1 = ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// Y1_Text
			// 
			this->Y1_Text->Location = System::Drawing::Point(397, 107);
			this->Y1_Text->Name = L"Y1_Text";
			this->Y1_Text->Size = System::Drawing::Size(57, 20);
			this->Y1_Text->TabIndex = 37;
			this->Y1_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::Y1_Text_TextChanged);
			// 
			// X2_Text
			// 
			this->X2_Text->Location = System::Drawing::Point(396, 81);
			this->X2_Text->Name = L"X2_Text";
			this->X2_Text->Size = System::Drawing::Size(57, 20);
			this->X2_Text->TabIndex = 36;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(356, 82);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 16);
			this->label10->TabIndex = 35;
			this->label10->Text = L" X2 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(356, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 16);
			this->label9->TabIndex = 33;
			this->label9->Text = L" X1 = ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// X1_Text
			// 
			this->X1_Text->Location = System::Drawing::Point(396, 55);
			this->X1_Text->Name = L"X1_Text";
			this->X1_Text->Size = System::Drawing::Size(57, 20);
			this->X1_Text->TabIndex = 32;
			this->X1_Text->TextChanged += gcnew System::EventHandler(this, &MyForm::X1_Text_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(219, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 16);
			this->label1->TabIndex = 31;
			this->label1->Text = L" b = ";
			// 
			// b_Text
			// 
			this->b_Text->Location = System::Drawing::Point(256, 135);
			this->b_Text->Name = L"b_Text";
			this->b_Text->Size = System::Drawing::Size(100, 20);
			this->b_Text->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(460, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 48);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Изменить масштаб от Y1 до Y2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(460, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 48);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Изменить масштаб от X1 до X2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(459, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 48);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(625, 6);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(360, 181);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"\r\n\r\n\r\n\r\n\r\n\r\n";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(219, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L" h = ";
			// 
			// h_Text
			// 
			this->h_Text->Location = System::Drawing::Point(256, 109);
			this->h_Text->Name = L"h_Text";
			this->h_Text->Size = System::Drawing::Size(100, 20);
			this->h_Text->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(74, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L" ε =";
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Location = System::Drawing::Point(108, 161);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 20);
			this->Epsilon_Text->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L" Число шагов";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// n_Text
			// 
			this->n_Text->Location = System::Drawing::Point(108, 135);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 20);
			this->n_Text->TabIndex = 20;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(343, 97);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(61, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L" U0 = ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// U0_Text
			// 
			this->U0_Text->Location = System::Drawing::Point(108, 109);
			this->U0_Text->Name = L"U0_Text";
			this->U0_Text->Size = System::Drawing::Size(100, 20);
			this->U0_Text->TabIndex = 17;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->Xi,
					this->Vi, this->V2i, this->SubViV2i, this->OLP, this->hi, this->C1, this->C2, this->Ui, this->SubUiVi
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 193);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(434, 406);
			this->dataGridView1->TabIndex = 1;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// Xi
			// 
			this->Xi->HeaderText = L"Xi";
			this->Xi->Name = L"Xi";
			// 
			// Vi
			// 
			this->Vi->HeaderText = L"Vi";
			this->Vi->Name = L"Vi";
			// 
			// V2i
			// 
			this->V2i->HeaderText = L"V2i";
			this->V2i->Name = L"V2i";
			// 
			// SubViV2i
			// 
			this->SubViV2i->HeaderText = L"Vi-V2i";
			this->SubViV2i->Name = L"SubViV2i";
			// 
			// OLP
			// 
			this->OLP->HeaderText = L"ОЛП";
			this->OLP->Name = L"OLP";
			// 
			// hi
			// 
			this->hi->HeaderText = L"hi";
			this->hi->Name = L"hi";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			// 
			// Ui
			// 
			this->Ui->HeaderText = L"Ui";
			this->Ui->Name = L"Ui";
			// 
			// SubUiVi
			// 
			this->SubUiVi->HeaderText = L"|Ui-Vi|";
			this->SubUiVi->Name = L"SubUiVi";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->IsShowPointValues = false;
			this->zedGraphControl1->Location = System::Drawing::Point(443, 193);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->PointValueFormat = L"G";
			this->zedGraphControl1->Size = System::Drawing::Size(542, 406);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(991, 633);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(329, 41);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(160, 48);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Старт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(991, 633);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Основная задача 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 655);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void X1_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Y2_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Y1_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double X1 = Convert::ToDouble(X1_Text->Text);
	double X2 = Convert::ToDouble(X2_Text->Text);

	panel->XAxis->Min = X1;
	panel->XAxis->Max = X2;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double Y1 = Convert::ToDouble(Y1_Text->Text);
	double Y2 = Convert::ToDouble(Y2_Text->Text);

	panel->YAxis->Min = Y1;
	panel->YAxis->Max = Y2;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();

	PointPairList^ f_list = gcnew PointPairList();
	PointPairList^ g_list = gcnew PointPairList();

	double x = 0.0;
	double v = Convert::ToDouble(U0_Text->Text);
	double U0 = v;
	double u;
	double h = Convert::ToDouble(h_Text->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	//double b = Convert::ToDouble(b_Text->Text);
	double vplus1;
	double vcap;
	double S;
	int n = Convert::ToInt32(n_Text->Text);
	int i;
	int c1 = 0, c2 = 0;
	int k;
	double maxH = h, minH = h, maxS = 0.0, xmaxH = 0.0, xminH = 0.0, maxSubUiVi = 0.0, xmaxSubUiVi = 0.0;
	string ref="";

	double xmin_limit = x - 0.05;

	dataGridView1->Rows->Clear();

	for (i = 0; i < n; i++)
	{
	
		u = f1Accurate(U0, x);

		f_list->Add(x, v);
		g_list->Add(x, u);

		if (i != 0)
		{
			vplus1 = RK4(x, v, h, 1);
			vcap = Vn1cap(x, v, h, 1);
			S = CS(vcap, vplus1);
			k = LPControl(S, Epsilon);
			if (k == -1)
			{
				while (k == -1)
				{
					h = h*0.5;
					c1++;
					vplus1 = RK4(x, v, h, 1);
					vcap = Vn1cap(x, v, h, 1);
					S = CS(vcap, vplus1);
					k = LPControl(S, Epsilon);
				}
			}
			if (k == 1)
			{
				x = xInc(x, h);

				if (h > maxH)
				{
					maxH = h;
					xmaxH = x;
				}
				if (h < minH)
				{
					minH = h;
					xminH = h;
				}
				if (abs(S) > maxS)
				{
					maxS = S;
				}
				if (abs(u - vplus1) > maxSubUiVi)
				{
					maxSubUiVi = abs(u - vplus1);
					xmaxSubUiVi = x;
				}

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = vplus1;
				dataGridView1->Rows[i]->Cells[3]->Value = vcap;
				dataGridView1->Rows[i]->Cells[4]->Value = vplus1 - vcap;
				dataGridView1->Rows[i]->Cells[5]->Value = S;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = c1;
				dataGridView1->Rows[i]->Cells[8]->Value = c2;
				dataGridView1->Rows[i]->Cells[9]->Value = u;
				dataGridView1->Rows[i]->Cells[10]->Value = abs(u-vplus1);

				h = 2 * h;
				c2++;
				v = vplus1;
			}
			else
			{
				x = xInc(x, h);

				if (h > maxH)
				{
					maxH = h;
					xmaxH = x;
				}
				if (h < minH)
				{
					minH = h;
					xminH = h;
				}
				if (abs(S) > maxS)
				{
					maxS = S;
				}
				if (abs(u - vplus1) > maxSubUiVi)
				{
					maxSubUiVi = abs(u - vplus1);
					xmaxSubUiVi = x;
				}

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = vplus1;
				dataGridView1->Rows[i]->Cells[3]->Value = vcap;
				dataGridView1->Rows[i]->Cells[4]->Value = vplus1 - vcap;
				dataGridView1->Rows[i]->Cells[5]->Value = S;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = c1;
				dataGridView1->Rows[i]->Cells[8]->Value = c2;
				dataGridView1->Rows[i]->Cells[9]->Value = u;
				dataGridView1->Rows[i]->Cells[10]->Value = abs(u - vplus1);

				v = vcap;
			}
		}
		else
		{
			vcap = v;
			S = 0.0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = v;
			dataGridView1->Rows[i]->Cells[3]->Value = vcap;
			dataGridView1->Rows[i]->Cells[4]->Value = v - vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = u;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(u - v);
		}
	}

	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel->AddCurve("Численное решение", f_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("Точное решение", g_list, Color::Black, SymbolType::None);

	panel->XAxis->Min = xmin_limit;
	panel->XAxis->Max = xmax_limit;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	char str[10];

	ref += "Справка\r\n";
	ref += "n=";
	sprintf_s(str, "%d", n);
	ref += str;
	ref += "\r\n";
	ref += "max|ОЛП|=";
	sprintf_s(str, "%.6lf", maxS);
	ref += str;
	ref += "\r\n";
	ref += "Общее число удвоений шага=";
	sprintf_s(str, "%d", c2);
	ref += str;
	ref += ", Общее число деления шага=";
	sprintf_s(str, "%d", c1);
	ref += str;
	ref += "\r\n";
	ref += "max hi=";
	sprintf_s(str, "%.6lf", maxH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxH);
	ref += str;
	ref += "\r\n";
	ref += "min hi=";
	sprintf_s(str, "%.6lf", minH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xminH);
	ref += str;
	ref += "\r\n";
	ref += "max |ui-vi|=";
	sprintf_s(str, "%.6lf", maxSubUiVi);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxSubUiVi);
	ref += str;
	ref += "\r\n";
	textBox1->Text = gcnew String(ref.c_str());
}
};
}
