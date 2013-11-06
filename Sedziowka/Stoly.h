#pragma once

#include <msclr/marshal_cppstd.h>
#include "Gamer.h"
#include <string>
//#include "Form1.h"

namespace Sedziowka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Stoly
	/// </summary>
	public ref class Stoly : public System::Windows::Forms::Form
	{
	public:
		Stoly(void)
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
		~Stoly()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  brnShow;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->brnShow = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(639, 325);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"\t\t\tRozstawienie graczy na stołach";
			// 
			// brnShow
			// 
			this->brnShow->Location = System::Drawing::Point(0, 0);
			this->brnShow->Name = L"brnShow";
			this->brnShow->Size = System::Drawing::Size(44, 23);
			this->brnShow->TabIndex = 1;
			this->brnShow->Text = L"&Show";
			this->brnShow->UseVisualStyleBackColor = true;
			this->brnShow->Click += gcnew System::EventHandler(this, &Stoly::brnShow_Click);
			// 
			// Stoly
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(639, 325);
			this->Controls->Add(this->brnShow);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Stoly";
			this->Text = L"Stoly";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void brnShow_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (tura<tur+1)
				 {
					 richTextBox1->Text += "\n";
					 richTextBox1->Text += "___________________________________________________\n\n";
					 gamer *tmp  = head;

					 richTextBox1->Text += "\t\t\t"+msclr::interop::marshal_as < System::String^ > (IntToString(tura));
					 richTextBox1->Text += "tura\n\n";
					 for (int i=0; i<(id/2); i++)
					{
						tmp=set_by_ID (tables[i][0]);
						tmp->set_Buffers();
						richTextBox1->Text += ("\tStol "+(i+1)+": \n ");
						richTextBox1->Text += "\t\t"+msclr::interop::marshal_as < System::String^ > (nameBuffer);
						richTextBox1->Text += " ";
						richTextBox1->Text += msclr::interop::marshal_as < System::String^ > (surnameBuffer);
						richTextBox1->Text += "\n";
						//tmp=tmp->next;
						//if (tmp==NULL) break;

						if (tables[i][1]==id+1) 
						{
							richTextBox1->Text += ("\t\tPAUZA");
							break;
						}
						else
						{
							tmp=set_by_ID(tables[i][1]);
							tmp->set_Buffers();
							richTextBox1->Text += "\t\t"+msclr::interop::marshal_as < System::String^ > (nameBuffer);
							richTextBox1->Text += " ";
							richTextBox1->Text += msclr::interop::marshal_as < System::String^ > (surnameBuffer);
							richTextBox1->Text += "\n";
							//tmp=tmp->next;
							//if (tmp==NULL) break;
						}
					}
					 tmp = NULL;
					 delete tmp;
				 }
				 if (tura == tur+1)
				 {
					 gamer *tmp=NULL;
					gamer* chck1=NULL;
					gamer* chck2=NULL;
					if (head!=NULL)
						chck1=head;
					if (head->next!=NULL)
						chck2=head->next;
					bool ok = true;

					//bubblesort wdg. wyników graczy, najwyższy z przodu listy, najniższy na końcu listy
					while (1)
					{
		
						if ((chck1->get_summary() < chck2->get_summary())
							||((chck1->get_summary() == chck2->get_summary())
								&& (chck1->get_game_points()<chck2->get_game_points()))
							||((chck1->get_summary() == chck2->get_summary()) 
								&& (chck1->get_game_points()==chck2->get_game_points())
								&& (chck1->get_match_points()<chck2->get_match_points())))
						{
							tmp = new gamer ();
							tmp->copy_data(chck2);
							chck2->copy_data(chck1);
							chck1->copy_data(tmp);
							tmp=NULL;
							ok = false;
						}
						else
						{
							chck1=chck1->next;
							chck2=chck2->next;
						}
						if (ok == true && chck2 == NULL) break;
						if (ok == false && chck2 == NULL) 
						{
							chck1 = head;
							chck2 = head->next;
							ok = true;
						}
					}
					tmp = NULL;
					chck1 = NULL;
					chck2 = NULL;
					delete tmp;
					delete chck1;
					delete chck2;
				 }
				 gamer *tmp = head;
				 for (int j=1;;j++)
				 {
					tmp->set_Buffers();
					richTextBox1->Text += "\n";
					richTextBox1->Text += (j + ". ");
					richTextBox1->Text += "\t"+msclr::interop::marshal_as < System::String^ > (nameBuffer);
					richTextBox1->Text += " ";
					richTextBox1->Text += msclr::interop::marshal_as < System::String^ > (surnameBuffer);
					richTextBox1->Text += " "+msclr::interop::marshal_as < System::String^ > (IntToString(tmp->get_summary()));
					
					tmp=tmp->next;
					if (tmp==NULL) break;
				 }

			 }
	};}
