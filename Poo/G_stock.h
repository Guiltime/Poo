#pragma once

#include "CAD.h"
#include "CL_stock.h"

namespace NS_SVC {
	ref class G_Stock
	{
	private:
		NS_Composants::CAD^ cad;
		NS_Composants::CL_stock^ stock;
	public:
		G_Stock(void) {
			this->cad = gcnew NS_Composants::CAD();
			this->stock = gcnew NS_Composants::CL_stock();
		}
		void afficher(System::String^ Nom, System::String^ Ref, System::Windows::Forms::BindingSource^ bindingsource1, System::Windows::Forms::DataGridView^ datagridview1) {
			stock->setRef_article(Ref);
			stock->setNom_article(Nom);
			cad->requete(stock->AFFICHER());
			cad->Close();
			cad->datagrid1(stock->AFFICHER(), bindingsource1, datagridview1);
		}
		void ajouter(System::String^ Ref, System::String^ Nom, System::String^ Qt, System::String^ HT, System::String^  Seuil, System::String^ Nature, System::String^ Couleur) {

			stock->setRef_article(Ref);
			stock->setNom_article(Nom);
			stock->setQt_artice(Qt);
			stock->setMontant_HT(HT);
			stock->setSeuil(Seuil);
			stock->setNature_article(Nature);
			stock->setCouleur_article(Couleur);
			cad->requete(stock->AJOUTER());
		}
		void modifier(System::String^ Ref, System::String^ Nom, System::String^ Qt, System::String^ HT,System::String^ TVA,System::String^ TTC, System::String^ Seuil, System::String^ Nature, System::String^ Couleur) {
			stock->setRef_article(Ref);
			stock->setNom_article(Nom);
			stock->setQt_artice(Qt);
			stock->setMontant_HT(HT);
			stock->setMontant_TVA(TVA);
			stock->setMontant_TTC(TTC);
			stock->setSeuil(Seuil);
			stock->setNature_article(Nature);
			stock->setCouleur_article(Couleur);
			cad->requete(stock->MODIFIER());
		}
		void supprimer(System::String^ Ref, System::String^ Nom) {
			stock->setRef_article(Ref);
			stock->setNom_article(Nom);
			cad->requete(stock->SUPPRIMER());
		}
	};
}

