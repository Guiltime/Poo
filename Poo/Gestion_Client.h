#pragma once

namespace Poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Gestion_Client
	/// </summary>
	public ref class Gestion_Client : public System::Windows::Forms::Form
	{
	public:
		int V, W, X, Y;
	private: System::Windows::Forms::GroupBox^ BoxAj;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridView^ dataAj;
	private: System::Windows::Forms::Button^ Aj;



	private: System::Windows::Forms::Button^ Actualiser2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::BindingSource^ bindingSource3;
	private: System::Windows::Forms::Button^ Modif;
	private: System::Windows::Forms::Button^ Actualiser3;
	private: System::Windows::Forms::GroupBox^ BoxModif;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::DataGridView^ dataModif;
	private: System::Windows::Forms::Button^ Voir;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ Supp;
	private: System::Windows::Forms::Button^ Actualiser4;
	private: System::Windows::Forms::GroupBox^ BoxSupp;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::DataGridView^ dataSupp;

	private: System::Windows::Forms::BindingSource^ bindingSource4;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Button^ Voir2;

	public:
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	public:
		Gestion_Client(void)
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
		~Gestion_Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ Main;
	private: System::Windows::Forms::GroupBox^ BoxAff;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataAff;
	private: System::Windows::Forms::Button^ Actualiser1;

	private: System::Windows::Forms::Button^ Aff;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::GroupBox^ Options;
	private: System::Windows::Forms::RadioButton^ Supprimer;
	private: System::Windows::Forms::RadioButton^ Modifier;
	private: System::Windows::Forms::RadioButton^ Ajouter;
	private: System::Windows::Forms::RadioButton^ Afficher;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Client::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Supp = (gcnew System::Windows::Forms::Button());
			this->Actualiser4 = (gcnew System::Windows::Forms::Button());
			this->Modif = (gcnew System::Windows::Forms::Button());
			this->Actualiser3 = (gcnew System::Windows::Forms::Button());
			this->Aj = (gcnew System::Windows::Forms::Button());
			this->Actualiser2 = (gcnew System::Windows::Forms::Button());
			this->BoxAj = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataAj = (gcnew System::Windows::Forms::DataGridView());
			this->BoxAff = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataAff = (gcnew System::Windows::Forms::DataGridView());
			this->BoxSupp = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->Voir2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->dataSupp = (gcnew System::Windows::Forms::DataGridView());
			this->Actualiser1 = (gcnew System::Windows::Forms::Button());
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
			this->BoxModif = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->Voir = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->dataModif = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource4 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->Main->SuspendLayout();
			this->BoxAj->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAj))->BeginInit();
			this->BoxAff->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->BeginInit();
			this->BoxSupp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->BeginInit();
			this->Options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			this->BoxModif->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veuillez saisir les informations demandées :";
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Supp);
			this->Main->Controls->Add(this->Actualiser4);
			this->Main->Controls->Add(this->Modif);
			this->Main->Controls->Add(this->Actualiser3);
			this->Main->Controls->Add(this->Aj);
			this->Main->Controls->Add(this->Actualiser2);
			this->Main->Controls->Add(this->BoxAj);
			this->Main->Controls->Add(this->BoxAff);
			this->Main->Controls->Add(this->BoxSupp);
			this->Main->Controls->Add(this->Actualiser1);
			this->Main->Controls->Add(this->Aff);
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->Options);
			this->Main->Location = System::Drawing::Point(12, 74);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1228, 537);
			this->Main->TabIndex = 1;
			this->Main->TabStop = false;
			// 
			// Supp
			// 
			this->Supp->Location = System::Drawing::Point(938, 466);
			this->Supp->Name = L"Supp";
			this->Supp->Size = System::Drawing::Size(114, 49);
			this->Supp->TabIndex = 17;
			this->Supp->Text = L"Supprimer";
			this->Supp->UseVisualStyleBackColor = true;
			this->Supp->Click += gcnew System::EventHandler(this, &Gestion_Client::Supp_Click);
			// 
			// Actualiser4
			// 
			this->Actualiser4->Location = System::Drawing::Point(1017, 340);
			this->Actualiser4->Name = L"Actualiser4";
			this->Actualiser4->Size = System::Drawing::Size(101, 48);
			this->Actualiser4->TabIndex = 16;
			this->Actualiser4->Text = L"Actualiser";
			this->Actualiser4->UseVisualStyleBackColor = true;
			this->Actualiser4->Click += gcnew System::EventHandler(this, &Gestion_Client::Actualiser4_Click);
			// 
			// Modif
			// 
			this->Modif->Location = System::Drawing::Point(938, 466);
			this->Modif->Name = L"Modif";
			this->Modif->Size = System::Drawing::Size(114, 49);
			this->Modif->TabIndex = 15;
			this->Modif->Text = L"Modifier";
			this->Modif->UseVisualStyleBackColor = true;
			this->Modif->Click += gcnew System::EventHandler(this, &Gestion_Client::Modif_Click);
			// 
			// Actualiser3
			// 
			this->Actualiser3->Location = System::Drawing::Point(1017, 340);
			this->Actualiser3->Name = L"Actualiser3";
			this->Actualiser3->Size = System::Drawing::Size(101, 48);
			this->Actualiser3->TabIndex = 14;
			this->Actualiser3->Text = L"Actualiser";
			this->Actualiser3->UseVisualStyleBackColor = true;
			this->Actualiser3->Click += gcnew System::EventHandler(this, &Gestion_Client::Actualiser3_Click);
			// 
			// Aj
			// 
			this->Aj->Location = System::Drawing::Point(938, 466);
			this->Aj->Name = L"Aj";
			this->Aj->Size = System::Drawing::Size(114, 49);
			this->Aj->TabIndex = 13;
			this->Aj->Text = L"Ajouter";
			this->Aj->UseVisualStyleBackColor = true;
			this->Aj->Click += gcnew System::EventHandler(this, &Gestion_Client::ButtonAj_Click);
			// 
			// Actualiser2
			// 
			this->Actualiser2->Location = System::Drawing::Point(1017, 340);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(101, 48);
			this->Actualiser2->TabIndex = 13;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			this->Actualiser2->Click += gcnew System::EventHandler(this, &Gestion_Client::Actualiser2_Click);
			// 
			// BoxAj
			// 
			this->BoxAj->Controls->Add(this->label9);
			this->BoxAj->Controls->Add(this->label8);
			this->BoxAj->Controls->Add(this->label7);
			this->BoxAj->Controls->Add(this->label6);
			this->BoxAj->Controls->Add(this->label5);
			this->BoxAj->Controls->Add(this->label4);
			this->BoxAj->Controls->Add(this->textBox8);
			this->BoxAj->Controls->Add(this->textBox7);
			this->BoxAj->Controls->Add(this->textBox6);
			this->BoxAj->Controls->Add(this->textBox5);
			this->BoxAj->Controls->Add(this->textBox4);
			this->BoxAj->Controls->Add(this->textBox3);
			this->BoxAj->Controls->Add(this->dataAj);
			this->BoxAj->Location = System::Drawing::Point(0, 0);
			this->BoxAj->Name = L"BoxAj";
			this->BoxAj->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->BoxAj->Size = System::Drawing::Size(908, 531);
			this->BoxAj->TabIndex = 5;
			this->BoxAj->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(626, 435);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 17);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Adresse de facturation :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(295, 435);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Adresse de livraison :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Date du premier achat :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(623, 343);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Date de naissance :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(295, 343);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Prénom :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 343);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nom :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(295, 479);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(145, 22);
			this->textBox8->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 475);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(139, 22);
			this->textBox7->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(623, 479);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(145, 22);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(623, 385);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(145, 22);
			this->textBox5->TabIndex = 3;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gestion_Client::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(295, 385);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(145, 22);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 385);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(139, 22);
			this->textBox3->TabIndex = 1;
			// 
			// dataAj
			// 
			this->dataAj->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAj->Location = System::Drawing::Point(6, 14);
			this->dataAj->Name = L"dataAj";
			this->dataAj->RowHeadersWidth = 51;
			this->dataAj->RowTemplate->Height = 24;
			this->dataAj->Size = System::Drawing::Size(902, 303);
			this->dataAj->TabIndex = 0;
			// 
			// BoxAff
			// 
			this->BoxAff->Controls->Add(this->label3);
			this->BoxAff->Controls->Add(this->textBox2);
			this->BoxAff->Controls->Add(this->label2);
			this->BoxAff->Controls->Add(this->textBox1);
			this->BoxAff->Controls->Add(this->dataAff);
			this->BoxAff->Location = System::Drawing::Point(6, 14);
			this->BoxAff->Name = L"BoxAff";
			this->BoxAff->Size = System::Drawing::Size(902, 517);
			this->BoxAff->TabIndex = 4;
			this->BoxAff->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(261, 314);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prénom :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 352);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(6, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 352);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 22);
			this->textBox1->TabIndex = 1;
			// 
			// dataAff
			// 
			this->dataAff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAff->Location = System::Drawing::Point(-6, 0);
			this->dataAff->Name = L"dataAff";
			this->dataAff->RowHeadersWidth = 51;
			this->dataAff->RowTemplate->Height = 24;
			this->dataAff->Size = System::Drawing::Size(898, 299);
			this->dataAff->TabIndex = 0;
			// 
			// BoxSupp
			// 
			this->BoxSupp->Controls->Add(this->label23);
			this->BoxSupp->Controls->Add(this->textBox22);
			this->BoxSupp->Controls->Add(this->Voir2);
			this->BoxSupp->Controls->Add(this->label17);
			this->BoxSupp->Controls->Add(this->label18);
			this->BoxSupp->Controls->Add(this->label19);
			this->BoxSupp->Controls->Add(this->label20);
			this->BoxSupp->Controls->Add(this->label21);
			this->BoxSupp->Controls->Add(this->label22);
			this->BoxSupp->Controls->Add(this->textBox16);
			this->BoxSupp->Controls->Add(this->textBox17);
			this->BoxSupp->Controls->Add(this->textBox18);
			this->BoxSupp->Controls->Add(this->textBox19);
			this->BoxSupp->Controls->Add(this->textBox20);
			this->BoxSupp->Controls->Add(this->textBox21);
			this->BoxSupp->Controls->Add(this->dataSupp);
			this->BoxSupp->Location = System::Drawing::Point(0, 0);
			this->BoxSupp->Name = L"BoxSupp";
			this->BoxSupp->Size = System::Drawing::Size(908, 531);
			this->BoxSupp->TabIndex = 28;
			this->BoxSupp->TabStop = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(811, 360);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 17);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Id";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(814, 394);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(54, 22);
			this->textBox22->TabIndex = 38;
			// 
			// Voir2
			// 
			this->Voir2->Location = System::Drawing::Point(814, 438);
			this->Voir2->Name = L"Voir2";
			this->Voir2->Size = System::Drawing::Size(75, 68);
			this->Voir2->TabIndex = 37;
			this->Voir2->Text = L"Voir";
			this->Voir2->UseVisualStyleBackColor = true;
			this->Voir2->Click += gcnew System::EventHandler(this, &Gestion_Client::Voir2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(627, 444);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(159, 17);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Adresse de facturation :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(296, 444);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(144, 17);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Adresse de livraison :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 444);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(157, 17);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Date du premier achat :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(624, 352);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(134, 17);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Date de naissance :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(296, 352);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(65, 17);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Prénom :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(13, 352);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 17);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Nom :";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(296, 488);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(145, 22);
			this->textBox16->TabIndex = 30;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(13, 484);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(139, 22);
			this->textBox17->TabIndex = 29;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(624, 488);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(145, 22);
			this->textBox18->TabIndex = 28;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(624, 394);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(145, 22);
			this->textBox19->TabIndex = 27;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(296, 394);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(145, 22);
			this->textBox20->TabIndex = 26;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(13, 394);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(139, 22);
			this->textBox21->TabIndex = 25;
			// 
			// dataSupp
			// 
			this->dataSupp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataSupp->Location = System::Drawing::Point(6, 14);
			this->dataSupp->Name = L"dataSupp";
			this->dataSupp->RowHeadersWidth = 51;
			this->dataSupp->RowTemplate->Height = 24;
			this->dataSupp->Size = System::Drawing::Size(902, 311);
			this->dataSupp->TabIndex = 0;
			// 
			// Actualiser1
			// 
			this->Actualiser1->Location = System::Drawing::Point(1017, 340);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(101, 48);
			this->Actualiser1->TabIndex = 3;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &Gestion_Client::Actualiser1_Click);
			// 
			// Aff
			// 
			this->Aff->Location = System::Drawing::Point(938, 466);
			this->Aff->Name = L"Aff";
			this->Aff->Size = System::Drawing::Size(114, 49);
			this->Aff->TabIndex = 2;
			this->Aff->Text = L"Afficher";
			this->Aff->UseVisualStyleBackColor = true;
			this->Aff->Click += gcnew System::EventHandler(this, &Gestion_Client::Aff_Click);
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1086, 466);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(114, 49);
			this->Annuler->TabIndex = 1;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Gestion_Client::Annuler_Click);
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
			this->Options->TabIndex = 0;
			this->Options->TabStop = false;
			this->Options->Text = L"Choisissez votre action :";
			// 
			// Supprimer
			// 
			this->Supprimer->AutoSize = true;
			this->Supprimer->Location = System::Drawing::Point(19, 234);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(119, 28);
			this->Supprimer->TabIndex = 3;
			this->Supprimer->TabStop = true;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Client::Supprimer_CheckedChanged);
			// 
			// Modifier
			// 
			this->Modifier->AutoSize = true;
			this->Modifier->Location = System::Drawing::Point(19, 167);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(98, 28);
			this->Modifier->TabIndex = 2;
			this->Modifier->TabStop = true;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Client::Modifier_CheckedChanged);
			// 
			// Ajouter
			// 
			this->Ajouter->AutoSize = true;
			this->Ajouter->Location = System::Drawing::Point(19, 97);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(91, 28);
			this->Ajouter->TabIndex = 1;
			this->Ajouter->TabStop = true;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Client::Ajouter_CheckedChanged);
			// 
			// Afficher
			// 
			this->Afficher->AutoSize = true;
			this->Afficher->Location = System::Drawing::Point(19, 36);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(94, 28);
			this->Afficher->TabIndex = 0;
			this->Afficher->TabStop = true;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			this->Afficher->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Client::Afficher_CheckedChanged);
			// 
			// BoxModif
			// 
			this->BoxModif->Controls->Add(this->label16);
			this->BoxModif->Controls->Add(this->textBox15);
			this->BoxModif->Controls->Add(this->Voir);
			this->BoxModif->Controls->Add(this->label10);
			this->BoxModif->Controls->Add(this->label11);
			this->BoxModif->Controls->Add(this->label12);
			this->BoxModif->Controls->Add(this->label13);
			this->BoxModif->Controls->Add(this->label14);
			this->BoxModif->Controls->Add(this->label15);
			this->BoxModif->Controls->Add(this->textBox9);
			this->BoxModif->Controls->Add(this->textBox10);
			this->BoxModif->Controls->Add(this->textBox11);
			this->BoxModif->Controls->Add(this->textBox12);
			this->BoxModif->Controls->Add(this->textBox13);
			this->BoxModif->Controls->Add(this->textBox14);
			this->BoxModif->Controls->Add(this->dataModif);
			this->BoxModif->Location = System::Drawing::Point(12, 74);
			this->BoxModif->Name = L"BoxModif";
			this->BoxModif->Size = System::Drawing::Size(908, 531);
			this->BoxModif->TabIndex = 13;
			this->BoxModif->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(823, 359);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 17);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Id";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(823, 402);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(66, 22);
			this->textBox15->TabIndex = 26;
			// 
			// Voir
			// 
			this->Voir->Location = System::Drawing::Point(823, 461);
			this->Voir->Name = L"Voir";
			this->Voir->Size = System::Drawing::Size(75, 50);
			this->Voir->TabIndex = 25;
			this->Voir->Text = L"Voir";
			this->Voir->UseVisualStyleBackColor = true;
			this->Voir->Click += gcnew System::EventHandler(this, &Gestion_Client::Voir_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(627, 452);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Adresse de facturation :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(296, 452);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(144, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Adresse de livraison :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 452);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(157, 17);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Date du premier achat :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(624, 360);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(134, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Date de naissance :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(296, 360);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 17);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Prénom :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 360);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Nom :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(296, 496);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(145, 22);
			this->textBox9->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(13, 492);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(139, 22);
			this->textBox10->TabIndex = 17;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(624, 496);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(145, 22);
			this->textBox11->TabIndex = 16;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(624, 402);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(145, 22);
			this->textBox12->TabIndex = 15;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(296, 402);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(145, 22);
			this->textBox13->TabIndex = 14;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(13, 402);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(139, 22);
			this->textBox14->TabIndex = 13;
			// 
			// dataModif
			// 
			this->dataModif->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataModif->Location = System::Drawing::Point(12, 14);
			this->dataModif->Name = L"dataModif";
			this->dataModif->RowHeadersWidth = 51;
			this->dataModif->RowTemplate->Height = 24;
			this->dataModif->Size = System::Drawing::Size(896, 326);
			this->dataModif->TabIndex = 0;
			// 
			// Gestion_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1276, 623);
			this->Controls->Add(this->BoxModif);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1294, 670);
			this->MinimumSize = System::Drawing::Size(1294, 670);
			this->Name = L"Gestion_Client";
			this->Text = L"Gestion_Client";
			this->Load += gcnew System::EventHandler(this, &Gestion_Client::Gestion_Client_Load);
			this->Main->ResumeLayout(false);
			this->BoxAj->ResumeLayout(false);
			this->BoxAj->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAj))->EndInit();
			this->BoxAff->ResumeLayout(false);
			this->BoxAff->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->EndInit();
			this->BoxSupp->ResumeLayout(false);
			this->BoxSupp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->EndInit();
			this->Options->ResumeLayout(false);
			this->Options->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			this->BoxModif->ResumeLayout(false);
			this->BoxModif->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Gestion_Client_Load(System::Object^ sender, System::EventArgs^ e) {
		Aff->Hide();
		Aj->Hide();
		Modif->Hide();
		Voir->Hide();
		Voir2->Hide();
		Actualiser1->Hide();
		Actualiser2->Hide();
		Actualiser3->Hide();
		BoxAff->Hide();
		BoxAj->Hide();
		BoxModif->Hide();
		BoxSupp->Hide();
	}


	private: System::Void Actualiser1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataAff->DataSource = bindingSource1;
	}

	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataAj->DataSource = bindingSource2;
	}
	private: System::Void Actualiser3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource3->DataSource = data;
		dataModif->DataSource = bindingSource3;
	}
	private: System::Void Actualiser4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client", conDataBase);
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
	private: System::Void Aff_Click(System::Object^ sender, System::EventArgs^ e) {
		if (V == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ nom = textBox1->Text;
				String^ prenom = textBox2->Text;
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Client WHERE Nom_Client = '" + nom + "' AND Prenom_Client = '" + prenom + "' ", conDataBase);
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();


				while (myReader->Read()) {
					textBox1->Text = Convert::ToString(myReader->GetString(1));
					textBox2->Text = Convert::ToString(myReader->GetString(2));
				}

				myReader->Close();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client WHERE Nom_Client = '" + nom + "' AND Prenom_Client = '" + prenom + "' ", conDataBase);
				DataTable^ data = gcnew DataTable();
				data->Clear();
				adapter->Fill(data);
				bindingSource1->DataSource = data;
				dataAff->DataSource = bindingSource1;
			}
			else {
			}
		}
	}

	private: System::Void ButtonAj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (W == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ nom = textBox3->Text;
				String^ prenom = textBox4->Text;
				String^ adresse_liv = textBox8->Text;
				String^ adresse_fact = textBox6->Text;
				String^ date_anniv = textBox5->Text;
				String^ date_achat = textBox7->Text;


				SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Client (Nom_client,Prenom_client,Date_naissance,Date_premier_achat,Adresse_Facturation,Adresse_Livraison) VALUES('" + nom + "', '" + prenom + "', '" + date_anniv + "', '" + date_achat + "', '" + adresse_fact + "', '" + adresse_liv + "'); ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Client ajouté au serveur !");
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

				String^ nom = textBox14->Text;
				String^ prenom = textBox13->Text;
				String^ adresse_liv = textBox9->Text;
				String^ adresse_fact = textBox11->Text;
				String^ date_anniv = textBox12->Text;
				String^ date_achat = textBox10->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Client SET Nom_client ='" + nom + "',Prenom_client = '" + prenom + "',Date_naissance = '" + date_anniv + "',Date_premier_achat = '" + date_achat + "',Adresse_Facturation = '" + adresse_fact + "',Adresse_Livraison = '" + adresse_liv + "' WHERE N__Client = '" + Int32::Parse(textBox15->Text) + "'; ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
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
	
	private: System::Void Voir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		
		int Id = Int32::Parse(textBox15->Text);


		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Client WHERE (N__Client) = '"+Id+"'", conDataBase);
		SqlDataReader^ myReader;
		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			while (myReader->Read())
			{
				textBox14->Text = myReader->GetString(1);
				textBox13->Text = myReader->GetString(2);
				textBox12->Text = Convert::ToString(myReader->GetDateTime(3));
				textBox10->Text = Convert::ToString(myReader->GetDateTime(4));
				textBox11->Text = myReader->GetString(5);
				textBox9->Text = myReader->GetString(6);
			}
			conDataBase->Close();
			MessageBox::Show("Voici le client !");
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}
			}
			else {
			}
		}
	}

	private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				int Id = Int32::Parse(textBox22->Text);

				SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Client WHERE N__Client ='" + Id + "' ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
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
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				int Id = Int32::Parse(textBox22->Text);


				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Client WHERE (N__Client) = '" + Id + "'", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					while (myReader->Read())
					{
						textBox21->Text = myReader->GetString(1);
						textBox20->Text = myReader->GetString(2);
						textBox19->Text = Convert::ToString(myReader->GetDateTime(3));
						textBox17->Text = Convert::ToString(myReader->GetDateTime(4));
						textBox18->Text = myReader->GetString(5);
						textBox16->Text = myReader->GetString(6);
					}
					conDataBase->Close();
					MessageBox::Show("Voici le client !");
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {
			}
		}
	}
