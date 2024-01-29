#include "NServices.h"

bool NServices::VerifyService( Service& service)const {//return true if exists
			bool condition=false;
			for( auto& element:vectorsServices){
				if(element.getCode()==service.getCode())condition=true;
			}
			return condition;
		}
		void NServices::AddService(Service& service) {
			if(!VerifyService(service))vectorsServices.push_back(service);
			else throw std::invalid_argument( "The service you're trying to add already exists !" );
		}
		void NServices::ModifyServiceName(Service& service,string& newName){
			if(!VerifyService(service))throw std::invalid_argument( "The service you're trying to add doesn't exist !" );
			else{
				for(auto& element:vectorsServices){
					if(element.getCode()==service.getCode())element.ModifyServiceName(newName);;
				}
			}
		}
		void NServices::ModifyMedecinChef(Service& service,Medecin& newMedecinChef){
			bool condition=false;
			for(auto& element:vectorsServices){
				if(element.getMedecinChef().getId()==service.getMedecinChef().getId()){
					condition=true;
					element.getMedecinChef().setMedecinChef(newMedecinChef);
					break;
				}
			}
			if(condition){
				throw std::invalid_argument( "Couldn't find the medecin chef you're looking for!" );
			}else{
				cout<<"Medecin Chef updated successfully !"<<endl;
			}
		}
		void NServices::RemoveService(Service& service){
			if(!VerifyService(service)) throw std::invalid_argument( "The service you entered doesn't exist!" );
			else{
				auto it = vectorsServices.begin();
				while (it != vectorsServices.end()) {
					if (it->getCode() == service.getCode()) {
						it = vectorsServices.erase(it); // erase the element using iterator
					} else {
						++it; // move to the next element
					}
				}
			}
		}
		void NServices::PrintALL()const {
			if(vectorsServices.empty())cout<<"There are no services available"<<endl;
			else{
				int counter=0;
				for( auto& element:vectorsServices){
					cout<<"Service number "<<counter+1<<endl;
					element.Print();
					counter++;
				}
			}
		}
		void NServices::LessThanTenYearsEXP()const{
			for(auto& element:vectorsServices){
					if(element.GetAgeOfService()>=10)cout<<element.getCode()<<endl;
				}
		}