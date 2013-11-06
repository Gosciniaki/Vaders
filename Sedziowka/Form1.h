#pragma once

#include "Gamer.h"
#include "Clock.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include "Stoly.h"

namespace Sedziowka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				clear_tables();
				delete_gamers();
				delete [] tables;
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab;
	protected: 
	private: System::Windows::Forms::TabPage^  tabAdd;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxSurname;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TabPage^  tabScore;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBoxGracze;
	private: System::Windows::Forms::Button^  btnRozstaw;
	private: System::Windows::Forms::Button^  btnSzukaj;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textScoreSurname;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnWprowadz;
	private: System::Windows::Forms::TextBox^  textScoreName;
	private: System::Windows::Forms::TextBox^  textScoreID;
	private: System::Windows::Forms::Label^  lblVsName;
	private: System::Windows::Forms::TabPage^  tabWyniki;


	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszJakoExcelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszJakoHtmlToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  lblScoreVP;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textVPGraczI;

	private: System::Windows::Forms::TextBox^  textMPGraczI;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lblGraczII;
	private: System::Windows::Forms::TextBox^  textVPGraczII;


	private: System::Windows::Forms::TextBox^  textMPGraczII;

	private: System::Windows::Forms::Label^  lblGraczI;
	private: System::Windows::Forms::GroupBox^  groupBoxPrzeciwnik;


	private: System::Windows::Forms::Label^  lblVsId;
	private: System::Windows::Forms::Label^  lblVsSurname;
	private: System::Windows::Forms::GroupBox^  groupPunktowanie;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textScoreIdLigowe;
	private: System::Windows::Forms::RadioButton^  radioPunktacjaII;
	private: System::Windows::Forms::RadioButton^  radioPunktacjaI;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBonus;
	private: System::Windows::Forms::TextBox^  textPunktyTurniejowe;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  btnStart;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textCzas;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textTury;
	private: System::Windows::Forms::Button^  btnZmien;

	private: System::Windows::Forms::DataGridView^  dataGridViewScores;






private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  lblScore;
private: System::Windows::Forms::Label^  lblGII;

private: System::Windows::Forms::Label^  lblVS;
private: System::Windows::Forms::Label^  lblGI;
private: System::Windows::Forms::Label^  lblMiasto;
private: System::Windows::Forms::TextBox^  textBoxCity;
private: System::Windows::Forms::ComboBox^  comboArmy;








private: System::Windows::Forms::SplitContainer^  splitContainer1;
private: System::Windows::Forms::SplitContainer^  splitContainer2;
private: System::Windows::Forms::Button^  btnEdit;
private: System::Windows::Forms::SplitContainer^  splitContainer3;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::ToolStripMenuItem^  wczytajToolStripMenuItem;
private: System::Windows::Forms::Button^  btnChallange;

