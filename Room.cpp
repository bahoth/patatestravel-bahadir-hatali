
#include "Room.hpp"


//Construction

    void Room::add_rentalRoomFacilities(std::string facKey, bool value){rentalRoomFacilities.insert({facKey,value});}
    void Room::del_rentalRoomFacilities(std::string facKey){rentalRoomFacilities.erase(facKey);}
    void Room::show_rentalRoomFacilities(){
        std::map<std::string, bool>::iterator it;
        for(it=rentalRoomFacilities.begin();it!=rentalRoomFacilities.end();it++){
            std::cout<<it->first<<" : ";
                if(it->second==true){std::cout<<"+"<<std::endl;}
                else{std::cout<<"-"<<std::endl;}
        }
    }

