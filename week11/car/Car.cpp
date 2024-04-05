//
// Created by Jason Wright on 4/4/2024.
//

#include <iostream>
#include "Car.h"

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

Car::~Car() {
    std::cout << "Good by cruel world!" << std::endl;
}
Car::Car() {
    std::cout << "created a car" << std::endl;
    speed = 0.0;
    odoReading = 0.0;
    fuelRemainingInGallons = 1.0;
}

Car::Car(double fuel) {
    std::cout << "created a car" << std::endl;
    speed = 0;
    odoReading = 0;
    fuelRemainingInGallons = fuel;
}