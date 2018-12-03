//
// Created by amichai on 03/12/18.
//

#include <cmath>
#include "Location.h"
#include "Speed.h"

Location::Location(): x(0), y(0){}

Location &Location::operator=(const Location &rhs) {
    if (this == &rhs) {
        return *this;
    }
    x = rhs.x;
    y = rhs.y;
    return *this;
}

inline double square(double n) {
    return n*n;
}

double Location::computeDistance(const Location &location) const {
    return (sqrt(square(x-location.x) + square(y-location.y)));
}

Location Location::operator-(const Location &rhs) {
    Location newLocation;
    newLocation.x = x-rhs.x;
    newLocation.y = y-rhs.y;
    return newLocation;
}

Location Location::operator*(double n) {
    Location newLocation;
    newLocation.x = x*n;
    newLocation.y = y*n;
    return newLocation;
}

Location Location::operator+(const Speed &rhs) {
    Location newLocation;
    newLocation.x = x+rhs.x;
    newLocation.y = y+rhs.y;

    return newLocation;
}
