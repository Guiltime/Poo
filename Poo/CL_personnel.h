#pragma once

namespace NS_Composants {


	ref class CL_personnel
	{
	private:
		int ID_personnel;
		System::String^ Nom;
		System::String^ Prenom;
		System::String^ Pnom;
		System::String^ Pprenom;
		System::String^ Adresse_residence;
		System::String^ Date_embauche;
		int ID_personne_sup;

	public:

		CL_personnel() {
			//RIEN
		}

		System::String^ AFFICHER1(void) {
			return "SELECT ISNULL(Nom_personnel,0), ISNULL(Prenom_personnel,0), ISNULL(Id_Personnel_Superviser,0) FROM Personnel WHERE Nom_personnel = '" + getNom() + "' OR Prenom_personnel = '" + getPrenom() + "' ";
		}
		System::String^ AFFICHER3(void) {
			return "SELECT Nom_personnel, Prenom_personnel FROM Personnel WHERE Id_Personnel = '" +getID() + "' ";
		}
		System::String^ AFFICHER2(void) {
			return "SELECT * FROM Personnel WHERE Nom_personnel = '" + getNom() + "' AND Prenom_personnel = '" + getPrenom() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return "DELETE FROM Personnel WHERE Nom_personnel ='" + getNom() + "' AND Prenom_personnel ='" + getPrenom() + "'  ";
		}
		System::String^ AJOUTER(void) {
			return " INSERT INTO Personnel (Nom_personnel,Prenom_personnel,Adresse_residence,Date_embauche,Id_Personnel_Superviser) VALUES('" + getNom() + "', '" + getPrenom() + "', '" + getAdresse_residence() + "', '" + getDate_embauche() + "', (SELECT Id_Personnel FROM Personnel WHERE Nom_personnel = '" + getPnom() + "' AND Prenom_personnel = '" + getPprenom() + "')) ";
		}
		System::String^ MODIFIER(void) {
			return " UPDATE Personnel SET Nom_personnel ='" + getNom() + "',Prenom_personnel = '" + getPrenom() + "',Adresse_residence = '" + getAdresse_residence() + "',Date_embauche = '" + getDate_embauche() + "',Id_Personnel_Superviser = (SELECT Id_Personnel FROM Personnel WHERE Nom_personnel = '" + getPnom() + "' AND Prenom_personnel = '" + getPprenom() + "') WHERE Nom_personnel = '" + getNom() + "' AND Prenom_personnel = '" + getPrenom() + "' ";
		}
		System::String^ VOIR(void) {
			return "SELECT * FROM Personnel WHERE Nom_personnel = '" + getNom() + "' AND Prenom_personnel = '" + getPrenom() + "'  ";
		}


		void setID(int sID) {
			this->ID_personnel = sID;
		}
		int getID() {
			return ID_personnel;
		}
		void setNom(System::String^ Nom) {
			this->Nom = Nom;
		}
		System::String^ getNom() {
			return Nom;
		}
		void setPnom(System::String^ PNom) {
			this->Pnom = PNom;
		}
		System::String^ getPnom() {
			return Pnom;
		}
		void setPprenom(System::String^ Pprenom) {
			this-> Pprenom = Pprenom;
		}
		System::String^ getPprenom() {
			return Pprenom;
		}
		void setPrenom(System::String^ Prenom) {
			this->Prenom = Prenom;
		}
		System::String^ getPrenom() {
			return Prenom;
		}
		void setAdresse_residence(System::String^ Adresse_residence) {
			this->Adresse_residence = Adresse_residence;
		}
		System::String^ getAdresse_residence() {
			return Adresse_residence;
		}
		void setDate_embauche(System::String^ Date_embauche) {
			this->Date_embauche = Date_embauche;
		}
		System::String^ getDate_embauche() {
			return Date_embauche;
		}
		void setID_sup(System::Int32 ID_superieur) {
			this->ID_personne_sup = ID_superieur;
		}
		System::Int32 getID_sup() {
			return ID_personne_sup;
		}


	};




}
