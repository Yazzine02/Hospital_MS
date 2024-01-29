#include <iostream>
#include "Service.h"
#include "NServices.h"



void DMstart() {
    cout << "Welcome to our Hospital management system!" << endl;
    cout << "==========================================" << endl;
	cout << "||                HOME                  ||" << endl; 
	cout << "==========================================" << endl;
    cout << "1.Create multiple services"<<endl;
	cout << "2.Create service"<<endl;
	cout << "3.Create medecin"<<endl;
	cout << "4.Create infirmier"<<endl;
	cout << "    -1.Exit      "<<endl;
    cout <<"=========================================="<< std::endl;
}

void DMnservices() {
    cout << "The best management systems between your hands!" << endl;
    cout << "==========================================" << endl;
    cout << "||              SERVICES                ||" << endl; 
    cout << "==========================================" << endl;
    cout << "1. Add Other Service" << endl;
    cout << "2. Print All Services" << endl;
    cout << "3. Test if Service Exists" << endl;
    cout << "4. Modify Service Name" << endl;
    cout << "5. Modify Medecin Chef of a Service" << endl;
    cout << "6. Delete Service" << endl;
    cout << "7. Print Service Codes w/ 10+ Years Experience" << endl;
    cout << "    -1.BACK      "<<endl;
    cout << "==========================================" << endl;
}

void DMservice() {
    cout << "        Quality is our priority !         " << endl;
    cout << "==========================================" << endl;
	cout << "||              SERVICE                  ||" << endl; 
	cout << "==========================================" << endl;
	cout << "1. Print Full Service" << endl;
    cout << "2. Add Infirmier" << endl;
	cout << "3. Verify if Infirmier Exists" << endl;
    cout << "4. Modify Service Name" << endl;
    cout << "5. Print Infirmier with 5 Years- Experience" << endl;
    cout << "6. Service Age" << endl;
    cout << "7. Delete Infirmier" << endl;
    cout << "    -1.BACK      "<<endl;
    cout << "==========================================" << endl;
}

void DMmedecin() {
    cout << "     Your satisfaction matters to us!     " << endl;
    cout << "==========================================" << endl;
	cout << "||              MEDECIN                 ||" << endl; 
	cout << "==========================================" << endl;
    cout << "1. Print Medecin" << endl;
    cout << "2. Change Medecin" << endl;
    cout << "    -1.BACK      "<<endl;
    cout << "==========================================" << endl;
}

void DMinfirmier() {
    cout << "Welcome to our Hospital management system!" << endl;
    cout << "==========================================" << endl;
	cout << "||              INFIRMIER               ||" << endl;
	cout << "==========================================" << endl;
    cout << "1. Print Infirmier" << endl;
    cout << "2. Change Infirmier" << endl;
    cout << "    -1.BACK      "<<endl;
    cout << "==========================================" << endl;
}


int main(){
	int choice=0;
	bool Exit=false;
	
	while (!Exit) {
        bool backToMain = false;
        while (!backToMain) {
            DMstart();
            cin >> choice;
			switch(choice){
				case 1:{
					bool nsectionSectionExit = false;
					NServices vectorServices;
					while(!nsectionSectionExit){
						DMnservices();
						int choice_NS=0;
						cin>>choice_NS;
						switch(choice_NS){
							case 1:{
							cout << "Create service :" <<endl;
							Service ser1(true);
							vectorServices.AddService(ser1);
							}break;
							case 2:{
								vectorServices.PrintALL();
							}break;
							case 3:{
								cout << "Enter the service you are looking for:" << endl;
								Service ser2(true);
								if(vectorServices.VerifyService(ser2))cout << "This service exists" << endl;
								else cout << "This service doesn't exist" << endl;
							}break; 
							case 4:{
								cout << "Enter the service you are looking for:" << endl;
								Service ser3(true);
								cout << "Enter the new name of the service:" << endl;
								string newName1;
								cin >> newName1;
								vectorServices.ModifyServiceName(ser3,newName1);
							}break;
							case 5:{
								cout << "Enter the service you are looking for:" << endl;
								Service ser4(true);
								cout << "Enter the new medecin chef:" << endl;
								Medecin mc1(true);
								vectorServices.ModifyMedecinChef(ser4,mc1);
							}break;
							case 6:{
								cout << "Enter the service you want to delete:" << endl;
								Service ser5(true);
								vectorServices.RemoveService(ser5);
							}break;
							case 7:{
								vectorServices.LessThanTenYearsEXP();
							}break;
							case -1:{
								backToMain = true; // Go back to the main menu
								nsectionSectionExit=true;
							}break;
							default:{
								cout << "Invalid choice. Please enter a valid option." << endl;
							}break;
						};
					}
				}break;
				case 2:{//Awesome
					bool sectionSectionExit = false;
					Service ser6(true);
					while(!sectionSectionExit){
						DMservice();
						int choice_S=0;
						cin>>choice_S;
						switch(choice_S){
							case 1:{
							ser6.Print();
							}break;
							case 2:{
								Infirmier inf1(true);
								ser6.AddInfirmier(inf1);
							}break;
							case 3:{
								Infirmier inf2(true);
								if(ser6.VerifyInfirmier(inf2))cout << "The infirmier you entered exists" <<endl;
								else cout << "The infirmier you entered doesn't exist" << endl;
							}break;
							case 4:{
								cout << "Enter the new name of the service:" << endl;
								string newName2;
								cin >> newName2;
								ser6.ModifyServiceName(newName2);
							}break;
							case 5:{
								ser6.LessThanFiveYearsExp();
							}break;
							case 6:{
								cout<<"This service's age is: "<<ser6.GetAgeOfService()<<endl;
							}break;
							case 7:{
								Infirmier inf3(true);
								ser6.RemoveInfirmier(inf3);
							}break;
							case -1:{
								backToMain = true; // Go back to the main menu
								sectionSectionExit=true;
							}break;
							default:{
								cout << "Invalid choice. Please enter a valid option." << endl;
							}break;
						};
					}
				}break;
				case 3:{//AWESOME
					bool medecinSectionExit = false;
					Medecin med1(true);
					while(!medecinSectionExit){
						DMmedecin();
						int choice_M=0;
						cin>>choice_M;
						switch(choice_M){
							case 1:{
								med1.Print();
							}break;
							case 2:{
								med1.Input();
							}break;
							case -1:{
								backToMain = true; // Go back to the main menu
								medecinSectionExit=true;
							}break;
							default:{
								cout << "Invalid choice. Please enter a valid option." << endl;
							}break;
						};
					}
				}break;
				case 4:{//Awesome
					bool infimierSectionExit = false;
					Infirmier inf4(true);
					while(!infimierSectionExit){
						DMinfirmier();
						int choice_I=0;
						cin>>choice_I;
						switch(choice_I){
							case 1:{
								inf4.Print();
							}break;
							case 2:{
								inf4.Input();
							}break;
							case -1:{
								backToMain = true; // Go back to the main menu
								infimierSectionExit=true;
							}break;
							default:{
								cout << "Invalid choice. Please enter a valid option." << endl;
							}break;
						};
					}
				}break;
				case -1:{
					Exit = true;
					backToMain=true;
				}break;  
                default:{
					cout << "Invalid choice. Please enter a valid option." << endl;
				}break; 
			};
		}
	}
	return 0;
}