private: System::Windows::Forms::SplitContainer^  splitContainer4;
private: System::Windows::Forms::GroupBox^  groupChallange;
private: System::Windows::Forms::CheckBox^  chckChallange;
private: System::Windows::Forms::Label^  lblGamerB;
private: System::Windows::Forms::Label^  lblGamerA;
private: System::Windows::Forms::TextBox^  txtGamerB;
private: System::Windows::Forms::TextBox^  txtGamerA;
private: System::Windows::Forms::Button^  btnCSearch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colMiejsce;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colSurname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colDP;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colMP;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Karne;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  colSuma;


































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
			this->tab = (gcnew System::Windows::Forms::TabControl());
			this->tabAdd = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboArmy = (gcnew System::Windows::Forms::ComboBox());
			this->lblMiasto = (gcnew System::Windows::Forms::Label());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->btnRozstaw = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupPunktowanie = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textCzas = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textTury = (gcnew System::Windows::Forms::TextBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->radioPunktacjaII = (gcnew System::Windows::Forms::RadioButton());
			this->radioPunktacjaI = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBonus = (gcnew System::Windows::Forms::TextBox());
			this->textPunktyTurniejowe = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupChallange = (gcnew System::Windows::Forms::GroupBox());
			this->chckChallange = (gcnew System::Windows::Forms::CheckBox());
			this->lblGamerB = (gcnew System::Windows::Forms::Label());
			this->lblGamerA = (gcnew System::Windows::Forms::Label());
			this->txtGamerB = (gcnew System::Windows::Forms::TextBox());
			this->txtGamerA = (gcnew System::Windows::Forms::TextBox());
			this->btnCSearch = (gcnew System::Windows::Forms::Button());
			this->btnChallange = (gcnew System::Windows::Forms::Button());
			this->tabScore = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnZmien = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textScoreIdLigowe = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxPrzeciwnik = (gcnew System::Windows::Forms::GroupBox());
			this->lblVsId = (gcnew System::Windows::Forms::Label());
			this->lblVsSurname = (gcnew System::Windows::Forms::Label());
			this->lblVsName = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textScoreSurname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textScoreName = (gcnew System::Windows::Forms::TextBox());
			this->textScoreID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblGraczII = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->lblGII = (gcnew System::Windows::Forms::Label());
			this->lblVS = (gcnew System::Windows::Forms::Label());
			this->lblGI = (gcnew System::Windows::Forms::Label());
			this->textVPGraczII = (gcnew System::Windows::Forms::TextBox());
			this->textMPGraczII = (gcnew System::Windows::Forms::TextBox());
			this->lblGraczI = (gcnew System::Windows::Forms::Label());
			this->lblScoreVP = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textVPGraczI = (gcnew System::Windows::Forms::TextBox());
			this->textMPGraczI = (gcnew System::Windows::Forms::TextBox());
			this->btnWprowadz = (gcnew System::Windows::Forms::Button());
			this->tabWyniki = (gcnew System::Windows::Forms::TabPage());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->dataGridViewScores = (gcnew System::Windows::Forms::DataGridView());
			this->colMiejsce = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Karne = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSuma = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakoExcelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakoHtmlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wczytajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBoxGracze = (gcnew System::Windows::Forms::RichTextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tab->SuspendLayout();
			this->tabAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			this->groupPunktowanie->SuspendLayout();
			this->groupChallange->SuspendLayout();
			this->tabScore->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxPrzeciwnik->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabWyniki->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewScores))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab
			// 
			this->tab->Controls->Add(this->tabAdd);
			this->tab->Controls->Add(this->tabScore);
			this->tab->Controls->Add(this->tabWyniki);
			this->tab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tab->Location = System::Drawing::Point(0, 0);
			this->tab->Name = L"tab";
			this->tab->SelectedIndex = 0;
			this->tab->Size = System::Drawing::Size(536, 407);
			this->tab->TabIndex = 0;
			// 
			// tabAdd
			// 
			this->tabAdd->AllowDrop = true;
			this->tabAdd->Controls->Add(this->splitContainer2);
			this->tabAdd->Location = System::Drawing::Point(4, 22);
			this->tabAdd->Name = L"tabAdd";
			this->tabAdd->Padding = System::Windows::Forms::Padding(3);
			this->tabAdd->Size = System::Drawing::Size(528, 381);
			this->tabAdd->TabIndex = 0;
			this->tabAdd->Text = L"Dane turnieju";
			this->tabAdd->UseVisualStyleBackColor = true;
			this->tabAdd->Click += gcnew System::EventHandler(this, &Form1::tabAdd_Click);
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->groupBox4);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer2->Size = System::Drawing::Size(522, 375);
			this->splitContainer2->SplitterDistance = 152;
			this->splitContainer2->TabIndex = 9;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboArmy);
			this->groupBox4->Controls->Add(this->lblMiasto);
			this->groupBox4->Controls->Add(this->textBoxCity);
			this->groupBox4->Controls->Add(this->btnRozstaw);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->textBoxSurname);
			this->groupBox4->Controls->Add(this->textBoxName);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(522, 152);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Wprowadź gracza";
			// 
			// comboArmy
			// 
			this->comboArmy->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboArmy->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboArmy->FormattingEnabled = true;
			this->comboArmy->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"BlackTemplars", L"BloodAngels", L"ChaosDaemons", 
				L"ChaosSpaceMarines", L"DarkAngels", L"DarkEldar", L"Eldar", L"GreyKnights", L"ImperialGuard", L"Necron", L"Orks", L"SistersofBattle", 
				L"SpaceMarines", L"SpaceWolves", L"Tau"});
			this->comboArmy->Location = System::Drawing::Point(195, 19);
			this->comboArmy->Name = L"comboArmy";
			this->comboArmy->Size = System::Drawing::Size(97, 21);
			this->comboArmy->Sorted = true;
			this->comboArmy->TabIndex = 4;
			this->comboArmy->Text = L"Select";
			// 
			// lblMiasto
			// 
			this->lblMiasto->AutoSize = true;
			this->lblMiasto->Location = System::Drawing::Point(7, 100);
			this->lblMiasto->Name = L"lblMiasto";
			this->lblMiasto->Size = System::Drawing::Size(38, 13);
			this->lblMiasto->TabIndex = 8;
			this->lblMiasto->Text = L"Miasto";
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(86, 97);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(100, 20);
			this->textBoxCity->TabIndex = 3;
			// 
			// btnRozstaw
			// 
			this->btnRozstaw->Location = System::Drawing::Point(195, 111);
			this->btnRozstaw->Name = L"btnRozstaw";
			this->btnRozstaw->Size = System::Drawing::Size(75, 35);
			this->btnRozstaw->TabIndex = 7;
			this->btnRozstaw->Text = L"Rozstaw Stoły";
			this->btnRozstaw->UseVisualStyleBackColor = true;
			this->btnRozstaw->Visible = false;
			this->btnRozstaw->Click += gcnew System::EventHandler(this, &Form1::btnRozstaw_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"ID ligowe";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(86, 71);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nazwisko";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Imię";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"&Dodaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(86, 45);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(100, 20);
			this->textBoxSurname->TabIndex = 1;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(86, 19);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->groupPunktowanie);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->groupChallange);
			this->splitContainer4->Size = System::Drawing::Size(522, 219);
			this->splitContainer4->SplitterDistance = 320;
			this->splitContainer4->TabIndex = 9;
			// 
			// groupPunktowanie
			// 
			this->groupPunktowanie->Controls->Add(this->label13);
			this->groupPunktowanie->Controls->Add(this->label12);
			this->groupPunktowanie->Controls->Add(this->textCzas);
			this->groupPunktowanie->Controls->Add(this->label7);
			this->groupPunktowanie->Controls->Add(this->textTury);
			this->groupPunktowanie->Controls->Add(this->btnStart);
			this->groupPunktowanie->Controls->Add(this->radioPunktacjaII);
			this->groupPunktowanie->Controls->Add(this->radioPunktacjaI);
			this->groupPunktowanie->Controls->Add(this->label11);
			this->groupPunktowanie->Controls->Add(this->label10);
			this->groupPunktowanie->Controls->Add(this->textBonus);
			this->groupPunktowanie->Controls->Add(this->textPunktyTurniejowe);
			this->groupPunktowanie->Controls->Add(this->checkBox2);
			this->groupPunktowanie->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupPunktowanie->Location = System::Drawing::Point(0, 0);
			this->groupPunktowanie->Name = L"groupPunktowanie";
			this->groupPunktowanie->Size = System::Drawing::Size(320, 219);
			this->groupPunktowanie->TabIndex = 8;
			this->groupPunktowanie->TabStop = false;
			this->groupPunktowanie->Text = L"Punktowanie";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(192, 100);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"minut";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 100);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Czas na bitwę";
			// 
			// textCzas
			// 
			this->textCzas->Enabled = false;
			this->textCzas->Location = System::Drawing::Point(86, 97);
			this->textCzas->Name = L"textCzas";
			this->textCzas->Size = System::Drawing::Size(100, 20);
			this->textCzas->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Tury";
			// 
			// textTury
			// 
			this->textTury->Enabled = false;
			this->textTury->Location = System::Drawing::Point(86, 71);
			this->textTury->Name = L"textTury";
			this->textTury->Size = System::Drawing::Size(100, 20);
			this->textTury->TabIndex = 12;
			// 
			// btnStart
			// 
			this->btnStart->Enabled = false;
			this->btnStart->Location = System::Drawing::Point(86, 175);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 11;
			this->btnStart->Text = L"&Rozpocznij";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::btnStart_Click);
			// 
			// radioPunktacjaII
			// 
			this->radioPunktacjaII->AutoSize = true;
			this->radioPunktacjaII->Enabled = false;
			this->radioPunktacjaII->Location = System::Drawing::Point(126, 43);
			this->radioPunktacjaII->Name = L"radioPunktacjaII";
			this->radioPunktacjaII->Size = System::Drawing::Size(176, 17);
			this->radioPunktacjaII->TabIndex = 10;
			this->radioPunktacjaII->Text = L"Punktacja z uwzględnieniem VP";
			this->radioPunktacjaII->UseVisualStyleBackColor = true;
			this->radioPunktacjaII->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioPunktacjaII_CheckedChanged);
			// 
			// radioPunktacjaI
			// 
			this->radioPunktacjaI->AutoSize = true;
			this->radioPunktacjaI->Checked = true;
			this->radioPunktacjaI->Enabled = false;
			this->radioPunktacjaI->Location = System::Drawing::Point(10, 43);
			this->radioPunktacjaI->Name = L"radioPunktacjaI";
			this->radioPunktacjaI->Size = System::Drawing::Size(110, 17);
			this->radioPunktacjaI->TabIndex = 9;
			this->radioPunktacjaI->TabStop = true;
			this->radioPunktacjaI->Text = L"Punktacja bez VP";
			this->radioPunktacjaI->UseVisualStyleBackColor = true;
			this->radioPunktacjaI->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioPunktacjaI_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Możliwy bonus";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Punkty";
			// 
			// textBonus
			// 
			this->textBonus->Enabled = false;
			this->textBonus->Location = System::Drawing::Point(86, 149);
			this->textBonus->Name = L"textBonus";
			this->textBonus->Size = System::Drawing::Size(100, 20);
			this->textBonus->TabIndex = 2;
			// 
			// textPunktyTurniejowe
			// 
			this->textPunktyTurniejowe->Enabled = false;
			this->textPunktyTurniejowe->Location = System::Drawing::Point(86, 123);
			this->textPunktyTurniejowe->Name = L"textPunktyTurniejowe";
			this->textPunktyTurniejowe->Size = System::Drawing::Size(100, 20);
			this->textPunktyTurniejowe->TabIndex = 1;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(10, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(68, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"Odblokuj";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// groupChallange
			// 
			this->groupChallange->Controls->Add(this->chckChallange);
			this->groupChallange->Controls->Add(this->lblGamerB);
			this->groupChallange->Controls->Add(this->lblGamerA);
			this->groupChallange->Controls->Add(this->txtGamerB);
			this->groupChallange->Controls->Add(this->txtGamerA);
			this->groupChallange->Controls->Add(this->btnCSearch);
			this->groupChallange->Controls->Add(this->btnChallange);
			this->groupChallange->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupChallange->Location = System::Drawing::Point(0, 0);
			this->groupChallange->Name = L"groupChallange";
			this->groupChallange->Size = System::Drawing::Size(198, 219);
			this->groupChallange->TabIndex = 0;
			this->groupChallange->TabStop = false;
			this->groupChallange->Text = L"Challange";
			this->groupChallange->Visible = false;
			// 
			// chckChallange
			// 
			this->chckChallange->AutoSize = true;
			this->chckChallange->Location = System::Drawing::Point(6, 19);
			this->chckChallange->Name = L"chckChallange";
			this->chckChallange->Size = System::Drawing::Size(126, 17);
			this->chckChallange->TabIndex = 23;
			this->chckChallange->Text = L"Wprowadź challange";
			this->chckChallange->UseVisualStyleBackColor = true;
			this->chckChallange->CheckedChanged += gcnew System::EventHandler(this, &Form1::chckChallange_CheckedChanged);
			// 
			// lblGamerB
			// 
			this->lblGamerB->AutoSize = true;
			this->lblGamerB->Location = System::Drawing::Point(3, 75);
			this->lblGamerB->Name = L"lblGamerB";
			this->lblGamerB->Size = System::Drawing::Size(45, 13);
			this->lblGamerB->TabIndex = 22;
			this->lblGamerB->Text = L"Gracz B";
			this->lblGamerB->Visible = false;
			// 
			// lblGamerA
			// 
			this->lblGamerA->AutoSize = true;
			this->lblGamerA->Location = System::Drawing::Point(3, 45);
			this->lblGamerA->Name = L"lblGamerA";
			this->lblGamerA->Size = System::Drawing::Size(45, 13);
			this->lblGamerA->TabIndex = 21;
			this->lblGamerA->Text = L"Gracz A";
			this->lblGamerA->Visible = false;
			// 
			// txtGamerB
			// 
			this->txtGamerB->Location = System::Drawing::Point(79, 72);
			this->txtGamerB->Name = L"txtGamerB";
			this->txtGamerB->Size = System::Drawing::Size(100, 20);
			this->txtGamerB->TabIndex = 20;
			this->txtGamerB->Visible = false;
			// 
			// txtGamerA
			// 
			this->txtGamerA->Location = System::Drawing::Point(79, 42);
			this->txtGamerA->Name = L"txtGamerA";
			this->txtGamerA->Size = System::Drawing::Size(100, 20);
			this->txtGamerA->TabIndex = 19;
			this->txtGamerA->Visible = false;
			// 
			// btnCSearch
			// 
			this->btnCSearch->Location = System::Drawing::Point(6, 190);
			this->btnCSearch->Name = L"btnCSearch";
			this->btnCSearch->Size = System::Drawing::Size(75, 23);
			this->btnCSearch->TabIndex = 18;
			this->btnCSearch->Text = L"&Szukaj";
			this->btnCSearch->UseVisualStyleBackColor = true;
			this->btnCSearch->Visible = false;
			this->btnCSearch->Click += gcnew System::EventHandler(this, &Form1::btnCSearch_Click);
			// 
			// btnChallange
			// 
			this->btnChallange->Location = System::Drawing::Point(104, 190);
			this->btnChallange->Name = L"btnChallange";
			this->btnChallange->Size = System::Drawing::Size(75, 23);
			this->btnChallange->TabIndex = 17;
			this->btnChallange->Text = L"&Challange";
			this->btnChallange->UseVisualStyleBackColor = true;
			this->btnChallange->Visible = false;
			// 
			// tabScore
			// 
			this->tabScore->Controls->Add(this->splitContainer3);
			this->tabScore->Location = System::Drawing::Point(4, 22);
			this->tabScore->Name = L"tabScore";
			this->tabScore->Padding = System::Windows::Forms::Padding(3);
			this->tabScore->Size = System::Drawing::Size(528, 381);
			this->tabScore->TabIndex = 1;
			this->tabScore->Text = L"Wprowadź wynik";
			this->tabScore->UseVisualStyleBackColor = true;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->groupBox2);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->groupBox1);
			this->splitContainer3->Size = System::Drawing::Size(487, 375);
			this->splitContainer3->SplitterDistance = 187;
			this->splitContainer3->TabIndex = 27;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->btnZmien);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textScoreIdLigowe);
			this->groupBox2->Controls->Add(this->groupBoxPrzeciwnik);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->btnSzukaj);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textScoreSurname);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textScoreName);
			this->groupBox2->Controls->Add(this->textScoreID);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(487, 187);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Szukaj gracza";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(194, 115);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(194, 66);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(194, 89);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(194, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// btnZmien
			// 
			this->btnZmien->Location = System::Drawing::Point(192, 141);
			this->btnZmien->Name = L"btnZmien";
			this->btnZmien->Size = System::Drawing::Size(75, 23);
			this->btnZmien->TabIndex = 19;
			this->btnZmien->Text = L"&Zmień";
			this->btnZmien->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 118);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"ID ligowe";
			// 
			// textScoreIdLigowe
			// 
			this->textScoreIdLigowe->Enabled = false;
			this->textScoreIdLigowe->Location = System::Drawing::Point(87, 115);
			this->textScoreIdLigowe->Name = L"textScoreIdLigowe";
			this->textScoreIdLigowe->Size = System::Drawing::Size(100, 20);
			this->textScoreIdLigowe->TabIndex = 17;
			// 
			// groupBoxPrzeciwnik
			// 
			this->groupBoxPrzeciwnik->Controls->Add(this->lblVsId);
			this->groupBoxPrzeciwnik->Controls->Add(this->lblVsSurname);
			this->groupBoxPrzeciwnik->Controls->Add(this->lblVsName);
			this->groupBoxPrzeciwnik->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBoxPrzeciwnik->Location = System::Drawing::Point(360, 16);
			this->groupBoxPrzeciwnik->Name = L"groupBoxPrzeciwnik";
			this->groupBoxPrzeciwnik->Size = System::Drawing::Size(124, 168);
			this->groupBoxPrzeciwnik->TabIndex = 16;
			this->groupBoxPrzeciwnik->TabStop = false;
			this->groupBoxPrzeciwnik->Text = L"Przeciwnik";
			this->groupBoxPrzeciwnik->Visible = false;
			// 
			// lblVsId
			// 
			this->lblVsId->AutoSize = true;
			this->lblVsId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblVsId->Location = System::Drawing::Point(0, 16);
			this->lblVsId->Name = L"lblVsId";
			this->lblVsId->Size = System::Drawing::Size(0, 15);
			this->lblVsId->TabIndex = 16;
			// 
			// lblVsSurname
			// 
			this->lblVsSurname->AutoSize = true;
			this->lblVsSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblVsSurname->Location = System::Drawing::Point(0, 78);
			this->lblVsSurname->Name = L"lblVsSurname";
			this->lblVsSurname->Size = System::Drawing::Size(0, 15);
			this->lblVsSurname->TabIndex = 15;
			// 
			// lblVsName
			// 
			this->lblVsName->AutoSize = true;
			this->lblVsName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblVsName->Location = System::Drawing::Point(0, 52);
			this->lblVsName->Name = L"lblVsName";
			this->lblVsName->Size = System::Drawing::Size(0, 15);
			this->lblVsName->TabIndex = 14;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(11, 42);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(68, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Odblokuj";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(86, 141);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnSzukaj->TabIndex = 13;
			this->btnSzukaj->Text = L"&Szukaj";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &Form1::btnSzukaj_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ID";
			// 
			// textScoreSurname
			// 
			this->textScoreSurname->Enabled = false;
			this->textScoreSurname->Location = System::Drawing::Point(87, 89);
			this->textScoreSurname->Name = L"textScoreSurname";
			this->textScoreSurname->Size = System::Drawing::Size(100, 20);
			this->textScoreSurname->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Nazwisko";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Imię";
			// 
			// textScoreName
			// 
			this->textScoreName->Enabled = false;
			this->textScoreName->Location = System::Drawing::Point(87, 63);
			this->textScoreName->Name = L"textScoreName";
			this->textScoreName->Size = System::Drawing::Size(100, 20);
			this->textScoreName->TabIndex = 6;
			// 
			// textScoreID
			// 
			this->textScoreID->Location = System::Drawing::Point(87, 23);
			this->textScoreID->Name = L"textScoreID";
			this->textScoreID->Size = System::Drawing::Size(100, 20);
			this->textScoreID->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblGraczII);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->textVPGraczII);
			this->groupBox1->Controls->Add(this->textMPGraczII);
			this->groupBox1->Controls->Add(this->lblGraczI);
			this->groupBox1->Controls->Add(this->lblScoreVP);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textVPGraczI);
			this->groupBox1->Controls->Add(this->textMPGraczI);
			this->groupBox1->Controls->Add(this->btnWprowadz);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(487, 184);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Wprowadzanie wyników";
			// 
			// lblGraczII
			// 
			this->lblGraczII->AutoSize = true;
			this->lblGraczII->Location = System::Drawing::Point(189, 25);
			this->lblGraczII->Name = L"lblGraczII";
			this->lblGraczII->Size = System::Drawing::Size(44, 13);
			this->lblGraczII->TabIndex = 23;
			this->lblGraczII->Text = L"Gracz II";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblScore);
			this->groupBox3->Controls->Add(this->lblGII);
			this->groupBox3->Controls->Add(this->lblVS);
			this->groupBox3->Controls->Add(this->lblGI);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox3->Location = System::Drawing::Point(360, 16);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(124, 165);
			this->groupBox3->TabIndex = 26;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Wynik";
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->Location = System::Drawing::Point(6, 74);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(33, 13);
			this->lblScore->TabIndex = 3;
			this->lblScore->Text = L"score";
			this->lblScore->Visible = false;
			// 
			// lblGII
			// 
			this->lblGII->AutoSize = true;
			this->lblGII->Location = System::Drawing::Point(6, 51);
			this->lblGII->Name = L"lblGII";
			this->lblGII->Size = System::Drawing::Size(31, 13);
			this->lblGII->TabIndex = 2;
			this->lblGII->Text = L"lblGII";
			this->lblGII->Visible = false;
			// 
			// lblVS
			// 
			this->lblVS->AutoSize = true;
			this->lblVS->Location = System::Drawing::Point(6, 38);
			this->lblVS->Name = L"lblVS";
			this->lblVS->Size = System::Drawing::Size(21, 13);
			this->lblVS->TabIndex = 1;
			this->lblVS->Text = L"VS";
			this->lblVS->Visible = false;
			// 
			// lblGI
			// 
			this->lblGI->AutoSize = true;
			this->lblGI->Location = System::Drawing::Point(6, 25);
			this->lblGI->Name = L"lblGI";
			this->lblGI->Size = System::Drawing::Size(28, 13);
			this->lblGI->TabIndex = 0;
			this->lblGI->Text = L"lblGI";
			this->lblGI->Visible = false;
			// 
			// textVPGraczII
			// 
			this->textVPGraczII->Enabled = false;
			this->textVPGraczII->Location = System::Drawing::Point(192, 67);
			this->textVPGraczII->Name = L"textVPGraczII";
			this->textVPGraczII->Size = System::Drawing::Size(100, 20);
			this->textVPGraczII->TabIndex = 22;
			this->textVPGraczII->Visible = false;
			// 
			// textMPGraczII
			// 
			this->textMPGraczII->Enabled = false;
			this->textMPGraczII->Location = System::Drawing::Point(192, 41);
			this->textMPGraczII->Name = L"textMPGraczII";
			this->textMPGraczII->Size = System::Drawing::Size(100, 20);
			this->textMPGraczII->TabIndex = 21;
			// 
			// lblGraczI
			// 
			this->lblGraczI->AutoSize = true;
			this->lblGraczI->Location = System::Drawing::Point(83, 25);
			this->lblGraczI->Name = L"lblGraczI";
			this->lblGraczI->Size = System::Drawing::Size(41, 13);
			this->lblGraczI->TabIndex = 20;
			this->lblGraczI->Text = L"Gracz I";
			// 
			// lblScoreVP
			// 
			this->lblScoreVP->AutoSize = true;
			this->lblScoreVP->Location = System::Drawing::Point(7, 74);
			this->lblScoreVP->Name = L"lblScoreVP";
			this->lblScoreVP->Size = System::Drawing::Size(21, 13);
			this->lblScoreVP->TabIndex = 19;
			this->lblScoreVP->Text = L"VP";
			this->lblScoreVP->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Małe punkty";
			// 
			// textVPGraczI
			// 
			this->textVPGraczI->Enabled = false;
			this->textVPGraczI->Location = System::Drawing::Point(86, 67);
			this->textVPGraczI->Name = L"textVPGraczI";
			this->textVPGraczI->Size = System::Drawing::Size(100, 20);
			this->textVPGraczI->TabIndex = 17;
			this->textVPGraczI->Visible = false;
			// 
			// textMPGraczI
			// 
			this->textMPGraczI->Enabled = false;
			this->textMPGraczI->Location = System::Drawing::Point(86, 41);
			this->textMPGraczI->Name = L"textMPGraczI";
			this->textMPGraczI->Size = System::Drawing::Size(100, 20);
			this->textMPGraczI->TabIndex = 16;
			// 
			// btnWprowadz
			// 
			this->btnWprowadz->Location = System::Drawing::Point(82, 95);
			this->btnWprowadz->Name = L"btnWprowadz";
			this->btnWprowadz->Size = System::Drawing::Size(75, 35);
			this->btnWprowadz->TabIndex = 7;
			this->btnWprowadz->Text = L"&Wprowadź Wynik";
			this->btnWprowadz->UseVisualStyleBackColor = true;
			this->btnWprowadz->Click += gcnew System::EventHandler(this, &Form1::btnWprowadz_Click);
			// 
			// tabWyniki
			// 
			this->tabWyniki->Controls->Add(this->btnEdit);
			this->tabWyniki->Controls->Add(this->dataGridViewScores);
			this->tabWyniki->Location = System::Drawing::Point(4, 22);
			this->tabWyniki->Name = L"tabWyniki";
			this->tabWyniki->Padding = System::Windows::Forms::Padding(3);
			this->tabWyniki->Size = System::Drawing::Size(528, 381);
			this->tabWyniki->TabIndex = 2;
			this->tabWyniki->Text = L"Tabela wyników";
			this->tabWyniki->UseVisualStyleBackColor = true;
			// 
			// btnEdit
			// 
			this->btnEdit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnEdit->Location = System::Drawing::Point(3, 355);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(522, 23);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->Text = L"&Edytuj";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &Form1::btnEdit_Click);
			// 
			// dataGridViewScores
			// 
			this->dataGridViewScores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewScores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->colMiejsce, 
				this->colId, this->colName, this->colSurname, this->colDP, this->colMP, this->Column1, this->Karne, this->colSuma});
			this->dataGridViewScores->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewScores->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridViewScores->Location = System::Drawing::Point(3, 3);
			this->dataGridViewScores->Name = L"dataGridViewScores";
			this->dataGridViewScores->Size = System::Drawing::Size(522, 375);
			this->dataGridViewScores->TabIndex = 0;
			// 
			// colMiejsce
			// 
			this->colMiejsce->HeaderText = L"Miejsce";
			this->colMiejsce->Name = L"colMiejsce";
			this->colMiejsce->Width = 40;
			// 
			// colId
			// 
			this->colId->HeaderText = L"ID";
			this->colId->Name = L"colId";
			this->colId->Width = 40;
			// 
			// colName
			// 
			this->colName->HeaderText = L"Imię";
			this->colName->Name = L"colName";
			// 
			// colSurname
			// 
			this->colSurname->HeaderText = L"Nazwisko";
			this->colSurname->Name = L"colSurname";
			// 
			// colDP
			// 
			this->colDP->HeaderText = L"DP";
			this->colDP->Name = L"colDP";
			this->colDP->Width = 40;
			// 
			// colMP
			// 
			this->colMP->HeaderText = L"MP";
			this->colMP->Name = L"colMP";
			this->colMP->Width = 40;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Bonus";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 40;
			// 
			// Karne
			// 
			this->Karne->HeaderText = L"Karne";
			this->Karne->Name = L"Karne";
			this->Karne->Width = 40;
			// 
			// colSuma
			// 
			this->colSuma->HeaderText = L"Suma";
			this->colSuma->Name = L"colSuma";
			this->colSuma->Width = 40;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(704, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->zapiszToolStripMenuItem, 
				this->zapiszJakoExcelToolStripMenuItem, this->zapiszJakoHtmlToolStripMenuItem, this->wczytajToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			// 
			// zapiszJakoExcelToolStripMenuItem
			// 
			this->zapiszJakoExcelToolStripMenuItem->Name = L"zapiszJakoExcelToolStripMenuItem";
			this->zapiszJakoExcelToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->zapiszJakoExcelToolStripMenuItem->Text = L"Zapisz jako excel";
			// 
			// zapiszJakoHtmlToolStripMenuItem
			// 
			this->zapiszJakoHtmlToolStripMenuItem->Name = L"zapiszJakoHtmlToolStripMenuItem";
			this->zapiszJakoHtmlToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->zapiszJakoHtmlToolStripMenuItem->Text = L"Zapisz jako html";
			// 
			// wczytajToolStripMenuItem
			// 
			this->wczytajToolStripMenuItem->Name = L"wczytajToolStripMenuItem";
			this->wczytajToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->wczytajToolStripMenuItem->Text = L"Wczytaj";
			this->wczytajToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wczytajToolStripMenuItem_Click);
			// 
			// richTextBoxGracze
			// 
			this->richTextBoxGracze->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBoxGracze->Location = System::Drawing::Point(0, 0);
			this->richTextBoxGracze->Name = L"richTextBoxGracze";
			this->richTextBoxGracze->Size = System::Drawing::Size(164, 407);
			this->richTextBoxGracze->TabIndex = 2;
			this->richTextBoxGracze->Text = L"Żeby sprawdzić listę graczy, wybierz \"Odśwież\"";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->richTextBoxGracze);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tab);
			this->splitContainer1->Size = System::Drawing::Size(704, 407);
			this->splitContainer1->SplitterDistance = 164;
			this->splitContainer1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 431);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Sędziówka";
			this->tab->ResumeLayout(false);
			this->tabAdd->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->groupPunktowanie->ResumeLayout(false);
			this->groupPunktowanie->PerformLayout();
			this->groupChallange->ResumeLayout(false);
			this->groupChallange->PerformLayout();
			this->tabScore->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBoxPrzeciwnik->ResumeLayout(false);
			this->groupBoxPrzeciwnik->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabWyniki->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewScores))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
