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
	/// Description résumée de Gestion_Commande
	/// </summary>
	public ref class Gestion_Commande : public System::Windows::Forms::Form
	{
	public:
		int V, W, X, Y;
	private: System::Windows::Forms::Button^ Vider1;
	public:
	private: System::Windows::Forms::Button^ Actualiser1;
	private: System::Windows::Forms::DataGridView^ dataAff;



	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ Ajj;
	private: System::Windows::Forms::Button^ Vider2;
	private: System::Windows::Forms::Button^ Actualiser2;
	private: System::Windows::Forms::GroupBox^ boxAjj;
	private: System::Windows::Forms::DataGridView^ dataAjj;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ OuiAjj;
	private: System::Windows::Forms::RadioButton^ NonAjj;
	private: System::Windows::Forms::Button^ AjjArticle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ Modif;
	private: System::Windows::Forms::Button^ Vider3;
	private: System::Windows::Forms::Button^ Actualiser3;
	private: System::Windows::Forms::GroupBox^ boxModif;
	private: System::Windows::Forms::DataGridView^ dataModif;
	private: System::Windows::Forms::BindingSource^ bindingSource3;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ Voir1;
	private: System::Windows::Forms::Button^ Supp;
	private: System::Windows::Forms::Button^ Vider4;
	private: System::Windows::Forms::Button^ Actualiser4;
	private: System::Windows::Forms::GroupBox^ boxSupp;
	private: System::Windows::Forms::DataGridView^ dataSupp;

	private: System::Windows::Forms::BindingSource^ bindingSource4;


	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Button^ Supp2;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::GroupBox^ boxAff;
	public:

	public:
		Gestion_Commande(void)
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
		~Gestion_Commande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Main;
	private: System::Windows::Forms::Button^ Aff;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::GroupBox^ Options;
	private: System::Windows::Forms::RadioButton^ Supprimer;
	private: System::Windows::Forms::RadioButton^ Modifier;
	private: System::Windows::Forms::RadioButton^ Ajouter;
	private: System::Windows::Forms::RadioButton^ Afficher;
	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Commande::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Vider4 = (gcnew System::Windows::Forms::Button());
			this->Actualiser4 = (gcnew System::Windows::Forms::Button());
			this->Modif = (gcnew System::Windows::Forms::Button());
			this->Vider3 = (gcnew System::Windows::Forms::Button());
			this->Actualiser3 = (gcnew System::Windows::Forms::Button());
			this->Ajj = (gcnew System::Windows::Forms::Button());
			this->Vider2 = (gcnew System::Windows::Forms::Button());
			this->Actualiser2 = (gcnew System::Windows::Forms::Button());
			this->Vider1 = (gcnew System::Windows::Forms::Button());
			this->Actualiser1 = (gcnew System::Windows::Forms::Button());
			this->boxAff = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataAff = (gcnew System::Windows::Forms::DataGridView());
			this->boxAjj = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->OuiAjj = (gcnew System::Windows::Forms::RadioButton());
			this->NonAjj = (gcnew System::Windows::Forms::RadioButton());
			this->AjjArticle = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dataAjj = (gcnew System::Windows::Forms::DataGridView());
			this->boxSupp = (gcnew System::Windows::Forms::GroupBox());
			this->Supp2 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Supp = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->dataSupp = (gcnew System::Windows::Forms::DataGridView());
			this->Options = (gcnew System::Windows::Forms::GroupBox());
			this->Supprimer = (gcnew System::Windows::Forms::RadioButton());
			this->Modifier = (gcnew System::Windows::Forms::RadioButton());
			this->Ajouter = (gcnew System::Windows::Forms::RadioButton());
			this->Afficher = (gcnew System::Windows::Forms::RadioButton());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->Aff = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->boxModif = (gcnew System::Windows::Forms::GroupBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->Voir1 = (gcnew System::Windows::Forms::Button());
			this->dataModif = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource4 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->Main->SuspendLayout();
			this->boxAff->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->BeginInit();
			this->boxAjj->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjj))->BeginInit();
			this->boxSupp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->BeginInit();
			this->Options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->boxModif->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veuillez saisir les informations requises :";
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Vider4);
			this->Main->Controls->Add(this->Actualiser4);
			this->Main->Controls->Add(this->Modif);
			this->Main->Controls->Add(this->Vider3);
			this->Main->Controls->Add(this->Actualiser3);
			this->Main->Controls->Add(this->Ajj);
			this->Main->Controls->Add(this->Vider2);
			this->Main->Controls->Add(this->Actualiser2);
			this->Main->Controls->Add(this->Vider1);
			this->Main->Controls->Add(this->Actualiser1);
			this->Main->Controls->Add(this->boxAff);
			this->Main->Controls->Add(this->boxAjj);
			this->Main->Controls->Add(this->boxSupp);
			this->Main->Controls->Add(this->Options);
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->Aff);
			this->Main->Location = System::Drawing::Point(12, 80);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1267, 589);
			this->Main->TabIndex = 1;
			this->Main->TabStop = false;
			this->Main->Enter += gcnew System::EventHandler(this, &Gestion_Commande::Main_Enter);
			// 
			// Vider4
			// 
			this->Vider4->Location = System::Drawing::Point(944, 394);
			this->Vider4->Name = L"Vider4";
			this->Vider4->Size = System::Drawing::Size(124, 49);
			this->Vider4->TabIndex = 34;
			this->Vider4->Text = L"Vider";
			this->Vider4->UseVisualStyleBackColor = true;
			this->Vider4->Click += gcnew System::EventHandler(this, &Gestion_Commande::Vider4_Click);
			// 
			// Actualiser4
			// 
			this->Actualiser4->Location = System::Drawing::Point(1109, 394);
			this->Actualiser4->Name = L"Actualiser4";
			this->Actualiser4->Size = System::Drawing::Size(125, 47);
			this->Actualiser4->TabIndex = 33;
			this->Actualiser4->Text = L"Actualiser";
			this->Actualiser4->UseVisualStyleBackColor = true;
			this->Actualiser4->Click += gcnew System::EventHandler(this, &Gestion_Commande::Actualiser4_Click);
			// 
			// Modif
			// 
			this->Modif->Location = System::Drawing::Point(944, 523);
			this->Modif->Name = L"Modif";
			this->Modif->Size = System::Drawing::Size(124, 49);
			this->Modif->TabIndex = 32;
			this->Modif->Text = L"Modifier";
			this->Modif->UseVisualStyleBackColor = true;
			this->Modif->Click += gcnew System::EventHandler(this, &Gestion_Commande::Modif_Click);
			// 
			// Vider3
			// 
			this->Vider3->Location = System::Drawing::Point(944, 394);
			this->Vider3->Name = L"Vider3";
			this->Vider3->Size = System::Drawing::Size(124, 48);
			this->Vider3->TabIndex = 31;
			this->Vider3->Text = L"Vider";
			this->Vider3->UseVisualStyleBackColor = true;
			this->Vider3->Click += gcnew System::EventHandler(this, &Gestion_Commande::Vider3_Click);
			// 
			// Actualiser3
			// 
			this->Actualiser3->Location = System::Drawing::Point(1109, 394);
			this->Actualiser3->Name = L"Actualiser3";
			this->Actualiser3->Size = System::Drawing::Size(125, 47);
			this->Actualiser3->TabIndex = 30;
			this->Actualiser3->Text = L"Actualiser";
			this->Actualiser3->UseVisualStyleBackColor = true;
			this->Actualiser3->Click += gcnew System::EventHandler(this, &Gestion_Commande::Actualiser3_Click);
			// 
			// Ajj
			// 
			this->Ajj->Location = System::Drawing::Point(944, 523);
			this->Ajj->Name = L"Ajj";
			this->Ajj->Size = System::Drawing::Size(124, 49);
			this->Ajj->TabIndex = 28;
			this->Ajj->Text = L"Ajouter";
			this->Ajj->UseVisualStyleBackColor = true;
			this->Ajj->Click += gcnew System::EventHandler(this, &Gestion_Commande::Ajj_Click);
			// 
			// Vider2
			// 
			this->Vider2->Location = System::Drawing::Point(944, 394);
			this->Vider2->Name = L"Vider2";
			this->Vider2->Size = System::Drawing::Size(124, 48);
			this->Vider2->TabIndex = 27;
			this->Vider2->Text = L"Vider";
			this->Vider2->UseVisualStyleBackColor = true;
			this->Vider2->Click += gcnew System::EventHandler(this, &Gestion_Commande::Vider2_Click);
			// 
			// Actualiser2
			// 
			this->Actualiser2->Location = System::Drawing::Point(1109, 394);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(125, 48);
			this->Actualiser2->TabIndex = 26;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			this->Actualiser2->Click += gcnew System::EventHandler(this, &Gestion_Commande::Actualiser2_Click);
			// 
			// Vider1
			// 
			this->Vider1->Location = System::Drawing::Point(943, 393);
			this->Vider1->Name = L"Vider1";
			this->Vider1->Size = System::Drawing::Size(125, 49);
			this->Vider1->TabIndex = 25;
			this->Vider1->Text = L"Vider";
			this->Vider1->UseVisualStyleBackColor = true;
			this->Vider1->Click += gcnew System::EventHandler(this, &Gestion_Commande::Vider1_Click);
			// 
			// Actualiser1
			// 
			this->Actualiser1->Location = System::Drawing::Point(1109, 393);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(125, 49);
			this->Actualiser1->TabIndex = 24;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &Gestion_Commande::Actualiser1_Click);
			// 
			// boxAff
			// 
			this->boxAff->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->boxAff->Controls->Add(this->textBox3);
			this->boxAff->Controls->Add(this->label4);
			this->boxAff->Controls->Add(this->dataAff);
			this->boxAff->Location = System::Drawing::Point(0, 0);
			this->boxAff->Name = L"boxAff";
			this->boxAff->Size = System::Drawing::Size(908, 572);
			this->boxAff->TabIndex = 23;
			this->boxAff->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 394);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 358);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Réference :";
			// 
			// dataAff
			// 
			this->dataAff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAff->Location = System::Drawing::Point(17, 12);
			this->dataAff->Name = L"dataAff";
			this->dataAff->RowHeadersWidth = 51;
			this->dataAff->RowTemplate->Height = 24;
			this->dataAff->Size = System::Drawing::Size(891, 315);
			this->dataAff->TabIndex = 0;
			// 
			// boxAjj
			// 
			this->boxAjj->Controls->Add(this->label7);
			this->boxAjj->Controls->Add(this->textBox6);
			this->boxAjj->Controls->Add(this->OuiAjj);
			this->boxAjj->Controls->Add(this->NonAjj);
			this->boxAjj->Controls->Add(this->AjjArticle);
			this->boxAjj->Controls->Add(this->textBox4);
			this->boxAjj->Controls->Add(this->label5);
			this->boxAjj->Controls->Add(this->textBox1);
			this->boxAjj->Controls->Add(this->label2);
			this->boxAjj->Controls->Add(this->label14);
			this->boxAjj->Controls->Add(this->label13);
			this->boxAjj->Controls->Add(this->label3);
			this->boxAjj->Controls->Add(this->textBox13);
			this->boxAjj->Controls->Add(this->textBox12);
			this->boxAjj->Controls->Add(this->textBox2);
			this->boxAjj->Controls->Add(this->textBox11);
			this->boxAjj->Controls->Add(this->textBox10);
			this->boxAjj->Controls->Add(this->textBox9);
			this->boxAjj->Controls->Add(this->textBox7);
			this->boxAjj->Controls->Add(this->textBox5);
			this->boxAjj->Controls->Add(this->label12);
			this->boxAjj->Controls->Add(this->label11);
			this->boxAjj->Controls->Add(this->label10);
			this->boxAjj->Controls->Add(this->label8);
			this->boxAjj->Controls->Add(this->label6);
			this->boxAjj->Controls->Add(this->textBox14);
			this->boxAjj->Controls->Add(this->textBox8);
			this->boxAjj->Controls->Add(this->dataAjj);
			this->boxAjj->Location = System::Drawing::Point(0, 0);
			this->boxAjj->Name = L"boxAjj";
			this->boxAjj->Size = System::Drawing::Size(908, 566);
			this->boxAjj->TabIndex = 29;
			this->boxAjj->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(756, 503);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 17);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Ref de la commande :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(769, 536);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(81, 22);
			this->textBox6->TabIndex = 52;
			// 
			// OuiAjj
			// 
			this->OuiAjj->AutoSize = true;
			this->OuiAjj->Location = System::Drawing::Point(614, 510);
			this->OuiAjj->Name = L"OuiAjj";
			this->OuiAjj->Size = System::Drawing::Size(51, 21);
			this->OuiAjj->TabIndex = 51;
			this->OuiAjj->TabStop = true;
			this->OuiAjj->Text = L"Oui";
			this->OuiAjj->UseVisualStyleBackColor = true;
			this->OuiAjj->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::OuiAjj_CheckedChanged);
			// 
			// NonAjj
			// 
			this->NonAjj->AutoSize = true;
			this->NonAjj->Location = System::Drawing::Point(614, 537);
			this->NonAjj->Name = L"NonAjj";
			this->NonAjj->Size = System::Drawing::Size(55, 21);
			this->NonAjj->TabIndex = 50;
			this->NonAjj->TabStop = true;
			this->NonAjj->Text = L"Non";
			this->NonAjj->UseVisualStyleBackColor = true;
			this->NonAjj->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::NonAjj_CheckedChanged);
			// 
			// AjjArticle
			// 
			this->AjjArticle->Location = System::Drawing::Point(675, 503);
			this->AjjArticle->Name = L"AjjArticle";
			this->AjjArticle->Size = System::Drawing::Size(75, 59);
			this->AjjArticle->TabIndex = 49;
			this->AjjArticle->Text = L"Ajouter article";
			this->AjjArticle->UseVisualStyleBackColor = true;
			this->AjjArticle->Click += gcnew System::EventHandler(this, &Gestion_Commande::AjjArticle_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(480, 365);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 48;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(477, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 17);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Couleur du produit :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(322, 365);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(98, 22);
			this->textBox1->TabIndex = 46;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(319, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Nom du produit :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(477, 424);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 17);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Date paiement";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(319, 424);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 17);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Date de solde";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(163, 419);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 17);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Date d\'emission :";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(480, 461);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 39;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(320, 461);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 38;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 461);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 37;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(638, 461);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(137, 22);
			this->textBox11->TabIndex = 36;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(17, 461);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 35;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(166, 365);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(17, 365);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(638, 365);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 30;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(635, 425);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 17);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Moyen de paiement :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 419);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Date livraison :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(163, 330);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Prénom client :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(638, 330);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Quantité :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 330);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 17);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Nom client:";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(991, 329);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(28, 22);
			this->textBox14->TabIndex = 30;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(934, 329);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(34, 22);
			this->textBox8->TabIndex = 29;
			// 
			// dataAjj
			// 
			this->dataAjj->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAjj->Location = System::Drawing::Point(17, 12);
			this->dataAjj->Name = L"dataAjj";
			this->dataAjj->RowHeadersWidth = 51;
			this->dataAjj->RowTemplate->Height = 24;
			this->dataAjj->Size = System::Drawing::Size(891, 305);
			this->dataAjj->TabIndex = 0;
			// 
			// boxSupp
			// 
			this->boxSupp->Controls->Add(this->Supp2);
			this->boxSupp->Controls->Add(this->label31);
			this->boxSupp->Controls->Add(this->label30);
			this->boxSupp->Controls->Add(this->textBox29);
			this->boxSupp->Controls->Add(this->label29);
			this->boxSupp->Controls->Add(this->label28);
			this->boxSupp->Controls->Add(this->Supp);
			this->boxSupp->Controls->Add(this->label27);
			this->boxSupp->Controls->Add(this->label16);
			this->boxSupp->Controls->Add(this->textBox28);
			this->boxSupp->Controls->Add(this->textBox17);
			this->boxSupp->Controls->Add(this->dataSupp);
			this->boxSupp->Location = System::Drawing::Point(0, 0);
			this->boxSupp->Name = L"boxSupp";
			this->boxSupp->Size = System::Drawing::Size(908, 566);
			this->boxSupp->TabIndex = 69;
			this->boxSupp->TabStop = false;
			// 
			// Supp2
			// 
			this->Supp2->Location = System::Drawing::Point(727, 367);
			this->Supp2->Name = L"Supp2";
			this->Supp2->Size = System::Drawing::Size(121, 49);
			this->Supp2->TabIndex = 41;
			this->Supp2->Text = L"Supprimer";
			this->Supp2->UseVisualStyleBackColor = true;
			this->Supp2->Click += gcnew System::EventHandler(this, &Gestion_Commande::Supp2_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(13, 329);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(182, 17);
			this->label31->TabIndex = 40;
			this->label31->Text = L"Supprimer une commande :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(13, 367);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(111, 17);
			this->label30->TabIndex = 39;
			this->label30->Text = L"Ref commande :";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(16, 396);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 22);
			this->textBox29->TabIndex = 38;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(16, 461);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(143, 17);
			this->label29->TabIndex = 37;
			this->label29->Text = L"Supprimer un article :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(17, 440);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(888, 17);
			this->label28->TabIndex = 36;
			this->label28->Text = L"---------------------------------------------------------------------------------"
				L"--------------------------------------------------------------------------------"
				L"---------------";
			// 
			// Supp
			// 
			this->Supp->Location = System::Drawing::Point(728, 503);
			this->Supp->Name = L"Supp";
			this->Supp->Size = System::Drawing::Size(124, 49);
			this->Supp->TabIndex = 35;
			this->Supp->Text = L"Supprimer";
			this->Supp->UseVisualStyleBackColor = true;
			this->Supp->Click += gcnew System::EventHandler(this, &Gestion_Commande::Supp_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(155, 503);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(80, 17);
			this->label27->TabIndex = 4;
			this->label27->Text = L"Ref article :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(14, 503);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 17);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Ref commande :";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(158, 536);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 22);
			this->textBox28->TabIndex = 2;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(16, 536);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 1;
			// 
			// dataSupp
			// 
			this->dataSupp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataSupp->Location = System::Drawing::Point(17, 12);
			this->dataSupp->Name = L"dataSupp";
			this->dataSupp->RowHeadersWidth = 51;
			this->dataSupp->RowTemplate->Height = 24;
			this->dataSupp->Size = System::Drawing::Size(885, 305);
			this->dataSupp->TabIndex = 0;
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
			this->Options->TabIndex = 15;
			this->Options->TabStop = false;
			this->Options->Text = L"Choisissez votre action :";
			// 
			// Supprimer
			// 
			this->Supprimer->AutoSize = true;
			this->Supprimer->Location = System::Drawing::Point(6, 210);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(119, 28);
			this->Supprimer->TabIndex = 3;
			this->Supprimer->TabStop = true;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::Supprimer_CheckedChanged);
			// 
			// Modifier
			// 
			this->Modifier->AutoSize = true;
			this->Modifier->Location = System::Drawing::Point(7, 152);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(98, 28);
			this->Modifier->TabIndex = 2;
			this->Modifier->TabStop = true;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::Modifier_CheckedChanged);
			// 
			// Ajouter
			// 
			this->Ajouter->AutoSize = true;
			this->Ajouter->Location = System::Drawing::Point(7, 94);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(91, 28);
			this->Ajouter->TabIndex = 1;
			this->Ajouter->TabStop = true;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::Ajouter_CheckedChanged);
			// 
			// Afficher
			// 
			this->Afficher->AutoSize = true;
			this->Afficher->Location = System::Drawing::Point(7, 40);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(94, 28);
			this->Afficher->TabIndex = 0;
			this->Afficher->TabStop = true;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			this->Afficher->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Commande::Afficher_CheckedChanged);
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1109, 523);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(125, 49);
			this->Annuler->TabIndex = 22;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Gestion_Commande::Annuler_Click);
			// 
			// Aff
			// 
			this->Aff->Location = System::Drawing::Point(943, 523);
			this->Aff->Name = L"Aff";
			this->Aff->Size = System::Drawing::Size(125, 49);
			this->Aff->TabIndex = 14;
			this->Aff->Text = L"Afficher";
			this->Aff->UseVisualStyleBackColor = true;
			this->Aff->Click += gcnew System::EventHandler(this, &Gestion_Commande::Aff_Click);
			// 
			// boxModif
			// 
			this->boxModif->Controls->Add(this->textBox18);
			this->boxModif->Controls->Add(this->label17);
			this->boxModif->Controls->Add(this->textBox19);
			this->boxModif->Controls->Add(this->label18);
			this->boxModif->Controls->Add(this->label19);
			this->boxModif->Controls->Add(this->label20);
			this->boxModif->Controls->Add(this->label21);
			this->boxModif->Controls->Add(this->textBox20);
			this->boxModif->Controls->Add(this->textBox21);
			this->boxModif->Controls->Add(this->textBox22);
			this->boxModif->Controls->Add(this->textBox23);
			this->boxModif->Controls->Add(this->textBox24);
			this->boxModif->Controls->Add(this->textBox25);
			this->boxModif->Controls->Add(this->textBox26);
			this->boxModif->Controls->Add(this->textBox27);
			this->boxModif->Controls->Add(this->label22);
			this->boxModif->Controls->Add(this->label23);
			this->boxModif->Controls->Add(this->label24);
			this->boxModif->Controls->Add(this->label25);
			this->boxModif->Controls->Add(this->label26);
			this->boxModif->Controls->Add(this->textBox16);
			this->boxModif->Controls->Add(this->label15);
			this->boxModif->Controls->Add(this->label9);
			this->boxModif->Controls->Add(this->textBox15);
			this->boxModif->Controls->Add(this->Voir1);
			this->boxModif->Controls->Add(this->dataModif);
			this->boxModif->Location = System::Drawing::Point(12, 80);
			this->boxModif->Name = L"boxModif";
			this->boxModif->Size = System::Drawing::Size(908, 572);
			this->boxModif->TabIndex = 29;
			this->boxModif->TabStop = false;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(472, 367);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 68;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(469, 331);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(133, 17);
			this->label17->TabIndex = 67;
			this->label17->Text = L"Couleur du produit :";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(314, 367);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(98, 22);
			this->textBox19->TabIndex = 66;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(311, 331);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(113, 17);
			this->label18->TabIndex = 65;
			this->label18->Text = L"Nom du produit :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(469, 426);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(100, 17);
			this->label19->TabIndex = 64;
			this->label19->Text = L"Date paiement";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(311, 426);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 17);
			this->label20->TabIndex = 63;
			this->label20->Text = L"Date de solde";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(155, 421);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(116, 17);
			this->label21->TabIndex = 62;
			this->label21->Text = L"Date d\'emission :";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(472, 463);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 61;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(312, 463);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 60;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(158, 463);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 59;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(630, 461);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(137, 22);
			this->textBox23->TabIndex = 58;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(9, 463);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 22);
			this->textBox24->TabIndex = 57;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(158, 367);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 22);
			this->textBox25->TabIndex = 56;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(9, 367);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 22);
			this->textBox26->TabIndex = 55;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(630, 367);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 22);
			this->textBox27->TabIndex = 54;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(627, 425);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(140, 17);
			this->label22->TabIndex = 53;
			this->label22->Text = L"Moyen de paiement :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 421);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(102, 17);
			this->label23->TabIndex = 52;
			this->label23->Text = L"Date livraison :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(155, 332);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(102, 17);
			this->label24->TabIndex = 51;
			this->label24->Text = L"Prénom client :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(627, 332);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 17);
			this->label25->TabIndex = 50;
			this->label25->Text = L"Quantité :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 332);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(78, 17);
			this->label26->TabIndex = 49;
			this->label26->Text = L"Nom client:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(728, 537);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(76, 22);
			this->textBox16->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(724, 516);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(86, 17);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Ref l\'article :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(611, 513);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 17);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Ref commande :";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(614, 538);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(76, 22);
			this->textBox15->TabIndex = 2;
			// 
			// Voir1
			// 
			this->Voir1->Location = System::Drawing::Point(828, 506);
			this->Voir1->Name = L"Voir1";
			this->Voir1->Size = System::Drawing::Size(65, 60);
			this->Voir1->TabIndex = 1;
			this->Voir1->Text = L"Voir";
			this->Voir1->UseVisualStyleBackColor = true;
			this->Voir1->Click += gcnew System::EventHandler(this, &Gestion_Commande::Voir1_Click);
			// 
			// dataModif
			// 
			this->dataModif->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataModif->Location = System::Drawing::Point(6, 12);
			this->dataModif->Name = L"dataModif";
			this->dataModif->RowHeadersWidth = 51;
			this->dataModif->RowTemplate->Height = 24;
			this->dataModif->Size = System::Drawing::Size(896, 305);
			this->dataModif->TabIndex = 0;
			// 
			// Gestion_Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1287, 677);
			this->Controls->Add(this->boxModif);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1305, 724);
			this->MinimumSize = System::Drawing::Size(1305, 724);
			this->Name = L"Gestion_Commande";
			this->Text = L"Gestion_Commande";
			this->Main->ResumeLayout(false);
			this->boxAff->ResumeLayout(false);
			this->boxAff->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAff))->EndInit();
			this->boxAjj->ResumeLayout(false);
			this->boxAjj->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjj))->EndInit();
			this->boxSupp->ResumeLayout(false);
			this->boxSupp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->EndInit();
			this->Options->ResumeLayout(false);
			this->Options->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->boxModif->ResumeLayout(false);
			this->boxModif->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Main_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox14->Hide();
		textBox8->Hide();
		textBox6->Hide();
		label7->Hide();
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
	}
	private: System::Void Actualiser1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement,Qt_article, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande WHERE [Commande].N__Client = [Client].N__Client ORDER BY [Commande].Ref_commande", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataAff->DataSource = bindingSource1;
	}
	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement, [Contient].Ref_article,[Contient].Nb_article, Montant_HT, Montant_TVA, Montant_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande,Contient WHERE [Commande].N__Client = [Client].N__Client AND [Commande].Ref_commande = [Contient].Ref_commande ORDER BY [Commande].Ref_commande", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataAjj->DataSource = bindingSource2;
	}
	private: System::Void Actualiser3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement, [Contient].Ref_article,[Contient].Nb_article,Montant_HT, Montant_TVA, Montant_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande,Contient WHERE [Commande].N__Client = [Client].N__Client AND [Commande].Ref_commande = [Contient].Ref_commande ORDER BY [Commande].Ref_commande" , conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource3->DataSource = data;
		dataModif->DataSource = bindingSource3;
	}
	private: System::Void Actualiser4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement, [Contient].Ref_article,[Contient].Nb_article,Montant_HT, Montant_TVA, Montant_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande,Contient WHERE [Commande].N__Client = [Client].N__Client AND [Commande].Ref_commande = [Contient].Ref_commande ORDER BY [Commande].Ref_commande", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource4->DataSource = data;
		dataSupp->DataSource = bindingSource4;
	}
	private: System::Void Vider1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
	}
	private: System::Void Vider2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox13->Text = "";
		textBox9->Text = "";
		textBox10->Text = "";
		textBox11->Text = "";
		textBox12->Text = "";
		textBox14->Text = "";
	}
	private: System::Void Vider3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox15->Text = "";
		textBox16->Text = "";
		textBox26->Text = "";
		textBox25->Text = "";
		textBox19->Text = "";
		textBox18->Text = "";
		textBox22->Text = "";
		textBox21->Text = "";
		textBox24->Text = "";
		textBox20->Text = "";
		textBox27->Text = "";
		textBox23->Text = "";
	}
	private: System::Void Vider4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox17->Text = "";
		textBox28->Text = "";
		textBox29->Text = "";
	}
	private: System::Void Aff_Click(System::Object^ sender, System::EventArgs^ e) {
		if (V == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ ref = textBox3->Text;
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement, [Contient].Ref_article, [Contient].Nb_article, Montant_HT, Montant_TVA, Montant_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande,Contient WHERE [Commande].N__Client = [Client].N__Client AND [Commande].Ref_commande = '" + ref + "' AND [Commande].Ref_commande = [Contient].Ref_commande ORDER BY [Commande].Ref_commande", conDataBase);
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();


				while (myReader->Read()) {
					textBox3->Text = myReader->GetString(0);
				}
				
				myReader->Close();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Ref_commande, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement, [Contient].Ref_article, [Contient].Nb_article, Montant_HT, Montant_TVA, Montant_TTC, Remise,Remise_2, [Commande].N__Client, Nom_client, Prenom_client FROM Client,Commande,Contient WHERE [Commande].N__Client = [Client].N__Client AND [Commande].Ref_commande = [Contient].Ref_commande AND [Commande].Ref_commande = '" + ref + "' ORDER BY [Commande].Ref_commande", conDataBase);
				DataTable^ data = gcnew DataTable();
				data->Clear();
				adapter->Fill(data);
				bindingSource1->DataSource = data;
				dataAff->DataSource = bindingSource1;
				MessageBox::Show("Recherche terminée !", "Warning");
			}
			else {
			}
			}
			else {
			}
		}
	private: System::Void Ajj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (W == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase2 = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase3 = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase4 = gcnew SqlConnection(constring);
				
				String^ nom = textBox7->Text;
				String^ prenom = textBox9->Text;
				String^ nomp = textBox1->Text;
				String^ Couleur = textBox4->Text;
				String^ date_emission = textBox2->Text;
				String^ date_solde = textBox12->Text;
				String^ date_livraison = textBox10->Text;
				String^ date_paiement = textBox13->Text;
				String^ Qt = textBox5->Text;
				String^ moyen_paiement = textBox11->Text;
				
				conDataBase->Open();
				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Adresse_Livraison FROM Client WHERE Nom_client = '" + nom + "' AND Prenom_client = '" + prenom + "'", conDataBase);
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
				while (myReader->Read()) {
					textBox14->Text = myReader->GetString(0);
				}
				myReader->Close();

				
				
				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Ref_commande,12,LEN(Ref_commande) - 11) AS int)),0) FROM Commande", conDataBase);
				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();
				while (myReader1->Read()) {
					textBox8->Text = Convert::ToString(myReader1->GetInt32(0));
				}
				
				
				String^ Inc = textBox8->Text;
				if (textBox8->Text != "") {
					String^ sInc = Inc;
					int iInt = Int32::Parse(sInc);
					iInt++;
					Inc = Convert::ToString(iInt);
				}
				else {
					Inc = "1";
				}
				myReader1->Close();
				
				String^ Liv = textBox14->Text;
				String^ reference = prenom->Substring(0, 2) + nom->Substring(0, 2) + date_emission->Substring(6, 4) + Liv->Substring(0, 3) + Inc;
				

			
				SqlCommand^ cmdDataBase2 = gcnew SqlCommand("INSERT INTO Commande(Ref_commande,Qt_Article, Date_livraison, Date_d_emission,Date_solde,Date_paiement,Moyen_paiement,Montant_total_HT,Montant_total_TVA,Montant_total_TTC,Remise,Remise_2,N__Client) VALUES ('" + reference + "', (SELECT SUM(Nb_article) FROM Contient WHERE Ref_commande = '" + reference + "' ),'" + date_livraison + "', '" + date_emission + "', '" + date_solde + "', '" + date_paiement + "','" + moyen_paiement + "',(SELECT SUM(montant_HT) FROM Contient WHERE Ref_commande = '" + reference + "'),(SELECT SUM(montant_TVA) FROM Contient WHERE Ref_commande = '" + reference + "'),(SELECT SUM(montant_TTC)FROM Contient WHERE Ref_commande = '" + reference + "'),(SELECT R1 FROM Client,remise WHERE [Client].Date_naissance = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "' ),(SELECT R2 FROM Client,remise WHERE [Client].Date_premier_achat = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "'),(SELECT N__Client FROM Client WHERE Nom_client = '" + nom + "' AND Prenom_client = '" + prenom + "') )", conDataBase);
				SqlDataReader^ myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Close();
				
				
				SqlCommand^ cmdDataBase3 = gcnew SqlCommand("INSERT INTO Contient VALUES ('"+reference+"', (SELECT [Article].Ref_article FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'), '"+Qt+"', (SELECT ([Article].Montant_HT * '"+Qt+"') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "' ), (SELECT ([Article].Montant_TVA * '"+Qt+"') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'), (SELECT ([Article].Montant_TTC * '"+Qt+"') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'))", conDataBase);
				SqlDataReader^ myReader3 = cmdDataBase3->ExecuteReader();
				
				myReader3->Close();
														
				SqlCommand^ cmdDataBase4 = gcnew SqlCommand("UPDATE Commande SET Qt_Article = (SELECT SUM(Nb_article) FROM Contient WHERE Ref_commande = '"+reference+"') , Date_livraison = '" + date_livraison + "', Date_d_emission =  '" + date_emission + "' ,Date_solde = '" + date_solde + "' ,Date_paiement = '" + date_paiement + "' ,Moyen_paiement = '" + moyen_paiement + "' ,Montant_total_HT = (SELECT SUM(montant_HT) FROM Contient WHERE Ref_commande = '" + reference + "'),Montant_total_TVA = (SELECT SUM(montant_TVA) FROM Contient WHERE Ref_commande = '" + reference + "'),Montant_total_TTC = (SELECT SUM(montant_TTC)FROM Contient WHERE Ref_commande = '" + reference + "') ,Remise = (SELECT R1 FROM Client, remise WHERE [Client].Date_naissance = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "'), Remise_2 =  (SELECT R2 FROM Client,remise WHERE [Client].Date_premier_achat = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "'), N__Client = (SELECT N__Client FROM Client WHERE Nom_client = '" + nom + "' AND Prenom_client = '" + prenom + "') WHERE Ref_commande = '"+reference+"' ", conDataBase);
				SqlDataReader^ myReader4 = cmdDataBase4->ExecuteReader();
				myReader4->Close();

				
				conDataBase->Close();
				MessageBox::Show("Commande ajouté au serveur !");
			}
			else {
			}
		}
	}
	private: System::Void OuiAjj_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox6->Show();
		label7->Show();
		AjjArticle->Enabled = true;
	}
	private: System::Void AjjArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);
	

		String^ nom = textBox7->Text;
		String^ prenom = textBox9->Text;
		String^ nomp = textBox1->Text;
		String^ Couleur = textBox4->Text;
		String^ date_emission = textBox2->Text;
		String^ date_solde = textBox12->Text;
		String^ date_livraison = textBox10->Text;
		String^ date_paiement = textBox13->Text;
		String^ Qt = textBox5->Text;
		String^ moyen_paiement = textBox11->Text;

		conDataBase->Open();

		String^ reference = textBox6->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Contient VALUES ('" + reference + "', (SELECT Ref_article FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'), '"+Qt+"', (SELECT ([Article].Montant_HT * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'),(SELECT ([Article].Montant_TVA * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'),(SELECT ([Article].Montant_TTC * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "') )", conDataBase);
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		myReader->Close();
		
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Commande SET Qt_Article = (SELECT SUM(Nb_article) FROM Contient WHERE [Contient].Ref_commande = '" + reference + "'), Montant_total_HT = (SELECT SUM(montant_HT) FROM Contient WHERE [Contient].Ref_commande = '" + reference + "'), Montant_total_TVA = (SELECT SUM(montant_TVA) FROM Contient WHERE [Contient].Ref_commande = '" + reference + "'), Montant_total_TTC = (SELECT SUM(montant_TTC) FROM Contient WHERE [Contient].Ref_commande = '" + reference + "') WHERE [Commande].Ref_commande = '"+reference+"' ", conDataBase);
		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

		myReader1->Close();

		conDataBase->Close();
		
		MessageBox::Show("Article ajouté !");
	}
	private: System::Void NonAjj_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox6->Hide();
		label7->Hide();
		AjjArticle->Enabled = false;
	}
	private: System::Void Modif_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase1 = gcnew SqlConnection(constring);
				

				String^ ref = textBox15->Text;
				String^ ref_arti = textBox16->Text;
				String^ nom = textBox26->Text;
				String^ prenom = textBox25->Text;
				String^ nomp = textBox19->Text;
				String^ Couleur = textBox18->Text;
				String^ date_emission = textBox22->Text;
				String^ date_solde = textBox21->Text;
				String^ date_livraison = textBox24->Text;
				String^ date_paiement = textBox20->Text;
				String^ Qt = textBox27->Text;
				String^ moyen_paiement = textBox23->Text;

				conDataBase->Open();

				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Contient SET Ref_article = (SELECT Ref_article FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "') ,Nb_article = '"+Qt+"', montant_HT = (SELECT ([Article].Montant_HT * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'),montant_TVA = (SELECT ([Article].Montant_TVA * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "'),montant_TTC = (SELECT ([Article].Montant_TTC * '" + Qt + "') FROM Article WHERE Nom_article = '" + nomp + "' AND Couleur_l_article = '" + Couleur + "') FROM Commande WHERE [Contient].Ref_commande = '" + ref + "' AND [Contient].Ref_article = '" + ref_arti + "' ", conDataBase);
				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				myReader1->Close();
				
				
				SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commande SET Qt_article = (SELECT SUM(Nb_article) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "') , Date_livraison = '"+date_livraison+"', Date_d_emission = '"+date_emission+"',Date_solde = '"+date_solde+"',Date_paiement = '"+date_paiement+"',Moyen_paiement = '"+moyen_paiement+"',Montant_total_HT = (SELECT SUM(montant_HT) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'),Montant_total_TVA = (SELECT SUM(montant_TVA) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'),Montant_total_TTC = (SELECT SUM(montant_TTC) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'),Remise = (SELECT R1 FROM Client,remise WHERE [Client].Date_naissance = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "' ),Remise_2 = (SELECT R2 FROM Client,remise WHERE [Client].Date_premier_achat = '" + date_emission + "' AND [Client].Nom_client = '" + nom + "'),N__Client = (SELECT N__Client FROM Client WHERE Nom_client = '" + nom + "' AND Prenom_client = '" + prenom + "') WHERE [Commande].Ref_commande = '" + ref + "' ", conDataBase);
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
				
				myReader->Close();


				

				conDataBase->Close();
				MessageBox::Show("Commande modifié au serveur !");
			}
			else {
			}
		}
	}
	private: System::Void Voir1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);

			String^ ref_com = textBox15->Text;
			String^ ref_arti = textBox16->Text;


			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT [Client].Nom_client, [Client].Prenom_client, [Article].Nom_article, [Article].Couleur_l_article, [Contient].Nb_article, Date_livraison, Date_d_emission, Date_solde, Date_paiement, Moyen_paiement FROM Commande,Article,Client,Contient WHERE [Client].N__Client = [Commande].N__Client AND [Commande].Ref_commande = '"+ref_com+"' AND [Article].Ref_article = '"+ref_arti+"' ", conDataBase);
			SqlDataReader^ myReader;
			try {

				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				while (myReader->Read())
				{
					textBox26->Text = myReader->GetString(0);
					textBox25->Text = myReader->GetString(1);
					textBox19->Text = myReader->GetString(2);
					textBox18->Text = myReader->GetString(3);
					textBox27->Text = Convert::ToString(myReader->GetInt32(4));
					textBox24->Text = Convert::ToString(myReader->GetDateTime(5));
					textBox22->Text = Convert::ToString(myReader->GetDateTime(6));
					textBox21->Text = Convert::ToString(myReader->GetDateTime(7));
					textBox20->Text = Convert::ToString(myReader->GetDateTime(8));
					textBox23->Text = myReader->GetString(9);
				}
				conDataBase->Close();
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);

			}
		}
	}
	private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				SqlConnection^ conDataBase2 = gcnew SqlConnection(constring);

				String^ ref = textBox17->Text;
				String^ ref_arti = textBox28->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Contient WHERE Ref_commande = '"+ref+"' AND Ref_article = '"+ref_arti+"' ", conDataBase);
				SqlDataReader^ myReader;
				
				SqlCommand^ cmdDataBase2 = gcnew SqlCommand("UPDATE Commande SET Qt_Article = (SELECT SUM(Nb_article) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'), Montant_total_HT = (SELECT SUM(montant_HT) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'),Montant_total_TVA = (SELECT SUM(montant_TVA) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "'),Montant_total_TTC = (SELECT SUM(montant_TTC) FROM Contient WHERE [Contient].Ref_commande = '" + ref + "') WHERE Ref_commande = '"+ref+"' ", conDataBase);
				SqlDataReader^ myReader2;

				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					myReader->Close();
					myReader2 = cmdDataBase2->ExecuteReader();
					myReader2->Close();
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
	private: System::Void Supp2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			SqlConnection^ conDataBase2 = gcnew SqlConnection(constring);

			String^ ref = textBox29->Text;

			SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Contient WHERE Ref_commande = '" + ref + "' ", conDataBase);
			SqlDataReader^ myReader;

			SqlCommand^ cmdDataBase2 = gcnew SqlCommand("DELETE FROM Commande WHERE Ref_commande = '"+ref+"' ", conDataBase);
			SqlDataReader^ myReader2;

			try {

				conDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				myReader->Close();
				myReader2 = cmdDataBase2->ExecuteReader();
				myReader2->Close();
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
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
		else {
		}
	}

private: System::Void Afficher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	V = 1;
	Aff->Show();
	Ajj->Hide();
	Modif->Hide();
	Supp->Hide();
	Actualiser1->Show();
	Actualiser2->Hide();
	Actualiser3->Hide();
	Actualiser4->Hide();
	Vider1->Show();
	Vider2->Hide();
	Vider3->Hide();
	Vider4->Hide();
	boxAff->Show();
	boxAjj->Hide();
	boxModif->Hide();
	boxSupp->Hide();
}

private: System::Void Ajouter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	W = 1;
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
}

private: System::Void Modifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	X = 1;
	Aff->Hide();
	Ajj->Hide();
	Modif->Show();
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
}




private: System::Void Supprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = 1;
	Aff->Hide();
	Ajj->Hide();
	Modif->Hide();
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
}




};
}
