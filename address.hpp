#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <iostream>
#include <string>

class Rental;
using namespace std;

class Address{
private:
    string country;
    string city;
    string district;
    string street;
    int buildingNum;
public:
    string getCountry();
    string getCity();
    string getDistrict();
    string getStreet();
    int getBuildingNum();

    void setCountry(string country);
    void setCity(string city);
    void setDistrict(string district);
    void setStreet(string street);
    void setBuildingNum(int num);

    //Display fonksiyonu doğrudan rental içinde, adresi başka bir yerde göstermemiz gerekmediği için buraya çekmedim tekrar. 
};
#endif