
#include "Rental.hpp"
#include <iterator>

//GETTER
    float Rental::getPrice(){return price;}
    int Rental::getArea(){return area;}
    Address Rental::getAddress(){return address;}
    int Rental::getRID(){return rental_id;}
    float Rental::getRating(){return rating;}
    int Rental::getCapacity(){return capacity;}
    std::string Rental::getName(){return name;}
    std::string Rental::getDesc(){return description;}
//SETTER
    void Rental::setPrice(float newPrice){price=newPrice;}
    void Rental::setArea(int newArea){area=newArea;}
    void Rental::setAddress(Address newAddress){address=newAddress;}
    void Rental::setRID(int rid){rental_id=rid;}
    void Rental::setRating(float nRating){rating=nRating;}
    void Rental::setCapacity(int nCapacity){capacity=nCapacity;}
    void Rental::setName(std::string nName){name = nName;}
    void Rental::setDesc(std::string nDesc){description = nDesc;}

    void Rental::add_facility(std::string facKey, bool value){facilities.insert({facKey,value});}
    void Rental::delete_facility(std::string facKey){facilities.erase(facKey);}

    void Rental::showPrice(){std::cout<<"Price: "<<getPrice()<<std::endl;}
    void Rental::showAddress(){std::cout<<"Address: "<<getAddress().getDistrict()<<", "
                                                     <<getAddress().getStreet()<<", "
                                                     <<getAddress().getBuildingNum()<<", "
                                                     <<getAddress().getCity()<<", "
                                                     <<getAddress().getCountry()
                                                     <<std::endl;}
                                                    
    void Rental::displayName(){std::cout<<"Name of the hotel: "<<getName()<<std::endl;} 
    void Rental::showDesc(){std::cout<<"Description: "<<getDesc()<<std::endl;} 
    void Rental::showRating(){std::cout<<"Rating: "<<getRating()<<std::endl;}
    void Rental::showArea(){std::cout<<"Area: "<<getArea()<<std::endl;}
    void Rental::showCapacity(){std::cout<<"Bed Capacity: "<<getCapacity()<<std::endl;}
    void Rental::showFacilities(){
        std::map<std::string, bool>::iterator it;
        for(it=facilities.begin();it!=facilities.end();it++){
            std::cout<<it->first<<" : ";
                if(it->second==true){std::cout<<"+"<<std::endl;}
                else{std::cout<<"-"<<std::endl;}
        }
    }
