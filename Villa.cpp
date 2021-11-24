#include "Villa.hpp"

 //Construction

    void Villa::setKitchens(int numKitch){numOfKitchens = numKitch;}
    void Villa::setBaths(int numBaths){numOfBaths = numBaths;}
    void Villa::setMiniTheater(bool mTheater){hasMiniTheater = mTheater;}

    int Villa::getKitchens(){return numOfKitchens;}
    int Villa::getBaths(){return numOfBaths;}
    bool Villa::getMiniTheater(){return hasMiniTheater;}