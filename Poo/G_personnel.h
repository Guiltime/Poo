#pragma once

#include "CAD.h"
#include "CL_personnel.h"

namespace NS_SVC {
	ref class G_personnel
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_personnel^ personnel;
	public:
		G_personnel(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->personnel = gcnew NS_Composants::CL_personnel();
		}
		void afficher1(System::String^ Nom,System::String^ Prenom,System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox7) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			cad->requete(personnel->AFFICHER1());
			cad->readPersonnel1(textBox1, textBox2, textBox7);
		}
		void afficher2(System::String^ Nom, System::String^ Prenom, System::Windows::Forms::BindingSource^ bindingsource1, System::Windows::Forms::DataGridView^ datagridview1) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			cad->requete2(personnel->AFFICHER2());
			cad->Close();
			cad->datagrid1(personnel->AFFICHER2(), bindingsource1, datagridview1);
		}
		void afficher3(int ID, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6) {
			personnel->setID(ID);
			cad->requete(personnel->AFFICHER3());
			cad->readPersonnel2(textBox5, textBox6);
		}
		void ajouter(System::String^ Nom, System::String^ Prenom, System::String^ Pnom, System::String^ Pprenom, System::String^ Adresse_rd, System::String^ Date_embauche) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			personnel->setPnom(Pnom);
			personnel->setPprenom(Pprenom);
			personnel->setAdresse_residence(Adresse_rd);
			personnel->setDate_embauche(Date_embauche);
			cad->requete(personnel->AJOUTER());
		}
		void modifier(System::String^ Nom, System::String^ Prenom, System::String^ Pnom, System::String^ Pprenom, System::String^ Adresse_rd, System::String^ Date_embauche) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			personnel->setPnom(Pnom);
			personnel->setPprenom(Pprenom);
			personnel->setAdresse_residence(Adresse_rd);
			personnel->setDate_embauche(Date_embauche);
			cad->requete(personnel->MODIFIER());
		}
		void voir(System::String^ Nom, System::String^ Prenom,System::Windows::Forms::TextBox^ textBox17, System::Windows::Forms::TextBox^ textBox15, System::Windows::Forms::TextBox^ textBox14, System::Windows::Forms::TextBox^ textBox16) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			cad->requete(personnel->VOIR());
			cad->readPersonnel3(textBox17, textBox15, textBox14, textBox16);
		}
		void supprimer(System::String^ Nom, System::String^ Prenom) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			cad->requete(personnel->SUPPRIMER());
		}
		void voir2(System::String^ Nom, System::String^ Prenom, System::Windows::Forms::TextBox^ textBox17, System::Windows::Forms::TextBox^ textBox15, System::Windows::Forms::TextBox^ textBox14, System::Windows::Forms::TextBox^ textBox16) {
			personnel->setNom(Nom);
			personnel->setPrenom(Prenom);
			cad->requete(personnel->VOIR());
			cad->readPersonnel3(textBox17, textBox15, textBox14, textBox16);
		}
	};
}

