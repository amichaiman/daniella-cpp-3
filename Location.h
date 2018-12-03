//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_LOCATION_H
#define DANIELA_CPP_3_LOCATION_H

class Speed;

class Location {
public:
    Location();
    Location& operator=(const Location& rhs);
    Location operator-(const Location& rhs);
    Location operator+(const Speed& rhs);
    Location operator*(double n);
    double x,y;

    double computeDistance(const Location &location) const;
};


#endif //DANIELA_CPP_3_LOCATION_H
