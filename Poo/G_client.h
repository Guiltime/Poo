#pragma once

#include "CAD.h"
#include "CL_client.h"

namespace NS_SVC {
	ref class G_Client
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_client^ client;
	public:
		G_Client(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->client = gcnew NS_Composants::CL_client();
		}
		void afficher(System::String^ Nom,System::String^ Prenom,System::Windows::Forms::BindingSource^ bindingsource1, System::Windows::Forms::DataGridView^ datagridview1) {
			client->setNom(Nom);
			client->setPrenom(Prenom);
			cad->requete(client->AFFICHER());
			cad->Close();
			cad->datagrid1(client->AFFICHER(), bindingsource1, datagridview1);
		}
		void ajouter(System::String^ Nom, System::String^ Prenom, System::String^ DateN, System::String^ DatePA, System::String^ Adresse_Fac, System::String^ Adresse_Liv) {
			client->setNom(Nom);
			client->setPrenom(Prenom);
			client->setdateNai(DateN);
			client->setdateAchat(DatePA);
			client->setadresseFac(Adresse_Fac);
			client->setadresseLiv(Adresse_Liv);
			cad->requete(client->AJOUTER());

		}
		void modifier(int ID,System::String^ Nom, System::String^ Prenom, System::String^ DateN, System::String^ DatePA, System::String^ Adresse_Fac, System::String^ Adresse_Liv) {
			client->setID(ID);
			client->setNom(Nom);
			client->setPrenom(Prenom);
			client->setdateNai(DateN);
			client->setdateAchat(DatePA);
			client->setadresseFac(Adresse_Fac);
			client->setadresseLiv(Adresse_Liv);
			cad->requete(client->MODIFIER());
		}
		void supprimer(int ID) {
			client->setID(ID);
			cad->requete(client->SUPPRIMER());
		}
		void voir(int ID,System::Windows::Forms::TextBox^ textBox14, System::Windows::Forms::TextBox^ textBox13, System::Windows::Forms::TextBox^ textBox12, System::Windows::Forms::TextBox^ textBox10, System::Windows::Forms::TextBox^ textBox11, System::Windows::Forms::TextBox^ textBox9) {
			client->setID(ID);
			cad->requete(client->VOIR());
			cad->readClient(textBox14,textBox13,textBox12,textBox10,textBox11,textBox9);
		}
		void voir2(int ID, System::Windows::Forms::TextBox^ textBox21, System::Windows::Forms::TextBox^ textBox20, System::Windows::Forms::TextBox^ textBox19, System::Windows::Forms::TextBox^ textBox17, System::Windows::Forms::TextBox^ textBox18, System::Windows::Forms::TextBox^ textBox16) {
			client->setID(ID);
			cad->requete(client->VOIR());
			cad->readClient(textBox21, textBox20, textBox19, textBox17, textBox18, textBox16);
		}
	};
}

