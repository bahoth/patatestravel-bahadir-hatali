
#pragma once
//#ifndef RENTAL_H_
//#define RENTAL_H_
#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "address.hpp"


class Rental {
private:
    std::string name;
    std::string description;
    int area;
    float rating;
    Address address;
    int rental_id;
    float price;
    int capacity;
    std::map<std::string, bool> facilities; //wifi-parking lot- pool- view- minibar- hottub- playzone


    
public:
//GETTER
    std::string getName();
    float getPrice();
    int getArea();
    Address getAddress();
    int getRID();
    float getRating();
    int getCapacity();
    std::string getDesc();
//SETTER
    void setName(std::string nName);
    void setPrice(float newPrice);
    void setArea(int newArea);
    void setAddress(Address newAddress);
    void setRID(int rid);
    void setRating(float nRating);
    void setCapacity(int nCapacity);
    void setDesc(std::string nDesc);
//FACILITY MODIFIERS
    void add_facility(std::string facKey, bool value);
    void delete_facility(std::string facKey);
//DISPLAY FUNCTIONS
    void displayName();
    void showDesc();
    void showPrice();
    void showAddress();
    void showRating();
    void showArea();
    void showCapacity();
    void showFacilities();

//#endif








};
