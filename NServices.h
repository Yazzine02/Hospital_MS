#ifndef NSERVICES_H
#define NSERVICES_H

#include "Service.h"


using namespace std;

class NServices{
	public:
		NServices(){
			Service ser(true);
			vectorsServices.push_back(ser);
		};
		NServices(Service& service){
			vectorsServices.push_back(service);
		}
		//methods
		bool VerifyService( Service& service)const ;
		void AddService(Service& service);
		void ModifyServiceName(Service& service,string& newName);
		void ModifyMedecinChef(Service& service,Medecin& newMedecinChef);
		void RemoveService(Service& service);
		void PrintALL()const;
		void LessThanTenYearsEXP()const;
	private:
		vector<Service> vectorsServices;
};

#endif