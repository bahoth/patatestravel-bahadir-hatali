#include "Apartment.hpp"

    int Apartment::getFloor(){return floor;}
    void Apartment::setFloor(int floor){this->floor=floor;}

    void Apartment::add_aFacilities(std::string facKey, bool value){aFacilities.insert({facKey,value});}
    void Apartment::del_aFacilities(std::string facKey){aFacilities.erase(facKey);}
    void Apartment::showFloor(){std::cout<<"Floor : "<<getFloor()<<std::endl;}
    void Apartment::show_aFacilities(){
        std::map<std::string, bool>::iterator it;
        for(it=aFacilities.begin();it!=aFacilities.end();it++){
            std::cout<<it->first<<" : ";
                if(it->second==true){std::cout<<"+"<<std::endl;}
                else{std::cout<<"-"<<std::endl;}
        }
    }
