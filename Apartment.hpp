#pragma once
//#ifndef APARTMENT_H
//#define APARTMENT_H
// some declarations in
// the header file.
#include <map>
#include "House.hpp"



class Apartment:public House{
private:
    std::map<std::string, bool> aFacilities;//balcony, elevator
    int floor;
   //bool hasElevator;
public:
    //Construction
    int getFloor();

    void setFloor(int floorNum);

    void add_aFacilities(std::string facKey, bool value);
    void del_aFacilities(std::string facKey);
    void show_aFacilities();
    void showFloor();
 
};
//#endif