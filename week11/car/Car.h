//
// Created by Jason Wright on 4/4/2024.
//

#ifndef CAR_CAR_H
#define CAR_CAR_H
#include <string>

struct Car {
    // in miles
    double odoReading;
    // in miles per house
    double speed;
    // in gallons
    double fuelRemainingInGallons;

    Car();
    Car(double fuel);
    Car(double initialSpeed, std::string make);
    ~Car();

    void refuel();
    void accelerate();

    // return the net speed of the collision
    double collide(Car &);
    double drive(double miles);
};


#endif //CAR_CAR_H
