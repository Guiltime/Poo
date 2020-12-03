#pragma once
#include "Gestion_Client.h"
#include "Gestion_Commande.h"
#include "Gestion_Personnel.h"
#include "Gestion_Stock.h"




namespace Poo {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		
	private: System::Windows::Forms::Button^ button1;
	public:
		Interface(void)
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
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Clients;

	private: System::Windows::Forms::Button^ Commandes;

	private: System::Windows::Forms::Button^ Personnel;
	private: System::Windows::Forms::Button^ Stock;


	private: System::Windows::Forms::Button^ Statistiques;
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Clients = (gcnew System::Windows::Forms::Button());
			this->Commandes = (gcnew System::Windows::Forms::Button());
			this->Personnel = (gcnew System::Windows::Forms::Button());
			this->Stock = (gcnew System::Windows::Forms::Button());
			this->Statistiques = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30.8F));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(577, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome !";
			// 
			// Clients
			// 
			this->Clients->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Clients->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Clients->FlatAppearance->BorderSize = 0;
			this->Clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Clients->Location = System::Drawing::Point(834, 481);
			this->Clients->Name = L"Clients";
			this->Clients->Size = System::Drawing::Size(232, 48);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Gestion des clients";
			this->Clients->UseVisualStyleBackColor = false;
			this->Clients->Click += gcnew System::EventHandler(this, &Interface::button1_Click);
			// 
			// Commandes
			// 
			this->Commandes->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Commandes->FlatAppearance->BorderSize = 0;
			this->Commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Commandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Commandes->Location = System::Drawing::Point(878, 154);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(188, 60);
			this->Commandes->TabIndex = 2;
			this->Commandes->Text = L"Gestion des commandes";
			this->Commandes->UseVisualStyleBackColor = false;
			this->Commandes->Click += gcnew System::EventHandler(this, &Interface::button2_Click);
			// 
			// Personnel
			// 
			this->Personnel->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Personnel->FlatAppearance->BorderSize = 0;
			this->Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Personnel->Location = System::Drawing::Point(335, 154);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Size = System::Drawing::Size(188, 60);
			this->Personnel->TabIndex = 3;
			this->Personnel->Text = L"Gestion du personnel";
			this->Personnel->UseVisualStyleBackColor = false;
			this->Personnel->Click += gcnew System::EventHandler(this, &Interface::button3_Click);
			// 
			// Stock
			// 
			this->Stock->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Stock->FlatAppearance->BorderSize = 0;
			this->Stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Stock->Location = System::Drawing::Point(335, 481);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(232, 48);
			this->Stock->TabIndex = 4;
			this->Stock->Text = L"Gestion du stock";
			this->Stock->UseVisualStyleBackColor = false;
			this->Stock->Click += gcnew System::EventHandler(this, &Interface::button4_Click);
			// 
			// Statistiques
			// 
			this->Statistiques->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Statistiques->FlatAppearance->BorderSize = 0;
			this->Statistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Statistiques->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->Statistiques->Location = System::Drawing::Point(573, 163);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(243, 42);
			this->Statistiques->TabIndex = 5;
			this->Statistiques->Text = L"Gestion des statistiques";
			this->Statistiques->UseVisualStyleBackColor = false;
			this->Statistiques->Click += gcnew System::EventHandler(this, &Interface::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1380, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 81);
			this->button1->TabIndex = 10;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Interface::button1_Click_1);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1491, 653);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Statistiques);
			this->Controls->Add(this->Stock);
			this->Controls->Add(this->Personnel);
			this->Controls->Add(this->Commandes);
			this->Controls->Add(this->Clients);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1491, 653);
			this->MinimumSize = System::Drawing::Size(1491, 653);
			this->Name = L"Interface";
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Gestion_Client^ p = gcnew Gestion_Client();
			p->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Gestion_Commande^ p = gcnew Gestion_Commande();
			p->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			Gestion_Personnel^ p = gcnew Gestion_Personnel();
			p->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Gestion_Stock^ p = gcnew Gestion_Stock();
			p->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		else {
		}
}
};
	}
