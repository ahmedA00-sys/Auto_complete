#pragma once
#include "MyForm1.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <limits>
#include<fstream>
#include"Node.h"
#include"Trie.h"
#include"Files.h"
#include <msclr/marshal_cppstd.h>

// Defination For Program
Trie trie;
Files fileHandler("Dictionary.txt");
string input;
int choice, sortOption, searchWord;
vector<string> Words;
Node* current;
string saveOrNot;
void Init() {
	fileHandler.Load(trie);
}
string type;
unordered_map<string, int> notFoundSearchCount;
using namespace System;
using namespace System::Windows::Forms;

int currentIndex = 0;
namespace Project2 {

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
	private: System::Windows::Forms::Panel^ main;
	protected:

	private: System::Windows::Forms::Panel^ Home_page;
	protected:


















	private: System::Windows::Forms::Panel^ search;

	private: System::Windows::Forms::Panel^ operations;
	private: System::Windows::Forms::Button^ back_button;



	private: System::Windows::Forms::Panel^ Delete;












	private: System::Windows::Forms::Button^ delte_button;
	private: System::Windows::Forms::Button^ search_button;


	private: System::Windows::Forms::Button^ insert_button;
	private: System::Windows::Forms::Panel^ Insert;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Word;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::DataGridView^ dataGridView2;


private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Button^ button15;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Panel^ info;













private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Index2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Word2;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;

private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::PictureBox^ pictureBox1;
























	protected:

















	protected:




	protected:

	protected:



	protected:

	protected:



	protected:

	protected:


	protected:

	protected:

