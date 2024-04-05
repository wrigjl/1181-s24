#include <iostream>
#include "Car.h"

using namespace std;


int main() {

    Car myCar(100), myWifesCar;
    cout << "Fuel: " << myCar.fuelRemainingInGallons << endl;
    //refuel(myCar);
    myCar.refuel();
    cout << "Fuel: " << myCar.fuelRemainingInGallons << endl;

    cout << "Speed: " << myCar.speed << endl;
    myCar.accelerate();
    cout << "Speed: " << myCar.speed << endl;

    cout << "My car speed: " << myCar.speed << endl;
    cout << "Wifes car speed: " << myWifesCar.speed << endl;
    cout << "Net speed of collision: " << myCar.collide(myWifesCar) << endl;

    return 0;
}