//popraw
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBoxName->Text != "" && textBoxName->Text != "BRAK IMIENIA" &&
				 textBoxSurname->Text != "" && textBoxSurname->Text != "BRAK NAZWISKA") /*||
				 textBoxIdLigowe->Text != "")*/
			 {
				 std::string Name;
				 std::string Surname;
				 std::string City;
				 std::string Army;
				 Name = msclr::interop::marshal_as < std::string > (textBoxName->Text);
				 Surname = msclr::interop::marshal_as < std::string > (textBoxSurname->Text);
				 City = msclr::interop::marshal_as < std::string > (textBoxCity->Text);
				 Army = msclr::interop::marshal_as < std::string > (comboArmy->Text);
				 if (City == "")
					 City = "brak";
				 
				 richTextBoxGracze->Text += "\n";
				 richTextBoxGracze->Text += textBoxName->Text;
				 richTextBoxGracze->Text += " ";
				 richTextBoxGracze->Text += textBoxSurname->Text;
				 add_gamer (Name, Surname, City, Army);
			 
				 /*// Adds new node as a child node of the currently selected node.
				 if (id%2 == 1)
				 {
					String ^ COUNTER;
					string conv = IntToString (counter);
					COUNTER = msclr::interop::marshal_as < String^ >(conv);
					// newNode = gcnew TreeNode("Stol" +(id/2));
					treeStoly->Nodes->Add(("Stol"+(id/2)),COUNTER);
					treeStoly->Nodes->Insert(counter, textBoxName->Text);
					counter++;

					//TreeNode ^ newNode = gcnew TreeNode(textBoxSurname->Text + textBoxName->Text);

					//treeStoly->SelectedNode->Nodes->Add(newNode);
				 }
				 else
				 {
					//TreeNode ^ newNode = gcnew TreeNode(textBoxSurname->Text + textBoxName->Text);
					//treeStoly->SelectedNode->Nodes->Add(newNode);
					 treeStoly->Nodes->Insert(counter, textBoxName->Text);
				 }*/
				 textBoxName->Text = "";
				 textBoxSurname->Text="";
				 textBoxCity->Text = "";
				 comboArmy->Text = "Select";
				 if (btnRozstaw->Visible == false) 
					 btnRozstaw->Visible=true;
			 }
			 else
			 {
				if(textBoxName->Text == "" || textBoxName->Text == "BRAK IMIENIA")
					textBoxName->Text = "BRAK IMIENIA";
				if(textBoxSurname->Text == "" || textBoxName->Text == "BRAK NAZWISKA")
					textBoxSurname->Text = "BRAK NAZWISKA";
			 }
		 }

