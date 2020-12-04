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
	/// Description résumée de Simul
	/// </summary>
	public ref class Simul : public System::Windows::Forms::Form
	{
	public:
		Simul(void)
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
		~Simul()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Main;
	protected:
	private: System::Windows::Forms::Button^ Simuler;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ Annuler;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simul::typeid));
			this->Main = (gcnew System::Windows::Forms::GroupBox());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->Simuler = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->Main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// Main
			// 
			this->Main->Controls->Add(this->Annuler);
			this->Main->Controls->Add(this->Simuler);
			this->Main->Controls->Add(this->textBox1);
			this->Main->Controls->Add(this->label4);
			this->Main->Controls->Add(this->comboBox3);
			this->Main->Controls->Add(this->label3);
			this->Main->Controls->Add(this->comboBox2);
			this->Main->Controls->Add(this->label2);
			this->Main->Controls->Add(this->label1);
			this->Main->Controls->Add(this->comboBox1);
			this->Main->Controls->Add(this->dataGridView1);
			this->Main->Location = System::Drawing::Point(3, 45);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(1272, 620);
			this->Main->TabIndex = 0;
			this->Main->TabStop = false;
			// 
			// Annuler
			// 
			this->Annuler->Location = System::Drawing::Point(1133, 542);
			this->Annuler->Name = L"Annuler";
			this->Annuler->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Annuler->Size = System::Drawing::Size(110, 54);
			this->Annuler->TabIndex = 10;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &Simul::Annuler_Click);
			// 
			// Simuler
			// 
			this->Simuler->Location = System::Drawing::Point(528, 481);
			this->Simuler->Name = L"Simuler";
			this->Simuler->Size = System::Drawing::Size(149, 54);
			this->Simuler->TabIndex = 9;
			this->Simuler->Text = L"Simuler";
			this->Simuler->UseVisualStyleBackColor = true;
			this->Simuler->Click += gcnew System::EventHandler(this, &Simul::Simuler_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1114, 347);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 22);
			this->textBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label4->Location = System::Drawing::Point(1041, 346);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"TVA :";
			// 
			// comboBox3
			// 
			this->comboBox3->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"0.02", L"0.03", L"0.05" });
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2%", L"3%", L"5%" });
			this->comboBox3->Location = System::Drawing::Point(882, 344);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label3->Location = System::Drawing::Point(680, 346);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Démarque inconnue :";
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"0.05", L"0.06" });
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5%", L"6%" });
			this->comboBox2->Location = System::Drawing::Point(537, 344);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label2->Location = System::Drawing::Point(342, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Remise commercial :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
			this->label1->Location = System::Drawing::Point(5, 346);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Marge commercial :";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"0.1", L"0.15" });
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(190, 344);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Simul::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 9);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1257, 272);
			this->dataGridView1->TabIndex = 0;
			// 
			// Simul
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1287, 677);
			this->Controls->Add(this->Main);
			this->MaximumSize = System::Drawing::Size(1305, 724);
			this->MinimumSize = System::Drawing::Size(1305, 724);
			this->Name = L"Simul";
			this->Text = L"Simul";
			this->Main->ResumeLayout(false);
			this->Main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Simuler_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ mC = comboBox1->Text;
		String^ rC = comboBox2->Text;
		String^ dI = comboBox3->Text;
		String^ TVA = textBox1->Text;
		
		String ^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		conDataBase->Open();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(" SELECT SUM(Qt_article*((Montant_HT+Montant_HT*'"+TVA+"'))-((Montant_HT+Montant_HT*'"+TVA+"')*'"+mC+"')-((Montant_HT+Montant_HT*'"+TVA+"')*'"+rC+"')-((Montant_HT+Montant_HT*'"+TVA+"')*'"+dI+"'))  FROM Article ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void Annuler_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Etes-vous sûr de votre choix ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
		else {
		}
	}
};
}
