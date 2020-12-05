#pragma once

#include "G_personnel.h"

namespace Poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Gestion_Personnel
	/// </summary>
	public ref class Gestion_Personnel : public System::Windows::Forms::Form
	{
	public:
		int V, W, X, Y;
	private: System::Windows::Forms::GroupBox^ Main;
	private: System::Windows::Forms::Button^ Actualiser1;
	private: System::Windows::Forms::DataGridView^ dataAff;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ boxSuper;

	private: System::Windows::Forms::RadioButton^ AffNon;
	private: System::Windows::Forms::RadioButton^ AffOui;
	private: System::Windows::Forms::Button^ Vider1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Vider2;
	private: System::Windows::Forms::Button^ Actualiser2;
	private: System::Windows::Forms::Button^ Ajj;
	private: System::Windows::Forms::GroupBox^ boxAjj;
	private: System::Windows::Forms::DataGridView^ dataAjj;




	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ boxSuper1;
	private: System::Windows::Forms::Button^ Modif;
	private: System::Windows::Forms::Button^ Vider3;
	private: System::Windows::Forms::Button^ Actualiser3;
	private: System::Windows::Forms::GroupBox^ boxModif;
	private: System::Windows::Forms::GroupBox^ boxSuper2;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ NonModif;

	private: System::Windows::Forms::RadioButton^ OuiModif;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::DataGridView^ dataModif;
	private: System::Windows::Forms::BindingSource^ bindingSource3;
	private: System::Windows::Forms::Button^ Voir1;
	private: System::Windows::Forms::BindingSource^ bindingSource4;
	private: System::Windows::Forms::Button^ Supp;
	private: System::Windows::Forms::Button^ Vider4;
	private: System::Windows::Forms::Button^ Actualiser4;
	private: System::Windows::Forms::GroupBox^ boxSupp;





	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::DataGridView^ dataSupp;
	private: System::Windows::Forms::Button^ Voir2;



	private: System::Windows::Forms::BindingSource^ bindingSource2;
	public:
		Gestion_Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Gestion_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Options;
	private: System::Windows::Forms::RadioButton^ Supprimer;
	protected:



	private: System::Windows::Forms::RadioButton^ Modifier;

	private: System::Windows::Forms::RadioButton^ Ajouter;

	private: System::Windows::Forms::RadioButton^ Afficher;

	private: System::Windows::Forms::Button^ Annuler;

	private: System::Windows::Forms::Button^ Aff;
	private: System::Windows::Forms::GroupBox^ boxAff;
	private: System::ComponentModel::IContainer^ components;














	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Personnel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Supp = (gcnew System::Windows::Forms::Button());
			this->Vider4 = (gcnew System::Windows::Forms::Button());
			this->Actualiser4 = (gcnew System::Windows::Forms::Button());
			this->Modif = (gcnew System::Windows::Forms::Button());
			this->Vider3 = (gcnew System::Windows::Forms::Button());
			this->Actualiser3 = (gcnew System::Windows::Forms::Button());
			this->Vider2 = (gcnew System::Windows::Forms::Button());
			this->Actualiser2 = (gcnew System::Windows::Forms::Button());
			this->Ajj = (gcnew System::Windows::Forms::Button());
			this->Vider1 = (gcnew System::Windows::Forms::Button());
			this->Actualiser1 = (gcnew System::Windows::Forms::Button());
			this->boxAjj = (gcnew System::Windows::Forms::GroupBox());
			this->boxSuper1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataAjj = (gcnew System::Windows::Forms::DataGridView());
			this->boxAff = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AffNon = (gcnew System::Windows::Forms::RadioButton());
			this->AffOui = (gcnew System::Windows::Forms::RadioButton());
			this->boxSuper = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataAff = (gcnew System::Windows::Forms::DataGridView());
			this->boxModif = (gcnew System::Windows::Forms::GroupBox());
			this->Voir1 = (gcnew System::Windows::Forms::Button());
			this->boxSuper2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->NonModif = (gcnew System::Windows::Forms::RadioButton());
			this->OuiModif = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->dataModif = (gcnew System::Windows::Forms::DataGridView());
			this->Aff = (gcnew System::Windows::Forms::Button());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->Options = (gcnew System::Windows::Forms::GroupBox());
			this->Supprimer = (gcnew System::Windows::Forms::RadioButton());
			this->Modifier = (gcnew System::Windows::Forms::RadioButton());
			this->Ajouter = (gcnew System::Windows::Forms::RadioButton());
			this->Afficher = (gcnew System::Windows::Forms::RadioButton());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource4 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->boxSupp = (gcnew System::Windows::Forms::GroupBox());
			this->Voir2 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->dataSupp = (gcnew System::Windows::Forms::DataGridView());
			this->Main->SuspendLayout();
			this->boxAjj->SuspendLayout();
			this->boxSuper1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjj))->BeginInit();
			this->boxAff->SuspendLayout();
			this->boxSuper->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->BeginInit();
			this->boxModif->SuspendLayout();
			this->boxSuper2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->BeginInit();
			this->Options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->BeginInit();
			this->boxSupp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veuillez saisir les informations requises :";
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Supp);
			this->Main->Controls->Add(this->Vider4);
			this->Main->Controls->Add(this->Actualiser4);
			this->Main->Controls->Add(this->Modif);
			this->Main->Controls->Add(this->Vider3);
			this->Main->Controls->Add(this->Actualiser3);
			this->Main->Controls->Add(this->Vider2);
			this->Main->Controls->Add(this->Actualiser2);
			this->Main->Controls->Add(this->Ajj);
			this->Main->Controls->Add(this->Vider1);
			this->Main->Controls->Add(this->Actualiser1);
			this->Main->Controls->Add(this->boxAjj);
			this->Main->Controls->Add(this->boxAff);
			this->Main->Controls->Add(this->boxModif);
			this->Main->Controls->Add(this->Aff);
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->Options);
			this->Main->Location = System::Drawing::Point(12, 69);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1276, 571);
			this->Main->TabIndex = 1;
			this->Main->TabStop = false;
			// 
			// Supp
			// 
			this->Supp->Location = System::Drawing::Point(935, 503);
			this->Supp->Name = L"Supp";
			this->Supp->Size = System::Drawing::Size(125, 49);
			this->Supp->TabIndex = 37;
			this->Supp->Text = L"Supprimer";
			this->Supp->UseVisualStyleBackColor = true;
			this->Supp->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Supp_Click);
			// 
			// Vider4
			// 
			this->Vider4->Location = System::Drawing::Point(935, 398);
			this->Vider4->Name = L"Vider4";
			this->Vider4->Size = System::Drawing::Size(125, 52);
			this->Vider4->TabIndex = 36;
			this->Vider4->Text = L"Vider";
			this->Vider4->UseVisualStyleBackColor = true;
			this->Vider4->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Vider4_Click);
			// 
			// Actualiser4
			// 
			this->Actualiser4->Location = System::Drawing::Point(1111, 401);
			this->Actualiser4->Name = L"Actualiser4";
			this->Actualiser4->Size = System::Drawing::Size(125, 49);
			this->Actualiser4->TabIndex = 35;
			this->Actualiser4->Text = L"Actualiser";
			this->Actualiser4->UseVisualStyleBackColor = true;
			this->Actualiser4->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Actualiser4_Click);
			// 
			// Modif
			// 
			this->Modif->Location = System::Drawing::Point(935, 503);
			this->Modif->Name = L"Modif";
			this->Modif->Size = System::Drawing::Size(125, 49);
			this->Modif->TabIndex = 33;
			this->Modif->Text = L"Modifier";
			this->Modif->UseVisualStyleBackColor = true;
			this->Modif->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Modif_Click);
			// 
			// Vider3
			// 
			this->Vider3->Location = System::Drawing::Point(935, 398);
			this->Vider3->Name = L"Vider3";
			this->Vider3->Size = System::Drawing::Size(125, 52);
			this->Vider3->TabIndex = 32;
			this->Vider3->Text = L"Vider";
			this->Vider3->UseVisualStyleBackColor = true;
			this->Vider3->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Vider3_Click);
			// 
			// Actualiser3
			// 
			this->Actualiser3->Location = System::Drawing::Point(1111, 401);
			this->Actualiser3->Name = L"Actualiser3";
			this->Actualiser3->Size = System::Drawing::Size(125, 49);
			this->Actualiser3->TabIndex = 31;
			this->Actualiser3->Text = L"Actualiser";
			this->Actualiser3->UseVisualStyleBackColor = true;
			this->Actualiser3->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Actualiser3_Click);
			// 
			// Vider2
			// 
			this->Vider2->Location = System::Drawing::Point(935, 398);
			this->Vider2->Name = L"Vider2";
			this->Vider2->Size = System::Drawing::Size(125, 52);
			this->Vider2->TabIndex = 30;
			this->Vider2->Text = L"Vider";
			this->Vider2->UseVisualStyleBackColor = true;
			// 
			// Actualiser2
			// 
			this->Actualiser2->Location = System::Drawing::Point(1111, 401);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(125, 49);
			this->Actualiser2->TabIndex = 29;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			this->Actualiser2->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Actualiser2_Click);
			// 
			// Ajj
			// 
			this->Ajj->Location = System::Drawing::Point(935, 503);
			this->Ajj->Name = L"Ajj";
			this->Ajj->Size = System::Drawing::Size(125, 49);
			this->Ajj->TabIndex = 28;
			this->Ajj->Text = L"Ajouter";
			this->Ajj->UseVisualStyleBackColor = true;
			this->Ajj->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Ajj_Click);
			// 
			// Vider1
			// 
			this->Vider1->Location = System::Drawing::Point(935, 399);
			this->Vider1->Name = L"Vider1";
			this->Vider1->Size = System::Drawing::Size(125, 51);
			this->Vider1->TabIndex = 27;
			this->Vider1->Text = L"Vider";
			this->Vider1->UseVisualStyleBackColor = true;
			this->Vider1->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Vider1_Click);
			// 
			// Actualiser1
			// 
			this->Actualiser1->Location = System::Drawing::Point(1111, 401);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(125, 49);
			this->Actualiser1->TabIndex = 26;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Actualiser1_Click);
			// 
			// boxAjj
			// 
			this->boxAjj->Controls->Add(this->boxSuper1);
			this->boxAjj->Controls->Add(this->label9);
			this->boxAjj->Controls->Add(this->label8);
			this->boxAjj->Controls->Add(this->label7);
			this->boxAjj->Controls->Add(this->label5);
			this->boxAjj->Controls->Add(this->textBox11);
			this->boxAjj->Controls->Add(this->textBox8);
			this->boxAjj->Controls->Add(this->textBox4);
			this->boxAjj->Controls->Add(this->textBox3);
			this->boxAjj->Controls->Add(this->dataAjj);
			this->boxAjj->Location = System::Drawing::Point(0, 0);
			this->boxAjj->Name = L"boxAjj";
			this->boxAjj->Size = System::Drawing::Size(908, 552);
			this->boxAjj->TabIndex = 17;
			this->boxAjj->TabStop = false;
			// 
			// boxSuper1
			// 
			this->boxSuper1->Controls->Add(this->label10);
			this->boxSuper1->Controls->Add(this->textBox10);
			this->boxSuper1->Controls->Add(this->textBox9);
			this->boxSuper1->Controls->Add(this->label11);
			this->boxSuper1->Location = System::Drawing::Point(606, 343);
			this->boxSuper1->Name = L"boxSuper1";
			this->boxSuper1->Size = System::Drawing::Size(254, 193);
			this->boxSuper1->TabIndex = 19;
			this->boxSuper1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Nom supérieur :";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(19, 64);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(123, 22);
			this->textBox10->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(19, 169);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(123, 22);
			this->textBox9->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 129);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Prénom supérieur :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 466);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 17);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Date d\'embauche :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(234, 462);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Adresse de résidence :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(237, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Prénom :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Nom :";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(237, 503);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(123, 22);
			this->textBox11->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(237, 397);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(123, 22);
			this->textBox8->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(18, 503);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(123, 22);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(18, 397);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(123, 22);
			this->textBox3->TabIndex = 1;
			// 
			// dataAjj
			// 
			this->dataAjj->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAjj->Location = System::Drawing::Point(6, 14);
			this->dataAjj->Name = L"dataAjj";
			this->dataAjj->RowHeadersWidth = 51;
			this->dataAjj->RowTemplate->Height = 24;
			this->dataAjj->Size = System::Drawing::Size(902, 303);
			this->dataAjj->TabIndex = 0;
			// 
			// boxAff
			// 
			this->boxAff->Controls->Add(this->label4);
			this->boxAff->Controls->Add(this->AffNon);
			this->boxAff->Controls->Add(this->AffOui);
			this->boxAff->Controls->Add(this->boxSuper);
			this->boxAff->Controls->Add(this->textBox2);
			this->boxAff->Controls->Add(this->label3);
			this->boxAff->Controls->Add(this->textBox1);
			this->boxAff->Controls->Add(this->label2);
			this->boxAff->Controls->Add(this->dataAff);
			this->boxAff->Location = System::Drawing::Point(0, 0);
			this->boxAff->Name = L"boxAff";
			this->boxAff->Size = System::Drawing::Size(908, 552);
			this->boxAff->TabIndex = 25;
			this->boxAff->TabStop = false;
			this->boxAff->Enter += gcnew System::EventHandler(this, &Gestion_Personnel::boxAff_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(412, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Supérieur :";
			// 
			// AffNon
			// 
			this->AffNon->AutoSize = true;
			this->AffNon->Location = System::Drawing::Point(415, 398);
			this->AffNon->Name = L"AffNon";
			this->AffNon->Size = System::Drawing::Size(55, 21);
			this->AffNon->TabIndex = 15;
			this->AffNon->TabStop = true;
			this->AffNon->Text = L"Non";
			this->AffNon->UseVisualStyleBackColor = true;
			this->AffNon->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::AffNon_CheckedChanged);
			// 
			// AffOui
			// 
			this->AffOui->AutoSize = true;
			this->AffOui->Location = System::Drawing::Point(415, 358);
			this->AffOui->Name = L"AffOui";
			this->AffOui->Size = System::Drawing::Size(51, 21);
			this->AffOui->TabIndex = 14;
			this->AffOui->TabStop = true;
			this->AffOui->Text = L"Oui";
			this->AffOui->UseVisualStyleBackColor = true;
			this->AffOui->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::AffOui_CheckedChanged);
			// 
			// boxSuper
			// 
			this->boxSuper->Controls->Add(this->textBox6);
			this->boxSuper->Controls->Add(this->label6);
			this->boxSuper->Controls->Add(this->textBox7);
			this->boxSuper->Controls->Add(this->textBox5);
			this->boxSuper->Location = System::Drawing::Point(415, 437);
			this->boxSuper->Name = L"boxSuper";
			this->boxSuper->Size = System::Drawing::Size(356, 99);
			this->boxSuper->TabIndex = 13;
			this->boxSuper->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(149, 65);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nom /Prénom du supérieur :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(286, 65);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(37, 22);
			this->textBox7->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(8, 65);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(203, 401);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->label3->Location = System::Drawing::Point(200, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Prénom :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 401);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->label2->Location = System::Drawing::Point(15, 358);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom :";
			// 
			// dataAff
			// 
			this->dataAff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAff->Location = System::Drawing::Point(18, 14);
			this->dataAff->Name = L"dataAff";
			this->dataAff->RowHeadersWidth = 51;
			this->dataAff->RowTemplate->Height = 24;
			this->dataAff->Size = System::Drawing::Size(884, 303);
			this->dataAff->TabIndex = 0;
			// 
			// boxModif
			// 
			this->boxModif->Controls->Add(this->Voir1);
			this->boxModif->Controls->Add(this->boxSuper2);
			this->boxModif->Controls->Add(this->NonModif);
			this->boxModif->Controls->Add(this->OuiModif);
			this->boxModif->Controls->Add(this->label15);
			this->boxModif->Controls->Add(this->label16);
			this->boxModif->Controls->Add(this->label17);
			this->boxModif->Controls->Add(this->label18);
			this->boxModif->Controls->Add(this->label19);
			this->boxModif->Controls->Add(this->textBox14);
			this->boxModif->Controls->Add(this->textBox15);
			this->boxModif->Controls->Add(this->textBox16);
			this->boxModif->Controls->Add(this->textBox17);
			this->boxModif->Controls->Add(this->dataModif);
			this->boxModif->Location = System::Drawing::Point(0, 0);
			this->boxModif->Name = L"boxModif";
			this->boxModif->Size = System::Drawing::Size(908, 552);
			this->boxModif->TabIndex = 34;
			this->boxModif->TabStop = false;
			this->boxModif->Enter += gcnew System::EventHandler(this, &Gestion_Personnel::boxModif_Enter);
			// 
			// Voir1
			// 
			this->Voir1->Location = System::Drawing::Point(807, 423);
			this->Voir1->Name = L"Voir1";
			this->Voir1->Size = System::Drawing::Size(65, 60);
			this->Voir1->TabIndex = 32;
			this->Voir1->Text = L"Voir";
			this->Voir1->UseVisualStyleBackColor = true;
			this->Voir1->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Voir1_Click);
			// 
			// boxSuper2
			// 
			this->boxSuper2->Controls->Add(this->label13);
			this->boxSuper2->Controls->Add(this->textBox12);
			this->boxSuper2->Controls->Add(this->textBox13);
			this->boxSuper2->Controls->Add(this->label14);
			this->boxSuper2->Location = System::Drawing::Point(603, 343);
			this->boxSuper2->Name = L"boxSuper2";
			this->boxSuper2->Size = System::Drawing::Size(162, 193);
			this->boxSuper2->TabIndex = 31;
			this->boxSuper2->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(16, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(109, 17);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Nom supérieur :";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(19, 64);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(123, 22);
			this->textBox12->TabIndex = 5;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(19, 169);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(123, 22);
			this->textBox13->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 129);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 17);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Prénom supérieur :";
			// 
			// NonModif
			// 
			this->NonModif->AutoSize = true;
			this->NonModif->Location = System::Drawing::Point(420, 475);
			this->NonModif->Name = L"NonModif";
			this->NonModif->Size = System::Drawing::Size(55, 21);
			this->NonModif->TabIndex = 30;
			this->NonModif->TabStop = true;
			this->NonModif->Text = L"Non";
			this->NonModif->UseVisualStyleBackColor = true;
			this->NonModif->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::NonModif_CheckedChanged);
			// 
			// OuiModif
			// 
			this->OuiModif->AutoSize = true;
			this->OuiModif->Location = System::Drawing::Point(420, 425);
			this->OuiModif->Name = L"OuiModif";
			this->OuiModif->Size = System::Drawing::Size(51, 21);
			this->OuiModif->TabIndex = 29;
			this->OuiModif->TabStop = true;
			this->OuiModif->Text = L"Oui";
			this->OuiModif->UseVisualStyleBackColor = true;
			this->OuiModif->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::OuiModif_CheckedChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->label15->Location = System::Drawing::Point(420, 382);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(113, 18);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Avec supérieur :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 466);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 17);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Date d\'embauche :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(231, 462);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(154, 17);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Adresse de résidence :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(234, 358);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 17);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Prénom :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(15, 358);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 17);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Nom :";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(234, 503);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(123, 22);
			this->textBox14->TabIndex = 23;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(234, 397);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(123, 22);
			this->textBox15->TabIndex = 22;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(15, 503);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(123, 22);
			this->textBox16->TabIndex = 21;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(15, 397);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(123, 22);
			this->textBox17->TabIndex = 20;
			// 
			// dataModif
			// 
			this->dataModif->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataModif->Location = System::Drawing::Point(6, 14);
			this->dataModif->Name = L"dataModif";
			this->dataModif->RowHeadersWidth = 51;
			this->dataModif->RowTemplate->Height = 24;
			this->dataModif->Size = System::Drawing::Size(902, 303);
			this->dataModif->TabIndex = 0;
			// 
			// Aff
			// 
			this->Aff->Location = System::Drawing::Point(935, 503);
			this->Aff->Name = L"Aff";
			this->Aff->Size = System::Drawing::Size(125, 49);
			this->Aff->TabIndex = 24;
			this->Aff->Text = L"Afficher";
			this->Aff->UseVisualStyleBackColor = true;
			this->Aff->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Aff_Click);
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1111, 503);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(125, 49);
			this->Annuler->TabIndex = 23;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Annuler_Click);
			// 
			// Options
			// 
			this->Options->Controls->Add(this->Supprimer);
			this->Options->Controls->Add(this->Modifier);
			this->Options->Controls->Add(this->Ajouter);
			this->Options->Controls->Add(this->Afficher);
			this->Options->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Options->Location = System::Drawing::Point(914, 21);
			this->Options->Name = L"Options";
			this->Options->Size = System::Drawing::Size(286, 296);
			this->Options->TabIndex = 16;
			this->Options->TabStop = false;
			this->Options->Text = L"Choisissez votre action :";
			// 
			// Supprimer
			// 
			this->Supprimer->AutoSize = true;
			this->Supprimer->Location = System::Drawing::Point(21, 234);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(119, 28);
			this->Supprimer->TabIndex = 3;
			this->Supprimer->TabStop = true;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::Supprimer_CheckedChanged);
			// 
			// Modifier
			// 
			this->Modifier->AutoSize = true;
			this->Modifier->Location = System::Drawing::Point(21, 175);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(98, 28);
			this->Modifier->TabIndex = 2;
			this->Modifier->TabStop = true;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::Modifier_CheckedChanged);
			// 
			// Ajouter
			// 
			this->Ajouter->AutoSize = true;
			this->Ajouter->Location = System::Drawing::Point(21, 115);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(91, 28);
			this->Ajouter->TabIndex = 1;
			this->Ajouter->TabStop = true;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::Ajouter_CheckedChanged);
			// 
			// Afficher
			// 
			this->Afficher->AutoSize = true;
			this->Afficher->Location = System::Drawing::Point(21, 61);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(94, 28);
			this->Afficher->TabIndex = 0;
			this->Afficher->TabStop = true;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			this->Afficher->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Personnel::Afficher_CheckedChanged);
			// 
			// boxSupp
			// 
			this->boxSupp->Controls->Add(this->Voir2);
			this->boxSupp->Controls->Add(this->label21);
			this->boxSupp->Controls->Add(this->label22);
			this->boxSupp->Controls->Add(this->label23);
			this->boxSupp->Controls->Add(this->label24);
			this->boxSupp->Controls->Add(this->textBox20);
			this->boxSupp->Controls->Add(this->textBox21);
			this->boxSupp->Controls->Add(this->textBox22);
			this->boxSupp->Controls->Add(this->textBox23);
			this->boxSupp->Controls->Add(this->dataSupp);
			this->boxSupp->Location = System::Drawing::Point(12, 69);
			this->boxSupp->Name = L"boxSupp";
			this->boxSupp->Size = System::Drawing::Size(908, 552);
			this->boxSupp->TabIndex = 20;
			this->boxSupp->TabStop = false;
			// 
			// Voir2
			// 
			this->Voir2->Location = System::Drawing::Point(446, 427);
			this->Voir2->Name = L"Voir2";
			this->Voir2->Size = System::Drawing::Size(44, 51);
			this->Voir2->TabIndex = 29;
			this->Voir2->Text = L"Voir";
			this->Voir2->UseVisualStyleBackColor = true;
			this->Voir2->Click += gcnew System::EventHandler(this, &Gestion_Personnel::Voir2_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 465);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(127, 17);
			this->label21->TabIndex = 27;
			this->label21->Text = L"Date d\'embauche :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(231, 461);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(154, 17);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Adresse de résidence :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(234, 357);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(65, 17);
			this->label23->TabIndex = 25;
			this->label23->Text = L"Prénom :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(15, 357);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(45, 17);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Nom :";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(234, 502);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(123, 22);
			this->textBox20->TabIndex = 23;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(234, 396);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(123, 22);
			this->textBox21->TabIndex = 22;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(15, 502);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(123, 22);
			this->textBox22->TabIndex = 21;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(15, 396);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(123, 22);
			this->textBox23->TabIndex = 20;
			// 
			// dataSupp
			// 
			this->dataSupp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataSupp->Location = System::Drawing::Point(6, 14);
			this->dataSupp->Name = L"dataSupp";
			this->dataSupp->RowHeadersWidth = 51;
			this->dataSupp->RowTemplate->Height = 24;
			this->dataSupp->Size = System::Drawing::Size(902, 303);
			this->dataSupp->TabIndex = 0;
			// 
			// Gestion_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1321, 652);
			this->ControlBox = false;
			this->Controls->Add(this->boxSupp);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label1);
			this->Name = L"Gestion_Personnel";
			this->Text = L"Gestion_Personnel";
			this->Load += gcnew System::EventHandler(this, &Gestion_Personnel::Gestion_Personnel_Load);
			this->Main->ResumeLayout(false);
			this->boxAjj->ResumeLayout(false);
			this->boxAjj->PerformLayout();
			this->boxSuper1->ResumeLayout(false);
			this->boxSuper1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjj))->EndInit();
			this->boxAff->ResumeLayout(false);
			this->boxAff->PerformLayout();
			this->boxSuper->ResumeLayout(false);
			this->boxSuper->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->EndInit();
			this->boxModif->ResumeLayout(false);
			this->boxModif->PerformLayout();
			this->boxSuper2->ResumeLayout(false);
			this->boxSuper2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->EndInit();
			this->Options->ResumeLayout(false);
			this->Options->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->EndInit();
			this->boxSupp->ResumeLayout(false);
			this->boxSupp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Gestion_Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		Aff->Hide();
		Ajj->Hide();
		Modif->Hide();
		Supp->Hide();
		Actualiser1->Hide();
		Actualiser2->Hide();
		Actualiser3->Hide();
		Actualiser4->Hide();
		Vider1->Hide();
		Vider2->Hide();
		Vider3->Hide();
		Vider4->Hide();
		boxAff->Hide(); 
		boxAjj->Hide();
		boxModif->Hide();
		boxSupp->Hide();
		textBox7->Hide();
	}
	private: System::Void boxAff_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Hide();
		boxSuper->Hide();
	}
	private: System::Void boxAjj_Enter(System::Object^ sender, System::EventArgs^ e) {
		boxSuper1->Hide();
		textBox7->Hide();
	}
	private: System::Void boxModif_Enter(System::Object^ sender, System::EventArgs^ e) {
		boxSuper2->Hide();
		textBox7->Hide();
	}
	private: System::Void boxSuper_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Hide();
	}
	private: System::Void Actualiser1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataAff->DataSource = bindingSource1;
	}
	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataAjj->DataSource = bindingSource2;
	}
	private: System::Void Actualiser3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource3->DataSource = data;
		dataModif->DataSource = bindingSource3;
	}
	private: System::Void Actualiser4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource4->DataSource = data;
		dataSupp->DataSource = bindingSource4;
	}
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
		else {
		}
	}
	private: System::Void Vider1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
	}
	private: System::Void Vider2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = " ";
		textBox4->Text = " ";
		textBox8->Text = " ";
		textBox9->Text = " ";
		textBox10->Text = " ";
		textBox11->Text = " ";
	}
	private: System::Void Vider3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox17->Text = "";
		textBox15->Text = "";
		textBox14->Text = "";
		textBox16->Text = "";
		textBox12->Text = "";
		textBox13->Text = "";
	}
	private: System::Void Vider4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox20->Text = "";
		textBox21->Text = "";
		textBox22->Text = "";
		textBox23->Text = "";
	}
	private: System::Void Aff_Click(System::Object^ sender, System::EventArgs^ e) {
		if (V == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ nom = textBox1->Text;
				String^ prenom = textBox2->Text;
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				
				conDataBase->Open();
				
				NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
				Personnel->afficher1(nom,prenom,textBox1, textBox2,textBox7);
				
				
								
				
			
				Personnel->afficher2(nom, prenom, bindingSource1, dataAff);


				AffOui->Checked = false;
				AffNon->Checked = true;
				if (Convert::ToInt32(textBox7->Text) != 0) {
					AffOui->Checked = true;
					AffNon->Checked = false;
				}
				MessageBox::Show("Recherche terminée !", "Warning");
			}
			else {
			}
		}
	}
	private: System::Void AffOui_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			boxSuper->Show();
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			int Id = Int32::Parse(textBox7->Text);

			
			try {

				conDataBase->Open();
				
				NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
				Personnel->afficher3(Id, textBox5, textBox6);


				conDataBase->Close();
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	private: System::Void AffNon_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Ajj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (W == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ nom = textBox3->Text;
				String^ prenom = textBox8->Text;
				String^ Pnom = textBox10->Text;
				String^ Pprenom = textBox9->Text;
				String^ adresse_rd= textBox11->Text;
				String^ date_embauche = textBox4->Text;


				
				try {

					conDataBase->Open();
					
					NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
					Personnel->ajouter(nom,prenom,Pnom,Pprenom,adresse_rd,date_embauche);

					MessageBox::Show("Personnel ajouté au serveur !");
					conDataBase->Close();
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {
			}
		}
	}
	private: System::Void Modif_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ nom = textBox17->Text;
				String^ prenom = textBox15->Text;
				String^ adresse_rd= textBox14->Text;
				String^ date_embauche = textBox16->Text;
				String^ Pnom = textBox12->Text;
				String^ Pprenom = textBox13->Text;

				
				try {

					conDataBase->Open();
					
					NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
					Personnel->modifier(textBox17->Text, textBox15->Text, textBox12->Text, textBox13->Text, textBox14->Text, textBox16->Text);

					MessageBox::Show("Modification effectué !");
					conDataBase->Close();
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {
			}
		}
	}
	private: System::Void OuiModif_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		boxSuper2->Show();
	}
	private: System::Void NonModif_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		boxSuper2->Hide();
	}
	private: System::Void Voir1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			String^ nom = textBox17->Text;
			String^ prenom = textBox15->Text;


			try {

				conDataBase->Open();
				
				NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
				Personnel->voir(textBox17->Text,textBox15->Text,textBox17,textBox15, textBox14, textBox16);

				conDataBase->Close();
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	}
	private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ nom = textBox23->Text;
				String^ prenom = textBox21->Text;

				
				try {

					conDataBase->Open();
					
					NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
					Personnel->supprimer(textBox23->Text, textBox21->Text);

					MessageBox::Show("Suppression effectué !");
					conDataBase->Close();
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {
			}
		}
	}
	private: System::Void Voir2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y == 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			String^ nom = textBox23->Text;
			String^ prenom = textBox21->Text;


			
			try {

				conDataBase->Open();
				
				
				NS_SVC::G_personnel^ Personnel = gcnew NS_SVC::G_personnel();
				Personnel->voir2(textBox23->Text, textBox21->Text,textBox23,textBox21, textBox20, textBox22);
				
				conDataBase->Close();
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	}