private: System::Void btnRozstaw_Click(System::Object^  sender, System::EventArgs^  e) {
			 //sort_players ();
			 
			 if (tura == 0)
				randomize_players();
			 richTextBoxGracze->Text = "";
			 set_tables();
			 gamer *tmp  = head;
			 System::String^ Name;
			 System::String^ Surname;
			 for (int i=1; ; i++)
			 {
				tmp->set_Buffers();
				Name = msclr::interop::marshal_as < System::String^ > (nameBuffer);
				Surname = msclr::interop::marshal_as < System::String^ > (surnameBuffer);
				richTextBoxGracze->Text += ("Stol"+i+": \n");
				richTextBoxGracze->Text += (tmp->get_ID() +" "+ Name + Surname + "\n");
				tmp=tmp->next;
				if (tmp==NULL) break;

				tmp->set_Buffers();
				Name = msclr::interop::marshal_as < System::String^ > (nameBuffer);
				Surname = msclr::interop::marshal_as < System::String^ > (surnameBuffer);
				richTextBoxGracze->Text += (tmp->get_ID() + " " + Name + Surname + "\n\n");
				tmp=tmp->next;
				if (tmp==NULL) break;
			 }
			 //rozstawianie drzewa stołów
			 //array <TreeNode^>^ STOLY = gcnew array 
			 tmp=NULL;
			 delete tmp;
		 }

