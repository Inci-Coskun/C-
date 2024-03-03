// Implementez la classe abstraite Vehicule  qu'on a étudié dans le cours
// et les classes heritées Voiture, Avion, Bateau
#include <iostream>
#include <string>
#include "vehicule.hpp"
using namespace std;

int main(){

    Voiture myCar ("inci", 2002, 33333, "red", 5, 15000);
    Avion myPlane ("ipek", 1998, 11111, "white", 150, 1900);
    Bateau myShip ("suheyla", 1968, 66666, "brown", 16000, 786547);
    
    myCar.print();
    cout << endl;

    myPlane.print();
    cout << endl;

    myShip.print();
    cout << endl;

    cout << "------ Some Calculations About These Vehicles ------" << endl;
    cout << "Sum of capacities of the given vehicles : " << sumOfCapacities(myCar, myPlane, myShip) << endl;
    cout << "Average of serial numbers : " << averageSerialNumbers(myCar, myPlane, myShip) << endl;
    cout << "Average of production years : " << averageProductionYears(myCar, myPlane, myShip) << endl << endl;

    return 0;
}