private: System::Void Afficher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	V = 1;
	textBox7->Hide();
	Aff->Show();
	Ajj->Hide();
	Modif->Hide();
	Supp->Hide();
	Vider1->Show();
	Vider2->Hide();
	Vider3->Hide();
	Vider4->Hide();
	Actualiser1->Show();
	Actualiser2->Hide();
	Actualiser3->Hide();
	Actualiser4->Hide();
	boxAff->Show();
	boxAjj->Hide();
	boxModif->Hide();
	boxSupp->Hide();
	boxSuper1->Hide();
}
private: System::Void Ajouter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	W = 1;
	textBox7->Hide();
	Ajj->Show();
	Aff->Hide();
	Modif->Hide();
	Supp->Hide();
	Vider1->Hide();
	Vider2->Show();
	Vider3->Hide();
	Vider4->Hide();
	Actualiser1->Hide();
	Actualiser2->Show();
	Actualiser3->Hide();
	Actualiser4->Hide();
	boxAff->Hide();
	boxAjj->Show();
	boxModif->Hide();
	boxSupp->Hide();
	boxSuper1->Show();
}
private: System::Void Modifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	X = 1;
	textBox7->Hide();
	Modif->Show();
	Aff->Hide();
	Ajj->Hide();
	Supp->Hide();
	Vider1->Hide();
	Vider2->Hide();
	Vider3->Show();
	Vider4->Hide();
	Actualiser1->Hide();
	Actualiser2->Hide();
	Actualiser3->Show();
	Actualiser4->Hide();
	boxAff->Hide();
	boxAjj->Hide();
	boxModif->Show();
	boxSupp->Hide();
	boxSuper2->Hide();
}
private: System::Void Supprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = 1;
	textBox7->Hide();
	Modif->Hide();
	Aff->Hide();
	Ajj->Hide();
	Supp->Show();
	Vider1->Hide();
	Vider2->Hide();
	Vider3->Hide();
	Vider4->Show();
	Actualiser1->Hide();
	Actualiser2->Hide();
	Actualiser3->Hide();
	Actualiser4->Show();
	boxAff->Hide();
	boxAjj->Hide();
	boxModif->Hide();
	boxSupp->Show();
	boxSuper2->Hide();
}
};
}
