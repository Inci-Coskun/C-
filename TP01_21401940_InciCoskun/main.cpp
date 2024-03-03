#include <iostream>
#include "point.h"
#include <cstdlib>

using namespace std;

class Rectangle{

    private:
    POINT p1;
    POINT p2;
    int xDif;
    int yDif;

    public:
    Rectangle(POINT _p1, POINT _p2) {
        p1 = _p1;
        p2 = _p2;
        xDif = abs(p1.get_X() - p2.get_X());
        yDif = abs(p1.get_Y() - p2.get_Y());
    };

    int Aire(){
        return xDif * yDif;
    }

    int Perimetre(){
        return 2 * (xDif + yDif);
    }

    POINT getPoint1(){
        return p1;
    }

    POINT getPoint2(){
        return p2;
    }

    ~Rectangle(){};
};

class Carre{

    private:
    POINT p;
    int lenght;

    public:
    Carre(POINT _p, int _lenght) { 
        p = _p;
        lenght = _lenght;
    };

    int Aire(){
        return lenght * lenght;
    }

    int Perimetre(){
        return 4 * lenght;
    }

    POINT getPoint(){
        return p;
    }

    ~Carre(){};
};


class Cercle{
    private:
    POINT p;
    int radius;

    public:
    Cercle(POINT _p, int _radius) { 
        p = _p;
        radius = _radius;
    };

    double Aire(){
        return PI * radius * radius;
    }

    double Perimetre(){
        return 2 * PI * radius;
    }

    POINT getPoint(){
        return p;
    }

    ~Cercle(){};
};



int main(){

    Rectangle myRect = Rectangle(POINT(1, 2), POINT(7,8));
    std::cout << "\nRectangle coordinates are: ("<< myRect.getPoint1().get_X() << "," << myRect.getPoint1().get_Y() 
              << ") and (" << myRect.getPoint2().get_X() << "," << myRect.getPoint2().get_Y() << ")" << endl;
    std::cout << "Area : " << myRect.Aire() <<  endl;
    std::cout << "Perimeter : " << myRect.Perimetre() << endl;
    std::cout << "\n----------" << endl;

    Carre myCarre = Carre(POINT(1, 2), 6);
    std::cout << "\nSquare dot is (" << myCarre.getPoint().get_X() << "," << myCarre.getPoint().get_Y() << ") and lenght is 6" << endl;
    std::cout << "Area : " << myCarre.Aire() <<  endl;
    std::cout << "Perimeter : " << myCarre.Perimetre() << endl;
    std::cout << "\n----------" << endl;

    Cercle myCercle = Cercle(POINT(1, 2), 6);
    std::cout << "\nCercle center is (" << myCercle.getPoint().get_X() << "," << myCercle.getPoint().get_Y() << ") and radius is 6 " << endl;
    std::cout << "Area : " << myCercle.Aire() <<  endl;
    std::cout << "Perimeter : " << myCercle.Perimetre() << endl << endl;

    return 0;
}