	protected:


	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->main = (gcnew System::Windows::Forms::Panel());
			this->Home_page = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->Delete = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Index2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Word2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Insert = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->operations = (gcnew System::Windows::Forms::Panel());
			this->delte_button = (gcnew System::Windows::Forms::Button());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->insert_button = (gcnew System::Windows::Forms::Button());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->search = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Word = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->info = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->main->SuspendLayout();
			this->Home_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->Delete->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->Insert->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->operations->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// main
			// 
			this->main->Controls->Add(this->Home_page);
			this->main->Controls->Add(this->Delete);
			this->main->Controls->Add(this->Insert);
			this->main->Controls->Add(this->operations);
			this->main->Controls->Add(this->search);
			this->main->Controls->Add(this->info);
			this->main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main->Location = System::Drawing::Point(0, 0);
			this->main->Name = L"main";
			this->main->Size = System::Drawing::Size(1371, 791);
			this->main->TabIndex = 0;
			this->main->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::main_Paint);
			// 
			// Home_page
			// 
			this->Home_page->AutoScroll = true;
			this->Home_page->AutoScrollMinSize = System::Drawing::Size(2, 2);
			this->Home_page->AutoSize = true;
			this->Home_page->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Home_page->BackColor = System::Drawing::Color::Gray;
			this->Home_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Home_page->Controls->Add(this->button21);
			this->Home_page->Controls->Add(this->button1);
			this->Home_page->Controls->Add(this->label1);
			this->Home_page->Controls->Add(this->label8);
			this->Home_page->Controls->Add(this->pictureBox12);
			this->Home_page->Controls->Add(this->pictureBox11);
			this->Home_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home_page->Location = System::Drawing::Point(0, 0);
			this->Home_page->Name = L"Home_page";
			this->Home_page->Size = System::Drawing::Size(1371, 791);
			this->Home_page->TabIndex = 1;
			this->Home_page->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Home_page_Paint);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DimGray;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button21->ForeColor = System::Drawing::Color::Transparent;
			this->button21->Location = System::Drawing::Point(0, 0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(91, 90);
			this->button21->TabIndex = 60;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(628, 468);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 71);
			this->button1->TabIndex = 57;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(391, 244);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(687, 52);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Intelligent Autocomplete System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(226, 360);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1005, 44);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Ready to begin\? Click to enter the smart search experience!";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox11->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox11->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.ErrorImage")));
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(0, 0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(1371, 184);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 58;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox12->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox12->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.ErrorImage")));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(0, 632);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(1371, 159);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 59;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// Delete
			// 
			this->Delete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Delete->BackColor = System::Drawing::Color::Gray;
			this->Delete->Controls->Add(this->button15);
			this->Delete->Controls->Add(this->button4);
			this->Delete->Controls->Add(this->label21);
			this->Delete->Controls->Add(this->label20);
			this->Delete->Controls->Add(this->label19);
			this->Delete->Controls->Add(this->button14);
			this->Delete->Controls->Add(this->textBox4);
			this->Delete->Controls->Add(this->label18);
			this->Delete->Controls->Add(this->pictureBox9);
			this->Delete->Controls->Add(this->dataGridView2);
			this->Delete->Controls->Add(this->label17);
			this->Delete->Controls->Add(this->label16);
			this->Delete->Controls->Add(this->button13);
			this->Delete->Controls->Add(this->button12);
			this->Delete->Controls->Add(this->label13);
			this->Delete->Controls->Add(this->button11);
			this->Delete->Controls->Add(this->textBox3);
			this->Delete->Controls->Add(this->pictureBox10);
			this->Delete->Controls->Add(this->pictureBox8);
			this->Delete->Location = System::Drawing::Point(0, 0);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(1371, 791);
			this->Delete->TabIndex = 1;
			this->Delete->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Delete_Paint);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->Location = System::Drawing::Point(1009, 680);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(126, 73);
			this->button15->TabIndex = 19;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(1205, 682);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 73);
			this->button4->TabIndex = 18;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(427, 663);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(392, 38);
			this->label21->TabIndex = 16;
			this->label21->Text = L"You Choosed Is Deleted";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Gray;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(265, 658);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 38);
			this->label20->TabIndex = 15;
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(27, 659);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(178, 38);
			this->label19->TabIndex = 14;
			this->label19->Text = L"The Word ";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(631, 493);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(131, 58);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Enter";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(403, 524);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 56);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(33, 529);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(308, 38);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Choose the Index :";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(327, 320);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 94);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Index2,
					this->Word2
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->Location = System::Drawing::Point(482, 251);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(520, 226);
			this->dataGridView2->TabIndex = 9;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Index2
			// 
			this->Index2->HeaderText = L"Index";
			this->Index2->MinimumWidth = 6;
			this->Index2->Name = L"Index2";
			this->Index2->ReadOnly = true;
			this->Index2->Width = 150;
			// 
			// Word2
			// 
			this->Word2->HeaderText = L"Word";
			this->Word2->MinimumWidth = 6;
			this->Word2->Name = L"Word2";
			this->Word2->ReadOnly = true;
			this->Word2->Width = 350;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(75, 251);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(297, 38);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Result for Delete :";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::DimGray;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(14, 45);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(343, 36);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Choose Type of Word :";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(874, 29);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(152, 74);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Prefix";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(367, 29);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(152, 74);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Word";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(443, 179);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 25);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Enter the Word";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(177, 160);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(154, 64);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Delete";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(398, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(740, 61);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox10->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(0, 659);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(1371, 132);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox8->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.ErrorImage")));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(1371, 132);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// Insert
			// 
			this->Insert->BackColor = System::Drawing::Color::Gray;
			this->Insert->Controls->Add(this->button17);
			this->Insert->Controls->Add(this->label22);
			this->Insert->Controls->Add(this->textBox5);
			this->Insert->Controls->Add(this->button16);
			this->Insert->Controls->Add(this->button3);
			this->Insert->Controls->Add(this->pictureBox18);
			this->Insert->Controls->Add(this->pictureBox17);
			this->Insert->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Insert->Location = System::Drawing::Point(0, 0);
			this->Insert->Name = L"Insert";
			this->Insert->Size = System::Drawing::Size(1371, 791);
			this->Insert->TabIndex = 4;
			this->Insert->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Insert_Paint);
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button17->Location = System::Drawing::Point(988, 676);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(150, 77);
			this->button17->TabIndex = 8;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(477, 262);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(173, 29);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Enter the Word";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(434, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(581, 67);
			this->textBox5->TabIndex = 3;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(165, 219);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(199, 107);
			this->button16->TabIndex = 2;
			this->button16->Text = L"Inesrt";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Gray;
			this->button3->Location = System::Drawing::Point(1196, 676);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 77);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox18->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(0, 642);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(1371, 149);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 10;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox17->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(0, 0);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(1371, 149);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 9;
			this->pictureBox17->TabStop = false;
			// 
			// operations
			// 
			this->operations->BackColor = System::Drawing::Color::Gray;
			this->operations->Controls->Add(this->delte_button);
			this->operations->Controls->Add(this->search_button);
			this->operations->Controls->Add(this->insert_button);
			this->operations->Controls->Add(this->back_button);
			this->operations->Controls->Add(this->pictureBox14);
			this->operations->Controls->Add(this->pictureBox13);
			this->operations->Dock = System::Windows::Forms::DockStyle::Fill;
			this->operations->Location = System::Drawing::Point(0, 0);
			this->operations->Name = L"operations";
			this->operations->Size = System::Drawing::Size(1371, 791);
			this->operations->TabIndex = 1;
			this->operations->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::operations_Paint);
			// 
			// delte_button
			// 
			this->delte_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->delte_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delte_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delte_button->ForeColor = System::Drawing::Color::White;
			this->delte_button->Location = System::Drawing::Point(510, 483);
			this->delte_button->Name = L"delte_button";
			this->delte_button->Size = System::Drawing::Size(370, 100);
			this->delte_button->TabIndex = 3;
			this->delte_button->Text = L"Delete";
			this->delte_button->UseVisualStyleBackColor = false;
			this->delte_button->Click += gcnew System::EventHandler(this, &MyForm::delte_button_Click);
			// 
			// search_button
			// 
			this->search_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->search_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->search_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_button->ForeColor = System::Drawing::Color::White;
			this->search_button->Location = System::Drawing::Point(510, 343);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(370, 100);
			this->search_button->TabIndex = 2;
			this->search_button->Text = L"Search";
			this->search_button->UseVisualStyleBackColor = false;
			this->search_button->Click += gcnew System::EventHandler(this, &MyForm::search_button_Click);
			// 
			// insert_button
			// 
			this->insert_button->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->insert_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->insert_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert_button->ForeColor = System::Drawing::Color::White;
			this->insert_button->Location = System::Drawing::Point(510, 207);
			this->insert_button->Name = L"insert_button";
			this->insert_button->Size = System::Drawing::Size(370, 100);
			this->insert_button->TabIndex = 1;
			this->insert_button->Text = L"Insert";
			this->insert_button->UseVisualStyleBackColor = false;
			this->insert_button->Click += gcnew System::EventHandler(this, &MyForm::insert_button_Click);
			// 
			// back_button
			// 
			this->back_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->back_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_button.BackgroundImage")));
			this->back_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->back_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_button->ForeColor = System::Drawing::Color::White;
			this->back_button->Location = System::Drawing::Point(1196, 672);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(135, 76);
			this->back_button->TabIndex = 0;
			this->back_button->UseVisualStyleBackColor = false;
			this->back_button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox14->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(0, 617);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(1371, 174);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 5;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox13->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(0, 0);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(1371, 174);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::Gray;
			this->search->Controls->Add(this->button19);
			this->search->Controls->Add(this->button18);
			this->search->Controls->Add(this->pictureBox7);
			this->search->Controls->Add(this->button10);
			this->search->Controls->Add(this->button9);
			this->search->Controls->Add(this->label15);
			this->search->Controls->Add(this->label14);
			this->search->Controls->Add(this->label11);
			this->search->Controls->Add(this->pictureBox6);
			this->search->Controls->Add(this->label10);
			this->search->Controls->Add(this->label9);
			this->search->Controls->Add(this->button8);
			this->search->Controls->Add(this->button7);
			this->search->Controls->Add(this->button6);
			this->search->Controls->Add(this->button5);
			this->search->Controls->Add(this->textBox1);
			this->search->Controls->Add(this->button2);
			this->search->Controls->Add(this->dataGridView1);
			this->search->Controls->Add(this->pictureBox15);
			this->search->Controls->Add(this->textBox2);
			this->search->Controls->Add(this->label12);
			this->search->Controls->Add(this->pictureBox16);
			this->search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->search->Location = System::Drawing::Point(0, 0);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(1371, 791);
			this->search->TabIndex = 55;
			this->search->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::search_Paint);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(482, 29);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(133, 57);
			this->button19->TabIndex = 21;
			this->button19->Text = L"Prefix";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(855, 29);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(133, 57);
			this->button18->TabIndex = 20;
			this->button18->Text = L"Word";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(0, 6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(136, 126);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 19;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(1002, 684);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(166, 75);
			this->button10->TabIndex = 18;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(654, 599);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(139, 61);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Enter";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Gray;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(320, 710);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 38);
			this->label15->TabIndex = 16;
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Gray;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(27, 710);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(238, 38);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Your Word is :";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(364, 346);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 36);
			this->label11->TabIndex = 11;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(287, 408);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(138, 100);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(28, 346);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(281, 36);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Result For Search ";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(471, 177);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 25);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Enter the Prifex";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(156, 155);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(197, 70);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Search";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1055, 257);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(246, 69);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Shortest";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(603, 248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(252, 69);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Alphabetic";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(146, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(261, 69);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Frequency";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(416, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(752, 61);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Gray;
			this->button2->Location = System::Drawing::Point(1216, 682);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 77);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Index,
					this->Word
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(448, 333);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Maroon;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(554, 250);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Index
			// 
			this->Index->HeaderText = L"Index";
			this->Index->MinimumWidth = 6;
			this->Index->Name = L"Index";
			this->Index->ReadOnly = true;
			// 
			// Word
			// 
			this->Word->HeaderText = L"Word";
			this->Word->MinimumWidth = 6;
			this->Word->Name = L"Word";
			this->Word->ReadOnly = true;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox15->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox15->Location = System::Drawing::Point(0, 0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(1371, 142);
			this->pictureBox15->TabIndex = 22;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(403, 611);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 41);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gray;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(10, 611);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(338, 32);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Choose Index of Word : ";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox16->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox16->Location = System::Drawing::Point(0, 658);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(1371, 133);
			this->pictureBox16->TabIndex = 23;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// info
			// 
			this->info->BackColor = System::Drawing::Color::DimGray;
			this->info->Controls->Add(this->pictureBox1);
			this->info->Controls->Add(this->button20);
			this->info->Controls->Add(this->pictureBox2);
			this->info->Controls->Add(this->richTextBox1);
			this->info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->info->Location = System::Drawing::Point(0, 0);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(1371, 791);
			this->info->TabIndex = 56;
			this->info->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::info_Paint);
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->Location = System::Drawing::Point(1201, 686);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(145, 83);
			this->button20->TabIndex = 3;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 659);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1371, 132);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::Gray;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(0, 132);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(1368, 659);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(603, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(139, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->ClientSize = System::Drawing::Size(1371, 791);
			this->Controls->Add(this->main);
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->main->ResumeLayout(false);
			this->main->PerformLayout();
			this->Home_page->ResumeLayout(false);
			this->Home_page->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->Delete->ResumeLayout(false);
			this->Delete->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->Insert->ResumeLayout(false);
			this->Insert->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->operations->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->search->ResumeLayout(false);
			this->search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->info->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		// for center the labels 
		void CenterLabelHorizontally(Label^ lbl, Form^ frm)
		{
			lbl->Location = System::Drawing::Point(
				(frm->ClientSize.Width - lbl->Width) / 2,
				lbl->Top 
			);
		}
		// for visiablity for all pages 
		void HideAllPages() {
			operations->Visible = false;
			Delete->Visible = false;
			search->Visible = false;
			Home_page->Visible = false;
			Insert->Visible = false;
			info->Visible = false;
		}
		// for page search compoanet
		void Hidesearchcomponanet() {
			button5->Visible = false;
			button6->Visible = false;
			button7->Visible = false;
			button8->Visible = false;
			button9->Visible = false;
			button18->Visible = true;
			button19->Visible = true;
			label9->Visible = false;
			label10->Visible = false;
			label11->Visible = false;
			label12->Visible = false;
			label14->Visible = false;
			label15->Visible = false;
			textBox1->Visible = false;
			textBox2->Visible = false;
			pictureBox6->Visible = false;
			dataGridView1->Visible = false;


		}
		// for page delete componet
		void Hidedeletecomponanet() {
			button11->Visible = false;
			button12->Visible = true;
			button13->Visible = true;
			button14->Visible = false;
			label13->Visible = false;
			label17->Visible = false;
			label18->Visible = false;
			label19->Visible = false;
			label20->Visible = false;
			label21->Visible = false;
			textBox3->Visible = false;
			textBox4->Visible = false;
			pictureBox9->Visible = false;
			dataGridView2->Visible = false;
		}
		// for check the type of the input in delete page 
		bool isword = false;
	

#pragma endregion
		
	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	
		int x = (this->ClientSize.Width - search_button->Width) / 2;
		int y = (this->ClientSize.Height - search_button->Height) / 2;
		search_button->Location = System::Drawing::Point(x, y);
		
		
	}
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			   this->BackColor = Drawing::Color::FromArgb(127, 140, 141);
			   Files fileHandeler("Dictionary.txt");
			   fileHandler.Load(trie);
			   
	}
		  

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	     HideAllPages();
	     operations->Visible = true;
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	       HideAllPages();
	       Home_page->Visible = true;
    }

