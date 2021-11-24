
    #include "Hotel.hpp"
    
    
    int Hotel::getAvailableLuxRooms(){return availableLuxRooms;}
    float Hotel::getLuxPrice(){return ((Rental*)(this))->getPrice() + 20;}
    int Hotel::getStarNumber(){return star_number;}
    int Hotel::getAvailableStandartRooms(){return availableStandartRooms;}
    

    void Hotel::setAvailableLuxRooms(int numOfLuxRooms){availableLuxRooms = numOfLuxRooms;}
    void Hotel::setStarNum(int num){star_number=num;}
    void Hotel::setAvailableStandartRooms(int numOfStRooms){availableStandartRooms = numOfStRooms;}
    

    void Hotel::displayAvailableRooms(){std::cout<<"Number of available standart rooms: "<<getAvailableLuxRooms()<<"\n"
                                                 <<"Number of availabe luxury rooms: "<<getAvailableStandartRooms()<<std::endl;}

    void Hotel::displayStarNumber(){std::cout<<"Number of stars o this hotel: "<<getStarNumber()<<std::endl;}
    void Hotel::displayLuxPrice(){std::cout<<"Price of luxury rooms: "<<getLuxPrice()<<std::endl;}
    