private: System::Void btnSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
			 head=head;
			 last=last;
			 Int32 a;
			 Int32 b;

			 if (checkBox1->Checked == false)
			 {
				 Int32::TryParse(textScoreID->Text, a);
				 if (a>id || a<1)
				 {
					MessageBox::Show("Zla liczba", "ERROR", MessageBoxButtons::OK);
					goto gamer_error;
				 }
			 }
				 
			 else
			 {
				 string name = msclr::interop::marshal_as <std::string> (textScoreName->Text);
				 string surname = msclr::interop::marshal_as <std::string> (textScoreSurname->Text);
				 string ID_ligowe = msclr::interop::marshal_as <std::string> (textScoreIdLigowe->Text);
				 
				 a = (Int32) search (ID_ligowe, name, surname);
				 if (a == 0)
				 {
					 MessageBox::Show("Nie znaleziono takiego gracza!!!\nBy znalezc gracza: \nNalezy podac imie i nazwisko, i/lub ID ligowe", "ERROR", MessageBoxButtons::OK);
					 goto gamer_error;
				 }
			 }

			 textScoreSurname->Text = msclr::interop::marshal_as <System::String^> (surname_by_id(a));
			 textScoreName->Text = msclr::interop::marshal_as <System::String^> (name_by_id(a));
			 textScoreID->Text = msclr::interop::marshal_as <System::String^> (IntToString (a));
			 textScoreIdLigowe->Text = msclr::interop::marshal_as <System::String^> (leagueID_by_ID(a));

			 int size = (id/2)+1;
			 for (int i=0; i<(size); i++)
			 {
				 if (tables[i][0] == a)
				 {
					 b=tables[i][1];
					 break;
				 }
				 if (tables[i][1] == a)
				 {
					 b=tables[i][0];
					 break;
				 }
			 }
			 lblVsId->Text = msclr::interop::marshal_as <System::String^> (IntToString(b));
			 lblVsName->Text = msclr::interop::marshal_as <System::String^> (name_by_id(b));
			 lblVsSurname->Text = msclr::interop::marshal_as <System::String^> (surname_by_id(b));
			 groupBoxPrzeciwnik->Visible=true;

			 lblGraczI->Text = "Gracz I ("+textScoreID->Text+" "+textScoreSurname->Text+")";
			 lblGraczII->Text = "Gracz II ("+lblVsId->Text+" "+lblVsSurname->Text+")";

			 textMPGraczI->Enabled = true;
			 textMPGraczII->Enabled = true;

			 {
				 textVPGraczI->Enabled=true;
				 textVPGraczII->Enabled=true;
			 }
