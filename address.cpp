#include "address.hpp"
using namespace std;

string Address::getCountry(){return country;}
string Address::getCity(){return city;}
string Address::getDistrict(){return district;}
string Address::getStreet(){return street;}
int Address::getBuildingNum(){return buildingNum;}

void Address::setCountry(string country){this->country = country;}
void Address::setCity(string city){this->city=city;}
void Address::setDistrict(string district){this->district=district;}
void Address::setStreet(string street){this->street=street;}
void Address::setBuildingNum(int num){this->buildingNum=buildingNum;}

int main(){

}