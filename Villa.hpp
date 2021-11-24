#pragma once
//#ifndef VILLA_H
//#define VILLA_H
// some declarations in
// the header file.
#include "House.hpp"


class Villa: public House{
private:
    int numOfKitchens;
    int numOfBaths;
    bool hasMiniTheater;
public: 
    //Construction
    void setKitchens(int numKitch);
    void setBaths(int numBaths);
    void setMiniTheater(bool mTheater);

    int getKitchens();
    int getBaths();
    bool getMiniTheater();
};
//#endif