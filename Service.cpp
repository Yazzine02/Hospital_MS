#include "Service.h"

bool Service::VerifyInfirmier(const Infirmier& infirmier) {
			bool condition=false;
			for(const auto& element : infirmiers){
				if(element.getId()==infirmier.getId())condition=true;
			}
			return condition;//true if exists
		}
void Service::AddInfirmier(const Infirmier& infirmier){
	if(!VerifyInfirmier(infirmier)){
		infirmiers.push_back(infirmier);
		nbInfirmiers++;
	}
	else throw std::invalid_argument( "L'infirmier(ere) existe dejà !" );
}

void Service::ModifyServiceName(const string& newName){
	nom=newName;
}

void Service::LessThanFiveYearsExp()const {
	bool condition=false;
	for(const auto& element : infirmiers){
		if(element.getDateAffectation()-currentYear>5){
			element.Print();
			condition=true;
		};
	}
	if(!condition)cout<<"No one got less than 5 years of experience"<<endl;
}
int Service::GetAgeOfService()const {
	return currentYear-dateLancement;
}

void Service::RemoveInfirmier(const Infirmier& infirmier){
	if(!VerifyInfirmier(infirmier)) throw std::invalid_argument( "Infirmier doesn't exist in service" );
	else{
		auto it = infirmiers.begin();
		while (it != infirmiers.end()) {
			if (it->getId() == infirmier.getId()) {
				it = infirmiers.erase(it); // erase the element using iterator
			} else {
			++it; // move to the next element
			}
		}
	}
}

void Service::Print()const {
	int index=0;
	cout << "Service Code: "<<code;
	cout << ", Nom: " << nom; 
	cout << ", Secretaire: " << secretaire;
	cout << ", Date de lancement: " << dateLancement; 
	cout << ", Medecin Chef: ";
	medecinChef.Print();
	if(infirmiers.empty()){
		cout<<"This service has no infirmiers"<<endl;
	}
	else{
		cout << ", Infirmiers: " << endl;
		for(const auto& element : infirmiers){
			cout << "Infirmier "<<index<<endl;
			element.Print() ;
			index++;
		}
	}
	cout << ", Date d'affectation: "<<dateLancement<<endl;
}
		
//getters
int Service::getCode()const{return code;}
string Service::getNom()const{return nom;}
string Service::getSecretaire()const{return secretaire;}
int Service::getDateLancement()const{return dateLancement;}
Medecin Service::getMedecinChef()const{return medecinChef;}
vector<Infirmier> Service::getInfirmiers()const{return infirmiers;}
int Service::getNbInfirmiers()const{return nbInfirmiers;}