gamer_error: ;//int t=0;
		 }

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked==true)
			 {
				 textScoreName->Enabled=true;
				 textScoreSurname->Enabled=true;
				 textScoreIdLigowe->Enabled=true;
			 }
			 else
			 {
				 textScoreName->Enabled=false;
				 textScoreSurname->Enabled=false;
				 textScoreIdLigowe->Enabled=false;
			 }
		 }
private: System::Void radioPunktacjaI_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioPunktacjaI->Checked == true)
			 {
				 radioPunktacjaII->Checked = false;
				 textPunktyTurniejowe->Enabled=false;
				 textBonus->Enabled=false;
				 textVPGraczI->Visible=false;
				 textVPGraczII->Visible=false;
				 lblScoreVP->Visible=false;
			 }
			 
		 }
private: System::Void radioPunktacjaII_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioPunktacjaII->Checked == true)
			 {
				 radioPunktacjaI->Checked = false;
				 textPunktyTurniejowe->Enabled=true;
				 textBonus->Enabled=true;
				 textVPGraczI->Visible=true;
				 textVPGraczII->Visible=true;
				 lblScoreVP->Visible=true;
			 }
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->Checked == true)
			 {
				 radioPunktacjaI->Enabled = true;
				 radioPunktacjaII->Enabled = true;
				 textTury->Enabled = true;
				 textCzas->Enabled = true;
				 if (radioPunktacjaI->Checked == true)
				 {
					 radioPunktacjaII->Checked = false;
					 textPunktyTurniejowe->Enabled=false;
					 textBonus->Enabled=false;
					 textVPGraczI->Visible=false;
					 textVPGraczII->Visible=false;
					 lblScoreVP->Visible=false;
				 }

				 if (radioPunktacjaII->Checked == true)
				 {
					 radioPunktacjaI->Checked = false;
					 textPunktyTurniejowe->Enabled=true;
					 textBonus->Enabled=true;
					 textVPGraczI->Visible=true;
					 textVPGraczII->Visible=true;
					 lblScoreVP->Visible=true;
				 }
				 btnStart->Enabled = true;
			 }
			 if (checkBox2->Checked == false)
			 {
				 radioPunktacjaI->Enabled = false;
				 radioPunktacjaII->Enabled = false;
				 textTury->Enabled = false;
				 textCzas->Enabled = false;
				 textPunktyTurniejowe->Enabled = false;
				 textBonus->Enabled=false;
				 btnStart->Enabled = false;
			 }
		 }
