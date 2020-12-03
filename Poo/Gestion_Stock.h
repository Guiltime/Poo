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
	/// Description résumée de Gestion_Stock
	/// </summary>
	public ref class Gestion_Stock : public System::Windows::Forms::Form
	{
	public:
		int V, W, X, Y;
	private: System::Windows::Forms::Button^ Ajj;
	private: System::Windows::Forms::Button^ Actualiser2;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::GroupBox^ boxAjout;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Modif;
	private: System::Windows::Forms::Button^ Actualiser3;
	private: System::Windows::Forms::GroupBox^ boxModif;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::DataGridView^ dataModif;

	private: System::Windows::Forms::BindingSource^ bindingSource3;
	private: System::Windows::Forms::Button^ Voir;
	private: System::Windows::Forms::Button^ Supp;
	private: System::Windows::Forms::Button^ Actualiser4;
	private: System::Windows::Forms::GroupBox^ boxSupp;





	private: System::Windows::Forms::BindingSource^ bindingSource4;
	private: System::Windows::Forms::Button^ Voir2;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::DataGridView^ dataSupp;

	private: System::Windows::Forms::DataGridView^ dataAjout;
	public :
		   Gestion_Stock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	public:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Gestion_Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Main;
	private: System::Windows::Forms::GroupBox^ Options;
	private: System::Windows::Forms::Button^ Actualiser1;
	private: System::Windows::Forms::Button^ Aff;
	private: System::Windows::Forms::Button^ Annuler;
	private: System::Windows::Forms::RadioButton^ Supprimer;
	private: System::Windows::Forms::RadioButton^ Modifier;
	private: System::Windows::Forms::RadioButton^ Ajouter;
	private: System::Windows::Forms::RadioButton^ Afficher;
	private: System::Windows::Forms::GroupBox^ boxAffiche;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataAffiche;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Stock::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Supp = (gcnew System::Windows::Forms::Button());
			this->Actualiser4 = (gcnew System::Windows::Forms::Button());
			this->boxModif = (gcnew System::Windows::Forms::GroupBox());
			this->Voir = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dataModif = (gcnew System::Windows::Forms::DataGridView());
			this->boxSupp = (gcnew System::Windows::Forms::GroupBox());
			this->Voir2 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->dataSupp = (gcnew System::Windows::Forms::DataGridView());
			this->Modif = (gcnew System::Windows::Forms::Button());
			this->Actualiser3 = (gcnew System::Windows::Forms::Button());
			this->Ajj = (gcnew System::Windows::Forms::Button());
			this->Actualiser2 = (gcnew System::Windows::Forms::Button());
			this->boxAffiche = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataAffiche = (gcnew System::Windows::Forms::DataGridView());
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
			this->boxAjout = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataAjout = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource4 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->Main->SuspendLayout();
			this->boxModif->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->BeginInit();
			this->boxSupp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->BeginInit();
			this->boxAffiche->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAffiche))->BeginInit();
			this->Options->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->boxAjout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(502, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Veuillez saisir les informations requises :";
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Supp);
			this->Main->Controls->Add(this->Actualiser4);
			this->Main->Controls->Add(this->boxModif);
			this->Main->Controls->Add(this->boxSupp);
			this->Main->Controls->Add(this->Modif);
			this->Main->Controls->Add(this->Actualiser3);
			this->Main->Controls->Add(this->Ajj);
			this->Main->Controls->Add(this->Actualiser2);
			this->Main->Controls->Add(this->boxAffiche);
			this->Main->Controls->Add(this->Actualiser1);
			this->Main->Controls->Add(this->Aff);
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->Options);
			this->Main->Location = System::Drawing::Point(12, 67);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1228, 537);
			this->Main->TabIndex = 1;
			this->Main->TabStop = false;
			this->Main->Enter += gcnew System::EventHandler(this, &Gestion_Stock::Main_Enter);
			// 
			// Supp
			// 
			this->Supp->Location = System::Drawing::Point(938, 465);
			this->Supp->Name = L"Supp";
			this->Supp->Size = System::Drawing::Size(114, 50);
			this->Supp->TabIndex = 10;
			this->Supp->Text = L"Supprimer";
			this->Supp->UseVisualStyleBackColor = true;
			this->Supp->Click += gcnew System::EventHandler(this, &Gestion_Stock::Supp_Click);
			// 
			// Actualiser4
			// 
			this->Actualiser4->Location = System::Drawing::Point(1099, 347);
			this->Actualiser4->Name = L"Actualiser4";
			this->Actualiser4->Size = System::Drawing::Size(101, 47);
			this->Actualiser4->TabIndex = 9;
			this->Actualiser4->Text = L"Actualiser";
			this->Actualiser4->UseVisualStyleBackColor = true;
			this->Actualiser4->Click += gcnew System::EventHandler(this, &Gestion_Stock::Actualiser4_Click);
			// 
			// boxModif
			// 
			this->boxModif->Controls->Add(this->Voir);
			this->boxModif->Controls->Add(this->textBox12);
			this->boxModif->Controls->Add(this->textBox13);
			this->boxModif->Controls->Add(this->textBox14);
			this->boxModif->Controls->Add(this->textBox15);
			this->boxModif->Controls->Add(this->textBox16);
			this->boxModif->Controls->Add(this->textBox17);
			this->boxModif->Controls->Add(this->textBox18);
			this->boxModif->Controls->Add(this->textBox19);
			this->boxModif->Controls->Add(this->textBox20);
			this->boxModif->Controls->Add(this->label13);
			this->boxModif->Controls->Add(this->label14);
			this->boxModif->Controls->Add(this->label15);
			this->boxModif->Controls->Add(this->label16);
			this->boxModif->Controls->Add(this->label17);
			this->boxModif->Controls->Add(this->label18);
			this->boxModif->Controls->Add(this->label19);
			this->boxModif->Controls->Add(this->label20);
			this->boxModif->Controls->Add(this->label21);
			this->boxModif->Controls->Add(this->dataModif);
			this->boxModif->Location = System::Drawing::Point(0, 0);
			this->boxModif->Name = L"boxModif";
			this->boxModif->Size = System::Drawing::Size(908, 515);
			this->boxModif->TabIndex = 7;
			this->boxModif->TabStop = false;
			// 
			// Voir
			// 
			this->Voir->Location = System::Drawing::Point(796, 410);
			this->Voir->Name = L"Voir";
			this->Voir->Size = System::Drawing::Size(71, 68);
			this->Voir->TabIndex = 37;
			this->Voir->Text = L"Voir";
			this->Voir->UseVisualStyleBackColor = true;
			this->Voir->Click += gcnew System::EventHandler(this, &Gestion_Stock::Voir_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(650, 375);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 36;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(504, 465);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(501, 375);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 34;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(328, 465);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 33;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(328, 375);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 32;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(172, 465);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 31;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(172, 375);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 30;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(13, 465);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 22);
			this->textBox19->TabIndex = 29;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(13, 376);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(647, 339);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 17);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Couleur :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(501, 423);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(204, 17);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Seuil de réapprovisionnement :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(498, 340);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 17);
			this->label15->TabIndex = 25;
			this->label15->Text = L"Nature :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(331, 423);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 17);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Montant TVA :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(328, 339);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 17);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Quantité :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(172, 425);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 17);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Montant TTC :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(169, 341);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 17);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Nom :";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(13, 425);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 17);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Montant HT :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(10, 340);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(82, 17);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Réference :";
			// 
			// dataModif
			// 
			this->dataModif->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataModif->Location = System::Drawing::Point(13, 11);
			this->dataModif->Name = L"dataModif";
			this->dataModif->RowHeadersWidth = 51;
			this->dataModif->RowTemplate->Height = 24;
			this->dataModif->Size = System::Drawing::Size(895, 306);
			this->dataModif->TabIndex = 0;
			// 
			// boxSupp
			// 
			this->boxSupp->Controls->Add(this->Voir2);
			this->boxSupp->Controls->Add(this->textBox21);
			this->boxSupp->Controls->Add(this->textBox22);
			this->boxSupp->Controls->Add(this->textBox23);
			this->boxSupp->Controls->Add(this->textBox24);
			this->boxSupp->Controls->Add(this->textBox25);
			this->boxSupp->Controls->Add(this->textBox26);
			this->boxSupp->Controls->Add(this->textBox27);
			this->boxSupp->Controls->Add(this->textBox28);
			this->boxSupp->Controls->Add(this->textBox29);
			this->boxSupp->Controls->Add(this->label22);
			this->boxSupp->Controls->Add(this->label23);
			this->boxSupp->Controls->Add(this->label24);
			this->boxSupp->Controls->Add(this->label25);
			this->boxSupp->Controls->Add(this->label26);
			this->boxSupp->Controls->Add(this->label27);
			this->boxSupp->Controls->Add(this->label28);
			this->boxSupp->Controls->Add(this->label29);
			this->boxSupp->Controls->Add(this->label30);
			this->boxSupp->Controls->Add(this->dataSupp);
			this->boxSupp->Location = System::Drawing::Point(0, 0);
			this->boxSupp->Name = L"boxSupp";
			this->boxSupp->Size = System::Drawing::Size(908, 515);
			this->boxSupp->TabIndex = 19;
			this->boxSupp->TabStop = false;
			// 
			// Voir2
			// 
			this->Voir2->Location = System::Drawing::Point(796, 410);
			this->Voir2->Name = L"Voir2";
			this->Voir2->Size = System::Drawing::Size(71, 58);
			this->Voir2->TabIndex = 37;
			this->Voir2->Text = L"Voir";
			this->Voir2->UseVisualStyleBackColor = true;
			this->Voir2->Click += gcnew System::EventHandler(this, &Gestion_Stock::Voir2_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(653, 389);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 36;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(507, 479);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 35;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(504, 389);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 34;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(331, 479);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 22);
			this->textBox24->TabIndex = 33;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(331, 389);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 22);
			this->textBox25->TabIndex = 32;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(175, 479);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 22);
			this->textBox26->TabIndex = 31;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(175, 389);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 22);
			this->textBox27->TabIndex = 30;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(16, 479);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 22);
			this->textBox28->TabIndex = 29;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(16, 390);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 22);
			this->textBox29->TabIndex = 28;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(650, 353);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(65, 17);
			this->label22->TabIndex = 27;
			this->label22->Text = L"Couleur :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(504, 437);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(204, 17);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Seuil de réapprovisionnement :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(501, 354);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 17);
			this->label24->TabIndex = 25;
			this->label24->Text = L"Nature :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(334, 437);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(98, 17);
			this->label25->TabIndex = 24;
			this->label25->Text = L"Montant TVA :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(331, 353);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(70, 17);
			this->label26->TabIndex = 23;
			this->label26->Text = L"Quantité :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(175, 439);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(98, 17);
			this->label27->TabIndex = 22;
			this->label27->Text = L"Montant TTC :";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(172, 355);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(45, 17);
			this->label28->TabIndex = 21;
			this->label28->Text = L"Nom :";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(16, 439);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(90, 17);
			this->label29->TabIndex = 20;
			this->label29->Text = L"Montant HT :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(13, 354);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(82, 17);
			this->label30->TabIndex = 19;
			this->label30->Text = L"Réference :";
			// 
			// dataSupp
			// 
			this->dataSupp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataSupp->Location = System::Drawing::Point(16, 11);
			this->dataSupp->Name = L"dataSupp";
			this->dataSupp->RowHeadersWidth = 51;
			this->dataSupp->RowTemplate->Height = 24;
			this->dataSupp->Size = System::Drawing::Size(886, 306);
			this->dataSupp->TabIndex = 0;
			// 
			// Modif
			// 
			this->Modif->Location = System::Drawing::Point(938, 466);
			this->Modif->Name = L"Modif";
			this->Modif->Size = System::Drawing::Size(114, 49);
			this->Modif->TabIndex = 8;
			this->Modif->Text = L"Modifier";
			this->Modif->UseVisualStyleBackColor = true;
			this->Modif->Click += gcnew System::EventHandler(this, &Gestion_Stock::Modif_Click);
			// 
			// Actualiser3
			// 
			this->Actualiser3->Location = System::Drawing::Point(1099, 346);
			this->Actualiser3->Name = L"Actualiser3";
			this->Actualiser3->Size = System::Drawing::Size(101, 48);
			this->Actualiser3->TabIndex = 7;
			this->Actualiser3->Text = L"Actualiser";
			this->Actualiser3->UseVisualStyleBackColor = true;
			this->Actualiser3->Click += gcnew System::EventHandler(this, &Gestion_Stock::Actualiser3_Click);
			// 
			// Ajj
			// 
			this->Ajj->Location = System::Drawing::Point(938, 466);
			this->Ajj->Name = L"Ajj";
			this->Ajj->Size = System::Drawing::Size(114, 49);
			this->Ajj->TabIndex = 6;
			this->Ajj->Text = L"Ajouter";
			this->Ajj->UseVisualStyleBackColor = true;
			this->Ajj->Click += gcnew System::EventHandler(this, &Gestion_Stock::Ajj_Click);
			// 
			// Actualiser2
			// 
			this->Actualiser2->Location = System::Drawing::Point(1099, 347);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(101, 48);
			this->Actualiser2->TabIndex = 5;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			this->Actualiser2->Click += gcnew System::EventHandler(this, &Gestion_Stock::Actualiser2_Click);
			// 
			// boxAffiche
			// 
			this->boxAffiche->Controls->Add(this->label3);
			this->boxAffiche->Controls->Add(this->label2);
			this->boxAffiche->Controls->Add(this->textBox2);
			this->boxAffiche->Controls->Add(this->textBox1);
			this->boxAffiche->Controls->Add(this->dataAffiche);
			this->boxAffiche->Location = System::Drawing::Point(0, 0);
			this->boxAffiche->Name = L"boxAffiche";
			this->boxAffiche->Size = System::Drawing::Size(908, 515);
			this->boxAffiche->TabIndex = 4;
			this->boxAffiche->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(218, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Réference :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(218, 391);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 391);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// dataAffiche
			// 
			this->dataAffiche->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAffiche->Location = System::Drawing::Point(6, 11);
			this->dataAffiche->Name = L"dataAffiche";
			this->dataAffiche->RowHeadersWidth = 51;
			this->dataAffiche->RowTemplate->Height = 24;
			this->dataAffiche->Size = System::Drawing::Size(896, 306);
			this->dataAffiche->TabIndex = 0;
			// 
			// Actualiser1
			// 
			this->Actualiser1->Location = System::Drawing::Point(1099, 346);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(101, 48);
			this->Actualiser1->TabIndex = 3;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &Gestion_Stock::Actualiser1_Click);
			// 
			// Aff
			// 
			this->Aff->Location = System::Drawing::Point(938, 466);
			this->Aff->Name = L"Aff";
			this->Aff->Size = System::Drawing::Size(114, 49);
			this->Aff->TabIndex = 2;
			this->Aff->Text = L"Afficher";
			this->Aff->UseVisualStyleBackColor = true;
			this->Aff->Click += gcnew System::EventHandler(this, &Gestion_Stock::Aff_Click);
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1086, 466);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(114, 49);
			this->Annuler->TabIndex = 1;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Gestion_Stock::Annuler_Click);
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
			this->Supprimer->Location = System::Drawing::Point(21, 244);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(119, 28);
			this->Supprimer->TabIndex = 3;
			this->Supprimer->TabStop = true;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Stock::Supprimer_CheckedChanged);
			// 
			// Modifier
			// 
			this->Modifier->AutoSize = true;
			this->Modifier->Location = System::Drawing::Point(21, 182);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(98, 28);
			this->Modifier->TabIndex = 2;
			this->Modifier->TabStop = true;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Stock::Modifier_CheckedChanged);
			// 
			// Ajouter
			// 
			this->Ajouter->AutoSize = true;
			this->Ajouter->Location = System::Drawing::Point(21, 112);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(91, 28);
			this->Ajouter->TabIndex = 1;
			this->Ajouter->TabStop = true;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Stock::Ajouter_CheckedChanged);
			// 
			// Afficher
			// 
			this->Afficher->AutoSize = true;
			this->Afficher->Location = System::Drawing::Point(21, 47);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(94, 28);
			this->Afficher->TabIndex = 0;
			this->Afficher->TabStop = true;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			this->Afficher->CheckedChanged += gcnew System::EventHandler(this, &Gestion_Stock::Afficher_CheckedChanged);
			// 
			// boxAjout
			// 
			this->boxAjout->Controls->Add(this->textBox11);
			this->boxAjout->Controls->Add(this->textBox10);
			this->boxAjout->Controls->Add(this->textBox9);
			this->boxAjout->Controls->Add(this->textBox8);
			this->boxAjout->Controls->Add(this->textBox7);
			this->boxAjout->Controls->Add(this->textBox6);
			this->boxAjout->Controls->Add(this->textBox5);
			this->boxAjout->Controls->Add(this->textBox4);
			this->boxAjout->Controls->Add(this->textBox3);
			this->boxAjout->Controls->Add(this->label12);
			this->boxAjout->Controls->Add(this->label11);
			this->boxAjout->Controls->Add(this->label10);
			this->boxAjout->Controls->Add(this->label9);
			this->boxAjout->Controls->Add(this->label8);
			this->boxAjout->Controls->Add(this->label7);
			this->boxAjout->Controls->Add(this->label6);
			this->boxAjout->Controls->Add(this->label5);
			this->boxAjout->Controls->Add(this->label4);
			this->boxAjout->Controls->Add(this->dataAjout);
			this->boxAjout->Location = System::Drawing::Point(12, 67);
			this->boxAjout->Name = L"boxAjout";
			this->boxAjout->Size = System::Drawing::Size(908, 515);
			this->boxAjout->TabIndex = 5;
			this->boxAjout->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(647, 390);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(501, 480);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(498, 390);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(325, 480);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(325, 390);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(169, 480);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(169, 390);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(10, 480);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(10, 391);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(644, 354);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 17);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Couleur :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(498, 438);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(204, 17);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Seuil de réapprovisionnement :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(495, 355);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 17);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Nature :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(328, 438);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 17);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Montant TVA :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(325, 354);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Quantité :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(169, 440);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Montant TTC :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(166, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Nom :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 440);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Montant HT :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 355);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Réference :";
			// 
			// dataAjout
			// 
			this->dataAjout->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataAjout->Location = System::Drawing::Point(6, 11);
			this->dataAjout->Name = L"dataAjout";
			this->dataAjout->RowHeadersWidth = 51;
			this->dataAjout->RowTemplate->Height = 24;
			this->dataAjout->Size = System::Drawing::Size(902, 306);
			this->dataAjout->TabIndex = 0;
			// 
			// Gestion_Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1276, 623);
			this->Controls->Add(this->boxAjout);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1294, 670);
			this->MinimumSize = System::Drawing::Size(1294, 670);
			this->Name = L"Gestion_Stock";
			this->Text = L"Gestion_Stock";
			this->Load += gcnew System::EventHandler(this, &Gestion_Stock::Gestion_Stock_Load);
			this->Main->ResumeLayout(false);
			this->boxModif->ResumeLayout(false);
			this->boxModif->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataModif))->EndInit();
			this->boxSupp->ResumeLayout(false);
			this->boxSupp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSupp))->EndInit();
			this->boxAffiche->ResumeLayout(false);
			this->boxAffiche->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAffiche))->EndInit();
			this->Options->ResumeLayout(false);
			this->Options->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->boxAjout->ResumeLayout(false);
			this->boxAjout->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataAjout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Enter(System::Object^ sender, System::EventArgs^ e) {
		Aff->Hide();
		Ajj->Hide();
		Modif->Hide();
		Supp->Hide();
		Actualiser1->Hide();
		Actualiser2->Hide();
		Actualiser3->Hide();
		Actualiser4->Hide();
		boxAffiche->Hide();
		boxAjout->Hide();
		boxModif->Hide();
		boxSupp->Hide();
	}

	private: System::Void Actualiser1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (V = 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
			DataTable^ data = gcnew DataTable();
			adapter->Fill(data);
			bindingSource1->DataSource = data;
			dataAffiche->DataSource = bindingSource1;
		}
	}
	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (W = 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
			DataTable^ data = gcnew DataTable();
			adapter->Fill(data);
			bindingSource2->DataSource = data;
			dataAjout->DataSource = bindingSource2;
		}
	}
	private: System::Void Actualiser3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X = 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
			DataTable^ data = gcnew DataTable();
			adapter->Fill(data);
			bindingSource3->DataSource = data;
			dataModif->DataSource = bindingSource3;
		}
	}
	private: System::Void Actualiser4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y = 1) {
			String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
			DataTable^ data = gcnew DataTable();
			adapter->Fill(data);
			bindingSource4->DataSource = data;
			dataSupp->DataSource = bindingSource4;
		}
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
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);
				String^ ref = textBox1->Text;
				String^ nom = textBox2->Text;
				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Article WHERE Ref_Article = '" + ref + "' OR Nom_article = '" + nom + "' ", conDataBase);
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();


				while (myReader->Read()) {
					textBox1->Text = Convert::ToString(myReader->GetString(0));
					textBox2->Text = Convert::ToString(myReader->GetString(1));
				}

				myReader->Close();
				SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article WHERE Ref_article = '" + ref + "' OR Nom_article = '" + nom + "' ", conDataBase);
				DataTable^ data = gcnew DataTable();
				data->Clear();
				adapter->Fill(data);
				bindingSource1->DataSource = data;
				dataAffiche->DataSource = bindingSource1;
			}
			else {
			}
		}
	}
	private: System::Void Ajj_Click(System::Object^ sender, System::EventArgs^ e) {
		if (W == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ ref = textBox3->Text;
				String^ nom = textBox5->Text;
				String^ quantité = textBox7->Text;
				String^ montant_HT = textBox4->Text;
				String^ montant_TTC = textBox6->Text;
				String^ montant_TVA = textBox8->Text;
				String^ nature = textBox9->Text;
				String^ couleur = textBox11->Text;
				String^ seuil = textBox10->Text;


				SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT Article (Ref_article,nom_article,Qt_article,Montant_HT,Montant_TVA,Montant_TTC,Seuil_reapprovisionnement,Nature_L_article,Couleur_l_article) VALUES('" + ref + "', '" + nom + "', '" + quantité + "', '" + montant_HT + "', '" + montant_TVA + "', '" + montant_TTC + "', '" + seuil + "', '" + nature + "', '" + couleur + "'); ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Article ajouté au serveur !");
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

				String^ ref = textBox20->Text;
				String^ nom = textBox18->Text;
				String^ quantité = textBox16->Text;
				String^ montant_HT = textBox19->Text;
				String^ montant_TTC = textBox17->Text;
				String^ montant_TVA = textBox15->Text;
				String^ nature = textBox14->Text;
				String^ couleur = textBox12->Text;
				String^ seuil = textBox13->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Article SET Ref_article ='" + ref + "',nom_article = '" + nom + "',Qt_article = '" + quantité + "',Montant_HT = '" + montant_HT + "',Montant_TVA = '" + montant_TVA + "',Montant_TTC = '" + montant_TTC + "', Seuil_reapprovisionnement = '" + seuil + "', Nature_L_article = '" + nature + "', Couleur_l_article = '" + couleur + "' WHERE Ref_article = '" + ref + "'; ", conDataBase);
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
	private: System::Void Supp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ ref = textBox29->Text;
				String^ nom = textBox27->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Article WHERE Ref_article ='" + ref + "' OR Nom_article = '" + nom+ "' ", conDataBase);
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

	private: System::Void Voir_Click(System::Object^ sender, System::EventArgs^ e) {
		if (X == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ ref = textBox20->Text;
				String^ nom = textBox18->Text;


				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Article WHERE (Ref_article) = '" + ref + "' OR Nom_article = '" + nom + "' " , conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					while (myReader->Read())
					{
						textBox20->Text = myReader->GetString(0);
						textBox18->Text = myReader->GetString(1);
						textBox16->Text = Convert::ToString(myReader->GetInt32(2));
						textBox19->Text = Convert::ToString(myReader->GetDouble(3));
						textBox15->Text = Convert::ToString(myReader->GetDouble(4));
						textBox17->Text = Convert::ToString(myReader->GetDouble(5));
						textBox13->Text = Convert::ToString(myReader->GetInt32(6));
						textBox14->Text = myReader->GetString(7);
						textBox12->Text = myReader->GetString(8);
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
	private: System::Void Voir2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Y == 1) {
			if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
				SqlConnection^ conDataBase = gcnew SqlConnection(constring);

				String^ ref = textBox29->Text;
				String^ nom = textBox27->Text;


				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Article WHERE (Ref_article) = '" + ref + "' OR Nom_article = '" + nom + "' ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					while (myReader->Read())
					{
						textBox29->Text = myReader->GetString(0);
						textBox27->Text = myReader->GetString(1);
						textBox25->Text = Convert::ToString(myReader->GetInt32(2));
						textBox28->Text = Convert::ToString(myReader->GetDouble(3));
						textBox24->Text = Convert::ToString(myReader->GetDouble(4));
						textBox26->Text = Convert::ToString(myReader->GetDouble(5));
						textBox22->Text = Convert::ToString(myReader->GetInt32(6));
						textBox23->Text = myReader->GetString(7);
						textBox21->Text = myReader->GetString(8);
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
	private: System::Void Vider_Click(System::Object^ sender, System::EventArgs^ e) {
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
	boxAffiche->Show();
	boxAjout->Hide();
	boxModif->Hide();
	boxSupp->Hide();
}

private: System::Void Ajouter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	W = 1;
	Ajj->Show();
	Aff->Hide();
	Modif->Hide();
	Supp->Hide();
	Actualiser1->Hide();
	Actualiser2->Show();
	Actualiser3->Hide();
	Actualiser4->Hide();
	boxAjout->Show();
	boxAffiche->Hide();
	boxModif->Hide();
	boxSupp->Hide();
}

private: System::Void Modifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	X = 1;
	Modif->Show();
	Ajj->Hide();
	Aff->Hide();
	Supp->Hide();
	Actualiser1->Hide();
	Actualiser2->Hide();
	Actualiser3->Show();
	Actualiser4->Hide();
	boxModif->Show();
	boxAffiche->Hide();
	boxAjout->Hide();
	boxSupp->Hide();
}

private: System::Void Supprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Y = 1;
	Supp->Show();
	Modif->Hide();
	Ajj->Hide();
	Aff->Hide();
	Actualiser1->Hide();
	Actualiser2->Hide();
	Actualiser3->Hide();
	Actualiser4->Show();
	boxModif->Hide();
	boxAffiche->Hide();
	boxAjout->Hide();
	boxSupp->Show();
}


private: System::Void Gestion_Stock_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
