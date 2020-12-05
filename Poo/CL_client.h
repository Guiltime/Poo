#pragma once

namespace NS_Composants {


	ref class CL_client
	{
	private:
		int ID;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Date_naissance;
		System::String^ date_Achat;
		System::String^ adresse_Fac;
		System::String^ adresse_Liv;
	
	public:
		
		CL_client() {
			//RIEN
		}
		
		System::String^ AFFICHER(void) {
			return "SELECT * FROM Client WHERE Nom_Client = '" +this->getNom()+ "' AND Prenom_Client = '" + this->getPrenom() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return "DELETE FROM Client WHERE N__Client = '" + this->getID() + "' ";
		}
		System::String^ AJOUTER(void) {
			return "INSERT INTO Client (Nom_client,Prenom_client,Date_naissance,Date_premier_achat,Adresse_Facturation,Adresse_Livraison) VALUES('" + getNom() + "', '" + getPrenom() + "', '" + getDateNai() + "', '" + getdateAchat() + "', '" + getadresseFac() + "', '" + getadresseLiv() + "') ";
		}
		System::String^ MODIFIER(void) {
			return "UPDATE Client SET Nom_client ='" + getNom() + "',Prenom_client = '" + getPrenom() + "',Date_naissance = '" + getDateNai() + "',Date_premier_achat = '" + getdateAchat() + "',Adresse_Facturation = '" + getadresseFac() + "',Adresse_Livraison = '" + getadresseLiv() + "' WHERE N__Client = '" + getID() + "' ";
		}
		System::String^ VOIR(void) {
			return "SELECT * FROM Client WHERE N__Client = '" + getID() + "' ";
		}

		
		void setID(int sID) {
			this->ID = sID;
		}
		int getID() {
			return ID;
		}
		void setNom(System::String^ Nom) {
			this->Nom = Nom;
		}
		System::String^ getNom() {
			return Nom;
		}
		void setPrenom(System::String^ Prenom) {
			this->Prenom = Prenom;
		}
		System::String^ getPrenom() {
			return Prenom;
		}
		void setdateNai(System::String^ dateNai) {
			this->Date_naissance = dateNai;
		}
		System::String^ getDateNai() {
			return Date_naissance;
		}
		void setdateAchat(System::String^ dateAchat) {
			this->date_Achat = dateAchat;
		}
		System::String^ getdateAchat() {
			return date_Achat;
		}
		void setadresseFac(System::String^ adresseFac) {
			this->adresse_Fac = adresseFac;
		}
		System::String^ getadresseFac() {
			return adresse_Fac;
		}
		void setadresseLiv(System::String^ adresseLiv) {
			this->adresse_Liv = adresseLiv;
		}
		System::String^ getadresseLiv() {
			return adresse_Liv;
		}

	};




}
