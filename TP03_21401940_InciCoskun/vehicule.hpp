#include <iostream>
#include <string>
using namespace std;

class Vehicule{

    private:
    const int productionYear;
    const int serialNumber;
    std::string name;
    std::string color;   
    const int capacity;

    public: 
    virtual void print();
    std::string getName();
    std::string getColor();
    int getCapacity();
    int getSerialNumber();
    int getProductionYear();

    Vehicule (std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1);
    ~Vehicule();

};


class Voiture: public Vehicule{

    private:
    double km;

    public:
    double getKm();
    void print();  

    Voiture(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, double km1);
    ~Voiture();

};


class Avion: public Vehicule{

    private:
    int tripNumber;

    public:
    int getTripNumber();
    void print();  

    Avion(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, int tripNumber1);
    ~Avion();

};


class Bateau: public Vehicule{

    private:
    double mile;

    public:
    double getMile();
    void print();

    Bateau(std::string name1, const int productionYear1, const int serialNumber1, std::string color1, const int capacity1, double mile1);
    ~Bateau();
};


// Others
int sumOfCapacities(Voiture a, Avion b, Bateau c);
int averageProductionYears(Voiture a, Avion b, Bateau c);
double averageSerialNumbers(Voiture a, Avion b, Bateau c);