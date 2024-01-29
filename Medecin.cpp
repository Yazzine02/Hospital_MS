#include "Medecin.h"

void Medecin::Print() const {
			cout << "Medecin ID: " << getId() <<endl;
			cout<< ", Nom: " << getNom() <<endl;
			cout<< ", Prenom: " << getPrenom() <<endl;
			cout<< ", Adresse: " << getAdresse()<<endl;
			cout<< ", Specialite: " << getSpecialite() <<endl;
			cout<< ", Salaire: " << getSalaire() <<endl;
			cout<< ", Date d'affectation: "<<getDateAffectation()<<endl;
		}
		void Medecin::Input(){
			cout << "Medecin ID: "<< endl;
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
			cout << ", Specialite: " << endl; 
			cin.clear();
			getline(cin,specialite); 
			cout << ", Salaire: " << endl;
			cin.clear();
			cin>>salaire; 
			cin.clear();
			cout << ", Date d'affectation: " << endl;
			cin>>dateAffectation;
			cin.clear();
		}
		//getters
		int Medecin::getId()const{return id;}
		string Medecin::getNom()const{return nom;}
		string Medecin::getPrenom()const{return prenom;}
		string Medecin::getAdresse()const{return adresse;}
		string Medecin::getSpecialite()const{return specialite;}
		int Medecin::getDateAffectation()const{return dateAffectation;}
		double Medecin::getSalaire()const{return salaire;}
		
		//setter
		void Medecin::setMedecinChef(const Medecin& newMedecinChef) {
			id=newMedecinChef.id;
			nom=newMedecinChef.nom;
			prenom=newMedecinChef.prenom;
			adresse=newMedecinChef.adresse;
			specialite=newMedecinChef.specialite;
			dateAffectation=newMedecinChef.dateAffectation;
			salaire=newMedecinChef.salaire;
		}