private: System::Void Afficher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	V = 1;
	Aff->Show();
	Aj->Hide();
	Modif->Hide();
	Voir->Hide();
	Actualiser1->Show();
	Actualiser2->Hide();
	Actualiser3->Hide();
	BoxAff->Show();
	BoxAj->Hide();
	BoxModif->Hide();
	BoxSupp->Hide();
	Actualiser4->Hide();
	Supp->Hide();
	Voir2->Hide();
}
private: System::Void Ajouter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	W = 1;
	Aj->Show();
	Aff->Hide();
	Modif->Hide();
	Voir->Hide();
	Actualiser1->Hide();
	Actualiser2->Show();
	Actualiser3->Hide();
	BoxAj->Show();
	BoxAff->Hide();
	BoxModif->Hide();
	BoxSupp->Hide();
	Actualiser4->Hide();
	Supp->Hide();
	Voir2->Hide();
}
private: System::Void Modifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	X = 1;
	Modif->Show();
	Voir->Show();
	BoxModif->Show();
	Actualiser3->Show();
	Aj->Hide();
	Aff->Hide();
	Actualiser1->Hide();
	Actualiser2->Hide();
	BoxAj->Hide();
	BoxAff->Hide();
	BoxSupp->Hide();
	Actualiser4->Hide();
	Supp->Hide();
	Voir2->Hide();
}
private: System::Void Supprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = 1;
	BoxSupp->Show();
	Actualiser4->Show();
	Supp->Show();
	Voir2->Show();
	Modif->Hide();
	Voir->Hide();
	BoxModif->Hide();
	Actualiser3->Hide();
	Aj->Hide();
	Aff->Hide();
	Actualiser1->Hide();
	Actualiser2->Hide();
	BoxAj->Hide();
	BoxAff->Hide();
}



private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}











};
}
