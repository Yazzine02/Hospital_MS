#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include <iostream>

using namespace std;
class Medecin{
	public:
		Medecin()
        : id(0), nom(""), prenom(""), adresse(""), specialite(""), salaire(0.0), dateAffectation(0) {}

		// Constructor with user input
		Medecin(bool userInput) : Medecin() {
			if (userInput) {
				Input();
			}
		}
		Medecin(const Medecin& other)
			:id(other.id), nom(other.nom), prenom(other.prenom), adresse(other.adresse), specialite(other.specialite)
			, salaire(other.salaire), dateAffectation(other.dateAffectation) {}
			
		void Print() const;
		void Input();
		//getters
		int getId()const;
		string getNom()const;
		string getPrenom()const;
		string getAdresse()const;
		string getSpecialite()const;
		int getDateAffectation()const;
		double getSalaire()const;
		
		//setter
		void setMedecinChef(const Medecin& newMedecinChef);
	private:
		int id;
		string nom, prenom, adresse, specialite;
		int dateAffectation;
		double salaire;
};

#endif