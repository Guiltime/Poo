#pragma once

namespace NS_Composants
{
	public ref class CAD
	{
	private:
		System::String^ cnx;
		System::String^ rq_sql;
		System::Data::SqlClient::SqlConnection^ CNX;
		System::Data::SqlClient::SqlCommand^ CMD;
		System::Data::SqlClient::SqlDataAdapter^ DA;
		System::Data::DataTable^ TAB;
		System::Data::SqlClient::SqlDataReader^ READ;
		void setSQL(System::String^ rq_sql) {
			if (rq_sql == "" || rq_sql == "RIEN")
			{
				this->rq_sql = "RIEN";
			}
			else
			{
				this->rq_sql = rq_sql;
			}
		}
	public:
		CAD() {
			this->rq_sql = "RIEN";
			this->cnx = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			this->CNX = gcnew System::Data::SqlClient::SqlConnection(this->cnx);
			this->CMD = gcnew System::Data::SqlClient::SqlCommand(this->rq_sql, this->CNX);
			this->DA = gcnew System::Data::SqlClient::SqlDataAdapter(this->CMD);
			this->TAB = gcnew System::Data::DataTable();
			this->CMD->CommandType = System::Data::CommandType::Text;

		}
		void requete(System::String^ rq_sql)
		{
			this->setSQL(rq_sql);
			this->CMD->CommandText = this->rq_sql;
			this->CNX->Open();
			this->READ = CMD->ExecuteReader();
		}
		void requete2(System::String^ rq_sql)
		{
			this->setSQL(rq_sql);
			this->CMD->CommandText = this->rq_sql;
			this->READ = CMD->ExecuteReader();
		}
		void readClient(System::Windows::Forms::TextBox^ textBox14, System::Windows::Forms::TextBox^ textBox13, System::Windows::Forms::TextBox^ textBox12, System::Windows::Forms::TextBox^ textBox10, System::Windows::Forms::TextBox^ textBox11, System::Windows::Forms::TextBox^ textBox9) {
			while (this->READ->Read()) {
				textBox14->Text = READ->GetString(1);
				textBox13->Text = READ->GetString(2);
				textBox12->Text = System::Convert::ToString(READ->GetDateTime(3));
				textBox10->Text = System::Convert::ToString(READ->GetDateTime(4));
				textBox11->Text = READ->GetString(5);
				textBox9->Text = READ->GetString(6);
			}
			this->READ->Close();
		}
		
		void Close() {
			while (this->READ->Read()) {
				
			}
			this->READ->Close();
		}
		void Open() {
			
			this->CNX->Open();
		}
		void readPersonnel1(System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox7) {
			while (this->READ->Read()) {
				textBox1->Text = READ->GetString(0);
				textBox2->Text = READ->GetString(1);
				textBox7->Text = System::Convert::ToString(READ->GetInt32(2));
			}
			this->READ->Close();
		}
		void readPersonnel2(System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6) {
			while (this->READ->Read()) {
				textBox5->Text = READ->GetString(0);
				textBox6->Text = READ->GetString(1);
			}
			this->READ->Close();
		}
		void readPersonnel3(System::Windows::Forms::TextBox^ textBox17, System::Windows::Forms::TextBox^ textBox15, System::Windows::Forms::TextBox^ textBox14, System::Windows::Forms::TextBox^ textBox16) {
			while (this->READ->Read()) {
				textBox17->Text = READ->GetString(1);
				textBox15->Text = READ->GetString(2);
				textBox14->Text = READ->GetString(3);
				textBox16->Text = System::Convert::ToString(READ->GetDateTime(4));

			}
			this->READ->Close();
		}
		
		void datagrid1(System::String^ rq_sql, System::Windows::Forms::BindingSource^ bindingsource1, System::Windows::Forms::DataGridView^ datagridview1) {
			this->setSQL(rq_sql);
			TAB->Clear();
			DA->Fill(TAB);
			bindingsource1->DataSource = TAB;
			datagridview1->DataSource = bindingsource1;
		}
		void datagrid2(System::String^ rq_sql, System::Windows::Forms::BindingSource^ bindingsource2, System::Windows::Forms::DataGridView^ datagridview2) {
			this->setSQL(rq_sql);
			TAB->Clear();
			DA->Fill(TAB);
			bindingsource2->DataSource = TAB;
			datagridview2->DataSource = bindingsource2;
		}
		void datagrid3(System::String^ rq_sql, System::Windows::Forms::BindingSource^ bindingsource3, System::Windows::Forms::DataGridView^ datagridview3) {
			this->setSQL(rq_sql);
			TAB->Clear();
			DA->Fill(TAB);
			bindingsource3->DataSource = TAB;
			datagridview3->DataSource = bindingsource3;
		}
	};
}