private: System::Void Home_page_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void insert_button_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	Insert->Visible = true;

	

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	operations->Visible = true;
	textBox5->Clear();
}
private: System::Void search_button_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	Hidesearchcomponanet();
	search->Visible = true;
	

}
private: System::Void delte_button_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	Delete->Visible = true;
	Hidedeletecomponanet();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	operations->Visible = true;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	operations->Visible = true;
	textBox1->Clear();
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0) {
		label9->Visible = false;
	}
	else {
		Hidesearchcomponanet();
	}
	
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Visible = false;
	button7->Visible = false;
	label11->Visible = true;
	label10->Visible = true;
	label12->Visible = true;
	button9->Visible = true;
	pictureBox6->Visible = true;
	dataGridView1->Visible = true;
	textBox2->Visible = true;
	label11->Text = "By Frequency";

	String^ word2 = textBox1->Text;
	string wordStr2 = msclr::interop::marshal_as<std::string>(word2);

	 Words = trie.getsuggestions(wordStr2, 1);

	dataGridView1->Rows->Clear();

	if (Words.size() == 0) {
		MessageBox::Show("No suggestions found.");
	}
	int index = 1;
	for (const string& w : Words) {
		String^ managedWord;

		if (w == wordStr2) {
			string decorated = "*" + w + "*";
			managedWord = gcnew String(decorated.c_str());
		}
		else {
			managedWord = gcnew String(w.c_str());
		}

		dataGridView1->Rows->Add(index.ToString(), managedWord);
		index++;
	}
	if (Words.size() == 1) {
		label12->Visible = false;
		textBox2->Visible = false;
		button9->Visible = false;
		label14->Visible = true;
		String^ w = gcnew String(Words[0].c_str());
		label15->Text = w;
		label15->Visible = true;
		trie.IncreaseFrequency(Words[0]);
		fileHandler.Save(trie);
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button5->Visible = false;
	button7->Visible = false;
	button9->Visible = true;
	label11->Visible = true;
	pictureBox6->Visible = true;
	dataGridView1->Visible = true;
	textBox2->Visible = true;
	label10->Visible = true;
	label12->Visible = true;
	label11->Text = "By DFS";

	String^ word2 = textBox1->Text;
	string wordStr2 = msclr::interop::marshal_as<std::string>(word2);

	Words = trie.getsuggestions(wordStr2, 3);

	dataGridView1->Rows->Clear();

	if (Words.size() == 0) {
		MessageBox::Show("No suggestions found.");
	}
	int index = 1;
	for (const string& w : Words) {
		String^ managedWord;

		if (w == wordStr2) {
			string decorated = "*" + w + "*";
			managedWord = gcnew String(decorated.c_str());
		}
		else {
			managedWord = gcnew String(w.c_str());
		}

		dataGridView1->Rows->Add(index.ToString(), managedWord);
		index++;
	}
	if (Words.size() == 1) {
		label12->Visible = false;
		textBox2->Visible = false;
		button9->Visible = false;
		label14->Visible = true;
		String^ w = gcnew String(Words[0].c_str());
		label15->Text = w;
		label15->Visible = true;
		trie.IncreaseFrequency(Words[0]);
		fileHandler.Save(trie);
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Visible = false;
	button5->Visible = false;
	button9->Visible = true;
	label11->Visible = true;
	pictureBox6->Visible = true;
	dataGridView1->Visible = true;
	textBox2->Visible = true;
	label10->Visible = true;
	label12->Visible = true;
	String^ word2 = textBox1->Text;
	label11->Text = "By BFS";
	string wordStr2 = msclr::interop::marshal_as<std::string>(word2);

	Words = trie.getsuggestions(wordStr2, 2);

	dataGridView1->Rows->Clear();

	if (Words.size() == 0) {
		MessageBox::Show("No suggestions found.");
	}
	int index = 1;
	for (const string& w : Words) {
		String^ managedWord;


		if (w == wordStr2) {
			string decorated = "*" + w + "*";
			managedWord = gcnew String(decorated.c_str());
		}
		else {
			managedWord = gcnew String(w.c_str());
		}

		dataGridView1->Rows->Add(index.ToString(), managedWord);
		index++;
	}
	if (Words.size() == 1) {
		label12->Visible = false;
		textBox2->Visible = false;
		button9->Visible = false;
		label14->Visible = true;
		String^ w = gcnew String(Words[0].c_str());
		label15->Text = w;
		label15->Visible = true;
		trie.IncreaseFrequency(Words[0]);
		fileHandler.Save(trie);
	}

}
	   
private:System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		   
	if (type == "prefix") {
		try {
			String^ word = textBox1->Text;
			if (word->Length == 0) {
				throw std::runtime_error("Input is empty. Please enter a word.");
				Hidesearchcomponanet();
				textBox1->Clear();

			}


			std::string wordStr = msclr::interop::marshal_as<std::string>(word);
			if (!trie.ValidateWord(wordStr)) {
				MessageBox::Show("The word is invalid. Please ensure it contains only alphabetic characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Hidesearchcomponanet();
				textBox1->Clear();
				return;
			}

			if (!trie.Search(wordStr, "prefix")) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"The word is not found.\n"		
				);
				Hidesearchcomponanet();
				textBox1->Clear();
				return;
			}
			button5->Visible = true;
			button6->Visible = true;
			button7->Visible = true;
		}
		catch (const std::exception& e) {
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		try {
			String^ word = textBox1->Text;
			if (word->Length == 0) {
				throw std::runtime_error("Input is empty. Please enter a word.");
				Hidesearchcomponanet();
				textBox1->Clear();

			}


			std::string wordStr = msclr::interop::marshal_as<std::string>(word);
			if (!trie.ValidateWord(wordStr)) {
				MessageBox::Show("The word is invalid. Please ensure it contains only alphabetic characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Hidesearchcomponanet();
				textBox1->Clear();
				return;
			}
			if (!trie.Search(wordStr, "word")) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"The word is not found.\n"
				);
				Hidesearchcomponanet();
				textBox1->Clear();
				notFoundSearchCount[wordStr]++;
				if (notFoundSearchCount[wordStr] == 3) {
					trie.Insert(wordStr, false);
					fileHandler.Save(trie);
				}

				return;
			}
			button5->Visible = true;
			button6->Visible = true;
			button7->Visible = true;
		}
		catch (const std::exception& e) {
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	

}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	bool isvaild = true;
	int value;
	try {
		 value = Int32::Parse(textBox2->Text);
		 if (!(value > 0 && value <= Words.size())) {
			 MessageBox::Show("The Input out of range..");
			 textBox2->Clear();
			 return;
		 }
	}
	catch (FormatException^) {
		MessageBox::Show("Invaild Input Enter numbers ..");
		textBox2->Clear();
		isvaild = false;
	}
	if (isvaild) {
		trie.IncreaseFrequency(Words[value-1]);
		fileHandler.Save(trie);
		label14->Visible = true;
		label15->Visible = true;
		String^ w = gcnew String(Words[value-1].c_str());
		
		label15->Text = w;
		textBox2->Clear();
	}
	


}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Hidesearchcomponanet();
	textBox1->Clear();
	button18->Visible = true;
	button19->Visible = true;
	
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text->Length > 0) {
		label13->Visible = false;
	}
	else {
		label13->Visible = true;
		Hidedeletecomponanet();
	}
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	Hidedeletecomponanet();
	button12->Visible = true;
	button13->Visible = true;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	button13->Visible = false;
	button11->Visible = true;
	textBox3->Visible = true;
	label13->Visible = true;
	isword = true;
	textBox3->Clear();
	
	
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	button12->Visible = false;
	button11->Visible = true;
	textBox3->Visible = true;
	label13->Visible = true;
	isword = false;
	textBox3->Clear();

}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	operations->Visible = true;
	button12->Visible = true;
	button13->Visible = true;
}
private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Hidedeletecomponanet();
	button12->Visible = true;
	button13->Visible = true;
	textBox3->Clear();
	label13->Visible = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ d = textBox3->Text;
	string wordStr = msclr::interop::marshal_as<std::string>(d);
	
	if (!isword) {
		
		try {
			if (d->Length == 0) {
				throw std::runtime_error("Input is empty. Please enter a word.");
				Hidedeletecomponanet();
				textBox3->Clear();
				return;
			}


			if (!trie.ValidateWord(wordStr)) {
				MessageBox::Show("The word is invalid. Please ensure it contains only alphabetic characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Hidedeletecomponanet();
				button11->Visible = true;
				textBox3->Visible = true;
				textBox3->Clear();
				return;
			}

			if (!trie.Search(wordStr, "prefix")) {
				
				MessageBox::Show("The Prefix Not Found..", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Hidedeletecomponanet();
				button11->Visible = true;
				textBox3->Visible = true;
				textBox3->Clear();
				return;
			}
			label17->Visible = true;
			label18->Visible = true;
			pictureBox9->Visible = true;
			dataGridView2->Visible = true;
			textBox4->Visible = true;
			button14->Visible = true;
		}
		catch (const std::exception& e) {
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		Words = trie.getsuggestions(wordStr, 1);

		dataGridView2->Rows->Clear();

		if (Words.size() == 0) {
			MessageBox::Show("No suggestions found.");
		}
		int index = 1;
		for (const string& w : Words) {
			String^ managedWord;

			
				managedWord = gcnew String(w.c_str());
			
			dataGridView2->Rows->Add(index.ToString(), managedWord);
			index++;
		}
		if (Words.size() == 1) {
			label18->Visible = false;
			textBox4->Visible = false;
			button14->Visible = false;
			label19->Visible = true;
			label20->Visible = true;
			label21->Visible = true;

			String^ w = gcnew String(Words[0].c_str());
			label20->Text = w;
			trie.DeleteWord(Words[0]);
			fileHandler.Save(trie);
		}
		

	
	}
	else {
		try {
			if (d->Length == 0) {
				throw std::runtime_error("Input is empty. Please enter a word.");
				Hidedeletecomponanet();
				textBox3->Clear();

			}


			if (!trie.ValidateWord(wordStr)) {
				MessageBox::Show("The word is invalid. Please ensure it contains only alphabetic characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Hidedeletecomponanet();
				button11->Visible = true;
				textBox3->Visible = true;
				textBox3->Clear();
				return;
			}
			
			if (!trie.Search(wordStr, "word")) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(
					"The word is not found.\n"
				);

				
				Hidedeletecomponanet();
				button11->Visible = true;
				textBox3->Visible = true;
				textBox3->Clear();
				return;
			}
			
		}
		catch (const std::exception& e) {
			MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		trie.DeleteWord(wordStr);
		fileHandler.Save(trie);
		label19->Visible = true;
		label20->Visible = true;
		label20->Text = d;
		label21->Visible = true;
	}

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	
	bool isvaild = true;
	int value;
	try {
		value = Int32::Parse(textBox4->Text);
		if (!(value > 0 && value <= Words.size())) {
			MessageBox::Show("The Input out of range..");
			textBox4->Clear();
			return;
		}
	}
	catch (FormatException^) {
		MessageBox::Show("Invaild Input Enter numbers ..");
		textBox4->Clear();
		isvaild = false;
	}
	if (isvaild) {
		trie.DeleteWord(Words[value - 1]);
		fileHandler.Save(trie);
		label19->Visible = true;
		label20->Visible = true;
		label21->Visible = true;
		String^ w = gcnew String(Words[value - 1].c_str());
		label20->Text = w;
		textBox4->Clear();
	}


}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text->Length > 0) {
		label22->Visible = false;
	}
	else {
		label22->Visible = true;
	}

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ word = textBox5->Text;

		if (word->Length == 0) {
			throw std::runtime_error("Input is empty. Please enter a word.");
			textBox5->Clear();
		}

		label22->Visible = false;

		std::string wordStr = msclr::interop::marshal_as<std::string>(word);

		if (!trie.ValidateWord(wordStr)) {
			MessageBox::Show("The word is invalid. Please ensure it contains only alphabetic characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox5->Clear();
			return;
		}

		//trie.Clear();
		//fileHandler.Load(trie);
		trie.Insert(wordStr, false);
		fileHandler.Save(trie);
		MessageBox::Show("The word has been added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (const std::exception& e) {
		MessageBox::Show(gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	textBox5->Clear();

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Clear();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void search_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	 fileHandler.Save(trie);
 }

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	operations->Visible = true;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	button8->Visible = true;
	textBox1->Visible = true;
	label9->Visible = true;
	button19->Visible = false;
	type = "word";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	button8->Visible = true;
	textBox1->Visible = true;
	label9->Visible = true;
	button18->Visible = false;
	type = "prefix";
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void main_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void info_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Delete_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Insert_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void operations_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	Home_page->Visible = true;
	
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	HideAllPages();
	info->Visible = true;
}
};

		



	
	
	
	
}
