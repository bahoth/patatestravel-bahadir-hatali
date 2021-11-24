#pragma once
//#ifndef HOTEL_H
//#define HOTEL_H
// some declarations in
// the header file.


#include "Rental.hpp"


using namespace std;

class Hotel: public Rental{
private:
    
    int availableLuxRooms;
    int availableStandartRooms;
    int star_number;
public:
    int getAvailableLuxRooms();
    float getLuxPrice();
    int getStarNumber();
    int getAvailableStandartRooms();
    

    void setAvailableLuxRooms(int numOfLuxRooms);
    void setStarNum(int num);
    void setAvailableStandartRooms(int numOfStRooms);
    
    
    
    void displayAvailableRooms();
    void displayStarNumber();
    void displayLuxPrice();
    
};
//#endif