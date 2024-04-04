#include <iostream>
#include <vector>

using namespace std;

struct Car {
    // in miles
    double odoReading;
    // in miles per house
    double speed;
    // in gallons
    double fuelRemainingInGallons;

    void refuel();
    void accelerate();

    // return the net speed of the collision
    double collide(Car &);
    double drive(double miles);
};

double Car::drive(double miles) {
    odoReading += miles;  // /= *= += -=
}
double Car::collide(Car &otherCar) {
    return speed + otherCar.speed;
}

void Car::refuel() {
    fuelRemainingInGallons = 25;

    // these are the same meaning as above
    this->fuelRemainingInGallons = 25;
    (*this).fuelRemainingInGallons = 25;
}

void Car::accelerate() {
    speed += 5;
}

// refuel: top off the fuel of a car to 25 gallons
void refuel(Car& car) {
    car.fuelRemainingInGallons = 25;
}

// accelerate: increase speed by 5mph
void accelerate(Car& car) {
    car.speed = car.speed + 5;
}

int main() {

    vector<int> x;
    // Call the GM place... order one?
    Car myCar = { 0.0, 0.0, 20.0 }, myWifesCar = { 17000, 0.0, 0 };
    cout << "Fuel: " << myCar.fuelRemainingInGallons << endl;
    //refuel(myCar);
    myCar.refuel();
    cout << "Fuel: " << myCar.fuelRemainingInGallons << endl;

    cout << "Speed: " << myCar.speed << endl;
    accelerate(myCar);
    cout << "Speed: " << myCar.speed << endl;

    cout << "My car speed: " << myCar.speed << endl;
    cout << "Wifes car speed: " << myWifesCar.speed << endl;
    cout << "Net speed of collision: " << myCar.collide(myWifesCar) << endl;

    return 0;
}
