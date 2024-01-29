#include "Infirmier.h"

void Infirmier::Print() const {
			cout << "Infirmier ID: " << getId() << ", Nom: " << getNom() << ", Prenom: " << getPrenom() << ", Adresse: " << getAdresse()
				<< ", Salaire: " << getSalaire() << ", Type de contrat: " << getTypeContrat() 
				<< ", Date de première affectation: " <<getDateAffectation()<< endl;
		}
		void Infirmier::Input(){
				cout << "Infirmier ID: "<< endl;
				cin.clear();
				cin>>id;
				cin.ignore();
				cout << ", Nom: " << endl; 
				cin.clear();
				getline(cin,nom);
				cout << ", Prenom: " << endl;
				cin.clear();
				getline(cin,prenom);
				cout << ", Adresse: " << endl;
				cin.clear();
				getline(cin,adresse);
				cout << ", Type de contrat: " << endl; 
				cin.clear();
				getline(cin,typeContrat); 
				cout << ", Salaire: " << endl;
				cin.clear();
				cin>>salaire; 
				cin.clear();
				cout << ", Date d'affectation: " << endl;
				cin>>datePremiereAffectation;
				cin.clear();
			}
		//getters
		int Infirmier::getId()const{return id;}
		string Infirmier::getNom()const{return nom;}
		string Infirmier::getPrenom()const{return prenom;}
		string Infirmier::getAdresse()const{return adresse;}
		string Infirmier::getTypeContrat()const{return typeContrat;}
		int Infirmier::getDateAffectation()const{return datePremiereAffectation;}
		double Infirmier::getSalaire()const{return salaire;}
		
		bool Infirmier::comparerIdentifiants(const Infirmier& autre) const {
			return (id == autre.id);
		}