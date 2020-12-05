#pragma once
#include "Simul.h"


namespace Poo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Gestion_Statistique
	/// </summary>
	public ref class Gestion_Statistique : public System::Windows::Forms::Form
	{
	public:
		Gestion_Statistique(void)
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
		~Gestion_Statistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Main;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CalculAff;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ Annuler;


	private: System::Windows::Forms::Button^ CalculPanier;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ IdSeuil;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ CalTotal;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ CalculMax;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ CalculMin;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ AchatStock;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ Simulation;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gestion_Statistique::typeid));
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Simulation = (gcnew System::Windows::Forms::Button());
			this->AchatStock = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->CalculMin = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CalculMax = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CalTotal = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->IdSeuil = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CalculPanier = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->CalculAff = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->Main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Simulation);
			this->Main->Controls->Add(this->AchatStock);
			this->Main->Controls->Add(this->label12);
			this->Main->Controls->Add(this->CalculMin);
			this->Main->Controls->Add(this->label7);
			this->Main->Controls->Add(this->CalculMax);
			this->Main->Controls->Add(this->label4);
			this->Main->Controls->Add(this->CalTotal);
			this->Main->Controls->Add(this->label11);
			this->Main->Controls->Add(this->label10);
			this->Main->Controls->Add(this->textBox5);
			this->Main->Controls->Add(this->label9);
			this->Main->Controls->Add(this->IdSeuil);
			this->Main->Controls->Add(this->label8);
			this->Main->Controls->Add(this->CalculPanier);
			this->Main->Controls->Add(this->label5);
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->CalculAff);
			this->Main->Controls->Add(this->label3);
			this->Main->Controls->Add(this->textBox1);
			this->Main->Controls->Add(this->label2);
			this->Main->Controls->Add(this->dataGridView1);
			this->Main->Location = System::Drawing::Point(12, 78);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1263, 587);
			this->Main->TabIndex = 0;
			this->Main->TabStop = false;
			// 
			// Simulation
			// 
			this->Simulation->Location = System::Drawing::Point(949, 511);
			this->Simulation->Name = L"Simulation";
			this->Simulation->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Simulation->Size = System::Drawing::Size(128, 53);
			this->Simulation->TabIndex = 29;
			this->Simulation->Text = L"Simulation";
			this->Simulation->UseVisualStyleBackColor = true;
			this->Simulation->Click += gcnew System::EventHandler(this, &Gestion_Statistique::Simulation_Click);
			// 
			// AchatStock
			// 
			this->AchatStock->Location = System::Drawing::Point(628, 462);
			this->AchatStock->Name = L"AchatStock";
			this->AchatStock->Size = System::Drawing::Size(80, 34);
			this->AchatStock->TabIndex = 28;
			this->AchatStock->Text = L"Calculer";
			this->AchatStock->UseVisualStyleBackColor = true;
			this->AchatStock->Click += gcnew System::EventHandler(this, &Gestion_Statistique::AchatStock_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label12->Location = System::Drawing::Point(568, 431);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(198, 20);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Valeur D\'achat du stock :";
			// 
			// CalculMin
			// 
			this->CalculMin->Location = System::Drawing::Point(355, 462);
			this->CalculMin->Name = L"CalculMin";
			this->CalculMin->Size = System::Drawing::Size(75, 34);
			this->CalculMin->TabIndex = 26;
			this->CalculMin->Text = L"Calculer";
			this->CalculMin->UseVisualStyleBackColor = true;
			this->CalculMin->Click += gcnew System::EventHandler(this, &Gestion_Statistique::CalculMin_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label7->Location = System::Drawing::Point(290, 431);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"10 articles les moins vendus :";
			// 
			// CalculMax
			// 
			this->CalculMax->Location = System::Drawing::Point(77, 462);
			this->CalculMax->Name = L"CalculMax";
			this->CalculMax->Size = System::Drawing::Size(75, 34);
			this->CalculMax->TabIndex = 24;
			this->CalculMax->Text = L"Calculer";
			this->CalculMax->UseVisualStyleBackColor = true;
			this->CalculMax->Click += gcnew System::EventHandler(this, &Gestion_Statistique::CalculMax_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label4->Location = System::Drawing::Point(20, 429);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 20);
			this->label4->TabIndex = 23;
			this->label4->Text = L"10 articles les plus vendus :";
			// 
			// CalTotal
			// 
			this->CalTotal->Location = System::Drawing::Point(795, 341);
			this->CalTotal->Name = L"CalTotal";
			this->CalTotal->Size = System::Drawing::Size(75, 27);
			this->CalTotal->TabIndex = 22;
			this->CalTotal->Text = L"Calculer";
			this->CalTotal->UseVisualStyleBackColor = true;
			this->CalTotal->Click += gcnew System::EventHandler(this, &Gestion_Statistique::CalTotal_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(628, 410);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label10->Location = System::Drawing::Point(624, 343);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"ID Client :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(714, 343);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(61, 22);
			this->textBox5->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label9->Location = System::Drawing::Point(623, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(281, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Montant total d\'achat pour un client :";
			// 
			// IdSeuil
			// 
			this->IdSeuil->Location = System::Drawing::Point(340, 331);
			this->IdSeuil->Name = L"IdSeuil";
			this->IdSeuil->Size = System::Drawing::Size(112, 47);
			this->IdSeuil->TabIndex = 15;
			this->IdSeuil->Text = L"Identifier";
			this->IdSeuil->UseVisualStyleBackColor = true;
			this->IdSeuil->Click += gcnew System::EventHandler(this, &Gestion_Statistique::IdSeuil_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label8->Location = System::Drawing::Point(240, 299);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(363, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Produits sous le seuil de réapprovisionnement :";
			// 
			// CalculPanier
			// 
			this->CalculPanier->Location = System::Drawing::Point(1002, 334);
			this->CalculPanier->Name = L"CalculPanier";
			this->CalculPanier->Size = System::Drawing::Size(75, 34);
			this->CalculPanier->TabIndex = 11;
			this->CalculPanier->Text = L"Calculer";
			this->CalculPanier->UseVisualStyleBackColor = true;
			this->CalculPanier->Click += gcnew System::EventHandler(this, &Gestion_Statistique::CalculPanier_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label5->Location = System::Drawing::Point(926, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Calculer le panier moyen :";
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1112, 511);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(128, 53);
			this->Annuler->TabIndex = 7;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Gestion_Statistique::Annuler_Click);
			// 
			// CalculAff
			// 
			this->CalculAff->Location = System::Drawing::Point(146, 322);
			this->CalculAff->Name = L"CalculAff";
			this->CalculAff->Size = System::Drawing::Size(75, 36);
			this->CalculAff->TabIndex = 6;
			this->CalculAff->Text = L"Calculer";
			this->CalculAff->UseVisualStyleBackColor = true;
			this->CalculAff->Click += gcnew System::EventHandler(this, &Gestion_Statistique::CalculAff_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label3->Location = System::Drawing::Point(15, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Mois :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 329);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label2->Location = System::Drawing::Point(15, 299);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Calcul du chiffre d\'affaire :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1238, 243);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Calcul des statistiques :";
			// 
			// Gestion_Statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1287, 677);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Main);
			this->MaximumSize = System::Drawing::Size(1305, 724);
			this->MinimumSize = System::Drawing::Size(1305, 724);
			this->Name = L"Gestion_Statistique";
			this->Text = L"Gestion_Statistique";
			this->Main->ResumeLayout(false);
			this->Main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		this->Close();
	}
	else {
	}
}

private: System::Void CalculAff_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ mois = textBox1->Text;
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	
		conDataBase->Open();
		
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT SUM(Nb_article*montant_TTC) AS CHiffre_Affaire FROM Contient,Commande WHERE [Commande].Ref_commande = [Contient].Ref_commande AND LEFT(CONVERT(varchar(10),Date_solde,101),2) = '" + mois + "'", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}

	private: System::Void CalculPanier_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		conDataBase->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(" SELECT (SUM(Nb_article*Montant_TTC))/COUNT([Commande].Ref_commande) AS Panier_Moyen FROM Commande,Contient ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	
	private: System::Void IdSeuil_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		conDataBase->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT Ref_article,Nom_article FROM Article WHERE Qt_article < Seuil_reapprovisionnement ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void CalTotal_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Id = textBox5->Text;
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		
		conDataBase->Open();
		
		
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT SUM(Montant_total_TTC) FROM Commande WHERE N__Client = '" + Id + "' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void CalculMax_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		conDataBase->Open();


		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT TOP 10 [Contient].Ref_article,[Article].Nom_article,SUM([Contient].Nb_article) FROM Article,Contient WHERE [Contient].Ref_article = [Article].Ref_article GROUP BY [Contient].Ref_article,[Article].Nom_article ORDER BY SUM([Contient].Nb_article) DESC ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void CalculMin_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		conDataBase->Open();


		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(" SELECT TOP 10[Contient].Ref_article, [Article].Nom_article, SUM([Contient].Nb_article) FROM Article, Contient WHERE[Contient].Ref_article = [Article].Ref_article GROUP BY[Contient].Ref_article, [Article].Nom_article ORDER BY SUM([Contient].Nb_article) ASC ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void AchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String ^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		conDataBase->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(" SELECT SUM(Montant_HT * Qt_article) - SUM((Montant_HT * 0.2) * Qt_article) FROM Article ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void Simulation_Click(System::Object^ sender, System::EventArgs^ e) {
		Simul^ p = gcnew Simul();
		p->Show();
	}
};
}
