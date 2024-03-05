#include <iostream>

using namespace std;

struct Passenger {
    string name;
    char seat;
    int row;
    string flyerId;
};

struct Point {
    double x;
    double y;
    string name;
};

struct Rectangle {
    Point upperLeft, lowerRight;
};

void printPoint(Point p) {
    cout << "(" << p.x << "," << p.y << ",named=" << p.name << ")";
}

Point makeOrigin() {
    Point origin = {0.0, 0.0, "this is at the origin"};
    return origin;
}

double computeSlope(Point p1, Point p2) {
    double rise, run;
    rise = p2.y - p1.y;
    run = p2.x - p1.x;
    return rise/run;
}

int main() {
    int foo = 5;


//    struct Rectangle {
//        Point upperLeft, lowerRight;
//    };
    Rectangle r1;
    // upper left is at (1, 2)
    // lower right is at (5, 0)
    r1.upperLeft = {1, 2};
    r1.lowerRight = {5, 0};
    cout << r1.upperLeft.x << endl;
    cout << "slope: " << computeSlope(r1.upperLeft, r1.lowerRight) << endl;

    Point firstPoint = {4.0, 5.0}, secondPoint = {1.0, 2.0};

    secondPoint = makeOrigin();
    printPoint(firstPoint);
    printPoint(secondPoint);
    cout << endl;
    return 0;
}
