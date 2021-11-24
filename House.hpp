#pragma once
//#ifndef RENTAL_H_
//#define RENTAL_H_


#include "Rental.hpp"

class House: public Rental{
private:
    float distanceToCityCentre;                 //in meter
public:
//Constr
    int getDist();

    void setDist(int dist);
};
//#endif