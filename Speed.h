//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_SPEED_H
#define DANIELA_CPP_3_SPEED_H

class Location;

class Speed {
public:
    Speed& operator=(const Speed& rhs);
    Speed operator*(double n);
    Speed operator+(const Location& rhs);

    double x,y;
};


#endif //DANIELA_CPP_3_SPEED_H
