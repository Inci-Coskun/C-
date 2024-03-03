#include <iostream>
#include <string>
#include "vehicule.hpp"
using namespace std;

// Vehicule

Vehicule :: Vehicule (std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1):
    productionYear(productionYear1),
    serialNumber(serialNumber1),
    name(name1),
    color(color1),
    capacity(capacity1){}


void Vehicule :: print(){
    cout << "Name: " << this->getName() << endl;
    cout << "Production year: " << this->getProductionYear() << endl;
    cout << "Serial Number: " << this->getSerialNumber() << endl;
    cout << "Color: " << this->getColor() << endl;
    cout << "Capacity: " << this->getCapacity() << endl;
}


Vehicule :: ~Vehicule(){}

std::string Vehicule :: getName(){
    return this->name;
}

std::string Vehicule :: getColor(){
    return this->color;
}

int Vehicule :: getCapacity(){
    return this->capacity;
}

int Vehicule :: getSerialNumber(){
    return this->serialNumber;
}
    
int Vehicule :: getProductionYear(){
    return this->productionYear;
}




// Voiture

Voiture :: Voiture(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, double km1)
    : Vehicule(name1, productionYear1, serialNumber1, color1, capacity1), km(km1) {}

double Voiture :: getKm(){
    return this->km;
}

void Voiture :: print(){
    Vehicule :: print();
    cout << "Km : " << getKm() << endl;
    cout << "Car is a land vehicle." << endl;
}

Voiture :: ~Voiture(){};




// Avion

Avion :: Avion(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, int tripNumber1)
    : Vehicule(name1, productionYear1, serialNumber1, color1, capacity1), tripNumber(tripNumber1) {}

Avion :: ~Avion(){};

int Avion :: getTripNumber(){
    return this->tripNumber;
}

void Avion :: print(){
    Vehicule :: print();
    cout << "Trip number : " << getTripNumber() << endl;
    cout << "Plane is an aircraft." << endl;
}




// Bateau

Bateau::Bateau(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, double mile1)
    : Vehicule(name1, productionYear1, serialNumber1, color1, capacity1), mile(mile1) {}

Bateau :: ~Bateau(){}

double Bateau :: getMile(){
    return this->mile;
}

void Bateau :: print(){
    Vehicule :: print();
    cout << "Mile : " << this->getMile() << endl;
    cout << "Ship is a sea vessel." << endl;
}




// Others 

int sumOfCapacities(Voiture a, Avion b, Bateau c){
    return (a.getCapacity() + b.getCapacity() + c.getCapacity());
}

int averageProductionYears(Voiture a, Avion b, Bateau c){
    return (a.getProductionYear() + b.getProductionYear() + c.getProductionYear())/3;
}

double averageSerialNumbers(Voiture a, Avion b, Bateau c){
    return (a.getSerialNumber() + b.getSerialNumber() + c.getSerialNumber())/3.0;
}