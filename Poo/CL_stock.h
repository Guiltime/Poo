#pragma once

namespace NS_Composants {


	ref class CL_stock
	{
	private:
		
		System::String^ Ref_article;
		System::String^ nom_article;
		System::String^ Qt_article;
		System::String^ Nature_article;
		System::String^ Couleur_article;
		System::String^ Seuil;
		System::String^ Montant_HT;
		System::String^ Montant_TVA;
		System::String^ Montant_TTC;


	public:

		CL_stock() {
			//RIEN
		}

		System::String^ AFFICHER(void) {
			return "SELECT * FROM Article WHERE Ref_Article = '" + getRef_article() + "' OR Nom_article = '" + getNom_article() + "' ";
		}
		System::String^ SUPPRIMER(void) {
			return " DELETE FROM Article WHERE Ref_article ='" + getRef_article() + "' OR Nom_article = '" + getNom_article() + "' ";
		}
		System::String^ AJOUTER(void) {
			return " INSERT INTO Article (Ref_article,nom_article,Qt_article,Montant_HT,Montant_TVA,Montant_TTC,Seuil_reapprovisionnement,Nature_L_article,Couleur_l_article) VALUES('" + getRef_article() + "', '" + getNom_article() + "', '" + getQt_article() + "', '" + getMontant_HT() + "', '" + getMontant_HT() + "' * 19/100 , '" + getMontant_HT() + "' + '" + getMontant_HT() + "' * 19/100 , '" + getSeuil() + "', '" + getNature_article() + "', '" + getCouleur_article() + "') ";
		}
		System::String^ MODIFIER(void) {
			return " UPDATE Article SET Ref_article ='" + getRef_article() + "',nom_article = '" + getNom_article() + "',Qt_article = '" + getQt_article() + "',Montant_HT = '" + getMontant_HT() + "',Montant_TVA = '" + getMontant_TVA() + "',Montant_TTC = '" + getMontant_TTC() + "', Seuil_reapprovisionnement = '" + getSeuil() + "', Nature_L_article = '" + getNature_article() + "', Couleur_l_article = '" + getCouleur_article() + "' WHERE Ref_article = '" + getRef_article() + "' ";
		}
		


		void setRef_article(System::String^ Ref) {
			this->Ref_article = Ref;
		}
		System::String^ getRef_article() {
			return Ref_article;
		}
		void setNom_article(System::String^ Nom_article) {
			this->nom_article = Nom_article;
		}
		System::String^ getNom_article() {
			return nom_article;
		}
		void setQt_artice(System::String^ Qt) {
			this->Qt_article = Qt;
		}
		System::String^ getQt_article() {
			return Qt_article;
		}
		void setNature_article(System::String^ Nature) {
			this->Nature_article= Nature;
		}
		System::String^ getNature_article() {
			return Nature_article;
		}
		void setCouleur_article(System::String^ Couleur) {
			this->Couleur_article = Couleur;
		}
		System::String^ getCouleur_article() {
			return Couleur_article;
		}
		void setSeuil(System::String^ seuil) {
			this->Seuil = seuil;
		}
		System::String^ getSeuil() {
			return Seuil;
		}
		void setMontant_HT(System::String^ HT) {
			this->Montant_HT = HT;
		}
		System::String^ getMontant_HT() {
			return Montant_HT;
		}
		void setMontant_TVA(System::String^ TVA) {
			this->Montant_TVA = TVA;
		}
		System::String^ getMontant_TVA() {
			return Montant_TVA	;
		}
		void setMontant_TTC(System::String^ TTC) {
			this->Montant_TTC = TTC;
		}
		System::String^ getMontant_TTC() {
			return Montant_TTC;
		}
		
	};




}
