//
// Created by amichai on 03/12/18.
//

#include "Cell.h"

Cell &Cell::operator++(int) {
    numOfPlayers++;
    return *this;
}

Cell &Cell::operator--(int) {
    numOfPlayers--;
    return *this;
}

int Cell::getNumOfPlayers() const {
    return numOfPlayers;
}