private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 head=head;
			 last=last;
			 checkBox2->Checked=false;
			 if (groupChallange->Visible == false) groupChallange->Visible = true;
			 gamer *tmp=head;

			 /*add_gamer (string name, string surname, string city, string army, short id,
				short *played_players, short *played_tables, short game_points, short match_points,
				string league_ID, short bonus, short penalty)*/

			 if (id%2==1) add_gamer ("BAY","BAY","brak","Select");

			 int newrow;

			 save_to_file("kupa");
				
				 
			 int cycki;
			 if (Int32::TryParse(textTury->Text,cycki)
				 && check_played () == true)
			 {
				 //inicjalizujemy ilość tur
				 tur = System::Convert::ToInt32 (textTury->Text);

				 //Jeżeli rozpoczynamy grę, gracze są losowani
				 //W przeciwnym wypadku sortujemy graczy
				 if (tura == 0) randomize_players();
				 else sort_players();

				 set_tables();

				 richTextBoxGracze->Text = "";
				 System::String^ Name;
				 System::String^ Surname;
				 for (int j=1; ; j++)
				 {
					tmp->set_Buffers();
					Name = msclr::interop::marshal_as < System::String^ > (nameBuffer);
					Surname = msclr::interop::marshal_as < System::String^ > (surnameBuffer);
					richTextBoxGracze->Text += ("Stol "+j+": \n");
					richTextBoxGracze->Text += (tmp->get_ID() +" "+ Name + Surname + "\n");
					tmp=tmp->next;
					if (tmp==NULL) break;
					tmp->set_Buffers();
					Name = msclr::interop::marshal_as < System::String^ > (nameBuffer);
					Surname = msclr::interop::marshal_as < System::String^ > (surnameBuffer);
					richTextBoxGracze->Text += (tmp->get_ID() + " " + Name + Surname + "\n\n");
					tmp=tmp->next;
					if (tmp==NULL) break;
				 }

				 tmp = head;
				 bool add_tabs=false;
				 if (dataGridViewScores->Rows->Count == 1) add_tabs = true;
				 for (int i=1; i<id+1; i++)
				 {//
					 
					 if (tura==0 || add_tabs == true) newrow = dataGridViewScores->Rows->Add();
					 else newrow = i-1;
				 
					 dataGridViewScores->Rows[newrow]->Cells[0]->Value = i;
					 dataGridViewScores->Rows[newrow]->Cells[1]->Value = tmp->get_ID();
					 dataGridViewScores->Rows[newrow]->Cells[2]->Value = 
						 msclr::interop::marshal_as <System::String^> (tmp->get_name());
					 dataGridViewScores->Rows[newrow]->Cells[3]->Value = 
						 msclr::interop::marshal_as <System::String^> (tmp->get_surname());
					 dataGridViewScores->Rows[newrow]->Cells[4]->Value = tmp->get_game_points();
					 dataGridViewScores->Rows[newrow]->Cells[5]->Value = tmp->get_match_points();
					 dataGridViewScores->Rows[newrow]->Cells[6]->Value = tmp->get_bonus();
					 dataGridViewScores->Rows[newrow]->Cells[7]->Value = tmp->get_penalty();
					 tmp->sum_up();
					 dataGridViewScores->Rows[newrow]->Cells[8]->Value = tmp->get_summary();
					 tmp=tmp->next;
				 }
				 tmp=NULL;
				 delete tmp;
				 
				 //Drzewo ze stołami
				 /*if (tura == 0)
				 {
					 gen_tree ();
				 }*/

				 tura++;
				 if (tura != tur)
					btnStart->Text = "Tura "+System::Convert::ToString(tura+1);
				 else
					 btnStart->Text = "Koniec";

				 set_all_played (false);
				 save_to_file("kupa");
				 Stoly ^Rozstawione = gcnew Stoly;
				 Rozstawione->Show(this);

				 
			 }
			 else
			 {
				 if (!Int32::TryParse(textTury->Text,cycki))
					 MessageBox::Show("Ile tur???","ERROR", MessageBoxButtons::OK);
				 if (check_played () == false)
				 {
					 //którzy gracze nie oddali wyników
					 String ^msg = "Nie wszyscy gracze oddali wyniki\n"+
						 msclr::interop::marshal_as <System::String^> (check_not_played());
					 MessageBox::Show(msg, "ERROR", MessageBoxButtons::OK);
				 }
			 }
			 
		 }
private: System::Void btnWprowadz_Click(System::Object^  sender, System::EventArgs^  e) {
			 head=head;
			 last=last;
			 gamer*tmp=head;
			 gamer*tmp2=head;
			 Int32 test;
			 //potrzebne dane gracza I
			 int ID = System::Convert::ToInt32 (textScoreID->Text);
			 int playerI_game_points = 10;
			 int playerI_match_points=0;

			 int bonus=0;

			 if (Int32::TryParse(textMPGraczI->Text,test))
				playerI_match_points = System::Convert::ToInt32 (textMPGraczI->Text);
			 else
			 {
				 textMPGraczI->Text = "ERROR";
				 goto a;
			 }

			 //potrzebne dane gracza II
			 int oponent_ID = System::Convert::ToInt32 (lblVsId->Text);
			 int playerII_game_points = 10;
			 int playerII_match_points=0;
			 if (Int32::TryParse(textMPGraczII->Text,test))
				playerII_match_points = System::Convert::ToInt32 (textMPGraczII->Text);
			 else
			 {
				textMPGraczII->Text = "ERROR";
				goto a;
			 }
			 //Wyznaczenie ilości zdobytych punktów
			 int score = playerI_match_points - playerII_match_points;

			 //Przypadek, gdy gracz I ma więcej punktów
			 if (playerI_match_points > playerII_match_points)
			 {
				 if (score > 10) score = 10;
				 playerI_game_points += score;
				 playerII_game_points -= score;
			 }

			 //Przypadek, gdy gracz II ma więcej punktów
			 if (playerI_match_points < playerII_match_points)
			 {
				 score = (-1)*score;
				 if (score > 10) score = 10;
				 playerI_game_points -= score;
				 playerII_game_points += score;
			 }
			 //Uwzględnienie bonusów za VP
			 if (radioPunktacjaII->Checked == true)
			 {
				 int VPI,VPII,MaxBonus,VP;
				 if (Int32::TryParse(textVPGraczI->Text,VPI) 
					 && Int32::TryParse(textVPGraczII->Text,VPII)
					 && Int32::TryParse(textPunktyTurniejowe->Text,VP)
					 && Int32::TryParse(textBonus->Text,MaxBonus))
				 {
					 int schodki = VP/MaxBonus;

					 if (VPI>VPII)
					 {
						 bonus = (VPI - VPII)/schodki;
						 if (bonus>MaxBonus) bonus = MaxBonus;
						 playerI_game_points+=bonus;
						 playerI_match_points = VPI;
						 playerII_match_points = VPII;
					 }
					 if (VPI<VPII)
					 {
						 bonus = (VPII - VPI)/schodki;
						 if (bonus>MaxBonus) bonus = MaxBonus;
						 playerII_game_points+=bonus;
						 playerII_match_points = VPII;
						 playerI_match_points = VPI;
					 }
				 }
				 else
				 {
					textVPGraczI->Text = "ERROR";
					goto a;
				 }
			}

			 //Wprowadzanie wynikó graczy
			 while (1)
			 {
				 if (tmp==NULL && tmp2==NULL) break;

				 //Wprowadzenie wyników gracza I
				 if (tmp != NULL)
				 {
					 if (tmp->get_ID() == ID)
					 {
						 if (tmp->get_played ()== false)
						 {
							 tmp->score(playerI_game_points, playerI_match_points);
							 tmp->set_played (true);
							 tmp = NULL;
							 textMPGraczI->Text = "";
						 }
						 else
						 {
							 textVPGraczI->Text = "Wprowadzono";
							 textVPGraczII->Text = "Wprowadzono";
							 break;
						 }
					 }
					 else tmp = tmp->next;
				 }

				 //Wprowadzenie wyników gracza II
				 if (tmp2 != NULL)
				 {
					 if (tmp2->get_ID() == oponent_ID)
					 {
						 if (tmp2->get_played ()== false)
						 {
							 tmp2->score(playerII_game_points, playerII_match_points);
							 tmp2->set_played(true);
							 tmp2 = NULL;
							 textMPGraczII->Text = "";
						 }
						 else 
						 {
							 textMPGraczI->Text = "Wprowadzono";
							 textMPGraczII->Text = "Wprowadzono";
							 break;
						 }
					 }
					 else tmp2 = tmp2->next;
				 }
			 }

			 lblGI->Visible = true;
			 lblGII->Visible = true;
			 lblVS->Visible = true;
			 lblScore->Visible = true;

			 lblGI->Text = msclr::interop::marshal_as <System::String^> (surname_by_id(ID));
			 lblGII->Text = msclr::interop::marshal_as <System::String^> (surname_by_id(oponent_ID));

			 lblScore->Text = playerI_game_points+" : "+playerII_game_points;

		a:	 tmp = NULL;
			 tmp2 = NULL;
			 delete tmp;
			 delete tmp2;

		 }
