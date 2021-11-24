#pragma once
//#ifndef ROOM_H
//#define ROOM_H


// some declarations in
// the header file.

#include "House.hpp"
#include <map>






class Room: public House{
private:
    std::map<std::string, bool> rentalRoomFacilities;//balcony, hasPrivateBathroom
public:
//TODO: Construction eklenecek

    void add_rentalRoomFacilities(std::string facKey, bool value);
    void del_rentalRoomFacilities(std::string facKey);
    void show_rentalRoomFacilities();
};
//#endif