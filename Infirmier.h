#ifndef INFIRMIER_H
#define INFIRMIER_H


#include <string>
#include <iostream>
using namespace std;

class Infirmier{
	public:
		Infirmier():id(0),nom(""),prenom(""),adresse(""),salaire(0.0),typeContrat(""),datePremiereAffectation(0){};;
		Infirmier(bool userInput)
			: Infirmier(){
			if(userInput)Input();	
		}
			
		void Print() const ;
		void Input();
		//getters
		int getId()const;
		string getNom()const;
		string getPrenom()const;
		string getAdresse()const;
		string getTypeContrat()const;
		int getDateAffectation()const;
		double getSalaire()const;
		
		bool comparerIdentifiants(const Infirmier& autre) const ;
	
	private:
		int id;
		string nom, prenom, adresse, typeContrat;
		int datePremiereAffectation;
		double salaire;
};

#endif