private: System::Void tabAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (dataGridViewScores->EditMode == DataGridViewEditMode::EditProgrammatically)
			 {
				 if (MessageBox::Show("Czy jestes pewien, ze chcesz wprowadzic zmiany?\n\nWolno zmieniac wszystko, oprocz id gracza!!!\nWpisywac dane uwaznie.",
					 "UWAGA", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				 {
					dataGridViewScores->EditMode=DataGridViewEditMode::EditOnEnter;
					btnEdit->Text="Wprowadz";
				 }
			 }
			 else
			 {
				 if (MessageBox::Show("Czy jestes pewien, ze chcesz wprowadzic zmiany?",
					 "UWAGA", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				 {
					 gamer* tmp=head;
					  for (int i=0; i<id; i++)
					  {
						  //dodaj tryparse
						  //int m_points, g_points, id, bonus, penalty;

						  //ustawiamy gracza wdg. pierwszej kolumny
						   /*if (		Convert::ToInt32(dataGridViewScores->Rows[i-1]->Cells[1]->Value,id)
							   &&	Convert::ToInt32(dataGridViewScores->Rows[i-1]->Cells[4]->Value,g_points)
							   &&	Convert::ToInt32(dataGridViewScores->Rows[i-1]->Cells[5]->Value,m_points)
							   &&	Convert::ToInt32(dataGridViewScores->Rows[i-1]->Cells[6]->Value,bonus)
							   &&	Convert::ToInt32(dataGridViewScores->Rows[i-1]->Cells[7]->Value,penalty))
						   {*/
								//ustawiamy znacznik wdg. odpowiedniego id
								tmp=set_by_ID ((short)dataGridViewScores->Rows[i]->Cells[1]->Value);
								//przepisujemy imię i nazwisko
								//tmp->set_names (msclr::interop::marshal_as < std::string >(dataGridViewScores->Rows[i-1]->Cells[2]->Value),
								//				msclr::interop::marshal_as < std::string >(dataGridViewScores->Rows[i-1]->Cells[3]->Value));
								//przepisujemy punkty
								Int32 a =0;
								Int32 b=0;
								String ^cycki =  dataGridViewScores->Rows[i]->Cells[4]->Value->ToString();
								String ^cycki2 = dataGridViewScores->Rows[i]->Cells[5]->Value->ToString();
								Int32::TryParse (cycki,a);
								Int32::TryParse (cycki2,b);
								tmp->set_points ((short)a, (short)b);

								//przepisujemy bonusy i karniaki
								cycki =  dataGridViewScores->Rows[i]->Cells[6]->Value->ToString();
								cycki2 = dataGridViewScores->Rows[i]->Cells[7]->Value->ToString();
								Int32::TryParse (cycki,a);
								Int32::TryParse (cycki2,b);
								tmp->add_bonus((short)a);
								tmp->add_penalty((short)b);

								dataGridViewScores->EditMode=DataGridViewEditMode::EditProgrammatically;
						   //}
						   /*else
						   {
							   MessageBox::Show(("Niepoprawnie wprowadzone dane dla gracza: "+(i-1)),"ERROR", MessageBoxButtons::OK);
						   }*/
					  }
					  tmp=NULL;
					  delete tmp;
					  btnEdit->Text="Edytuj";
				 }
			 }

		 }
private: virtual void gen_tree ()
		 {
			 for (int i=0;i<(id/2);i++)
			 {
				
			 }
		 }
private: System::Void wczytajToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 read_from_file ("kupa.txt");
			 set_all_played (true);
			 clear_tables ();
			 //set_tables ();
			 /*gamer *tmp = head;
			 int newrow = 0;
				 for (int i=1; i<id+1; i++)
				 {
					 if (tura==0) newrow = dataGridViewScores->Rows->Add();
					 else newrow = i-1;
				 
					 dataGridViewScores->Rows[newrow]->Cells[0]->Value = i;
					 dataGridViewScores->Rows[newrow]->Cells[1]->Value = tmp->get_ID();
					 dataGridViewScores->Rows[newrow]->Cells[2]->Value = 
						 msclr::interop::marshal_as <System::String^> (tmp->get_name());
					 dataGridViewScores->Rows[newrow]->Cells[3]->Value = 
						 msclr::interop::marshal_as <System::String^> (tmp->get_surname());
					 dataGridViewScores->Rows[newrow]->Cells[4]->Value = tmp->get_game_points();
					 dataGridViewScores->Rows[newrow]->Cells[5]->Value = tmp->get_match_points();

					 tmp=tmp->next;
				 }
				 tmp=NULL;
				 delete tmp;*/
		 }
private: System::Void btnChallanege_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void chckChallange_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (chckChallange->Checked == true)
			 {
				 txtGamerA->Visible = true;
				 txtGamerB->Visible = true;
				 lblGamerA->Visible = true;
				 lblGamerB->Visible = true;
				 btnChallange->Visible = true;
				 btnCSearch->Visible = true;
			 }
			 else
			 {
				 txtGamerA->Visible = false;
				 txtGamerB->Visible = false;
				 lblGamerA->Visible = false;
				 lblGamerB->Visible = false;
				 btnChallange->Visible = false;
				 btnCSearch->Visible = false;
			 }
		 }
private: System::Void btnCSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			 Int32 a=0;
			 Int32 b=0;
			 Int32 c=0;
			 Int32 d=0;
			 short posa;
			 short POSa;
			 short posb;
			 short POSb;
			 Int32::TryParse(txtGamerA->Text, a);
			 Int32::TryParse(txtGamerB->Text, b);

			 //int size = (id/2)+1;
			 //wyszukiwanie pozycji gracza a i zaznaczanie, w którym miejscu jest gracz do podmiany
			 for (short i=0; i<(id/2)+1; i++)
			 {
				 if (tables[i][0] == a)
				 {
					 c=tables[i][1];
					 posa = i;
					 POSa = 0;
				 }
				 if (tables[i][1] == a)
				 {
					 c=tables[i][0];
					 posa = i;
					 POSa = 1;
				 }
				 if (tables[i][0] == b)
				 {
					 d=tables[i][1];
					 posb = i;
					 POSb = 0;
				 }
				 if (tables[i][1] == b)
				 {
					 d=tables[i][0];
					 posb = i;
					 POSb = 1;
				 }
				 if (c!=0 && d!=0) break;
			 }
			 
			 
			 if (POSa == 1)
			 {
				 tables [posa][0] = b;
				 //change last played
			 }
			 else
			 {
				 tables [posa][1] = b;
				 //change last played
			 }
			 if (POSb == 1)
			 {
				 tables [posb][1] = c;
				 //change last played
			 }
			 else
			 {
				 tables [posb][0] = c;
				 //change last played
			 }
			 gamer *tmp = head;
			 tmp = set_by_ID (a);
			 tmp->change_last_played (b);

			 tmp=head;
			 tmp = set_by_ID (b);
			 tmp->change_last_played (a);

			 tmp=head;
			 tmp = set_by_ID (c);
			 tmp->change_last_played (d);

			 tmp=head;
			 tmp = set_by_ID (d);
			 tmp->change_last_played (c);

			 tmp = NULL;
			 delete tmp;
		 }
};
};
