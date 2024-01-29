#ifndef SERVICE_H
#define SERVICE_H

#include <string>
#include <vector>
#include "Medecin.h"
#include "Infirmier.h"
#include <iostream>
#include <sstream>

using namespace std;

int const currentYear=2024;

class Service{
	public:
		//constructors
		Service() : code(0), nom(""), secretaire(""), dateLancement(0), medecinChef(Medecin()) {}
		
		Service(bool userInput) : Service() {
			if (userInput) {
				cout << "Enter Service Code: ";
				cin.clear();
				cin >> code;
				cin.ignore(); // Ignore the newline character

				cout << "Enter Service Name: ";
				cin.clear();
				getline(cin, nom);
				cin.clear();

				cout << "Enter Secretaire: ";
				cin.clear();
				getline(cin, secretaire);
				cin.clear();

				cout << "Enter Date de Lancement: ";
				cin.clear();
				cin >> dateLancement;
				cin.ignore();
				
				// Prompting for medecinChef
				cout << "Enter Medecin Chef details:" << endl;
				medecinChef.Input(); // Assuming you have an Input() method in the Medecin class
			}
		}

		
		//methods
		bool VerifyInfirmier(const Infirmier& infirmier);
		void AddInfirmier(const Infirmier& infirmier);
		void ModifyServiceName(const string& newName);
		void LessThanFiveYearsExp()const ;
		int GetAgeOfService()const;
		void RemoveInfirmier(const Infirmier& infirmier);
		void Print()const;
		
		//getters
		int getCode()const;
		string getNom()const;
		string getSecretaire()const;
		int getDateLancement()const;
		Medecin getMedecinChef()const;
		vector<Infirmier> getInfirmiers()const;
		int getNbInfirmiers()const;
		
	private:
		int code;
		string nom, secretaire;
		int dateLancement;
		Medecin medecinChef;
		vector<Infirmier> infirmiers;  // Tableau d'infirmiers
		int nbInfirmiers;//number of infirmiers
};

#endif
