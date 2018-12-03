//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_PLAYER_H
#define DANIELA_CPP_3_PLAYER_H


#include "Location.h"
#include "Speed.h"

class Player {
public:
    Player();
    Player(Location location, Speed speed, int id);
    Player& operator=(const Player& rhs);
    int getId()const;
    const Location &getCur() const;
    const Location &getPersonalBest() const;
    const Speed &getSpeed() const;

    void update(Location globalBest);

private:
    Location personalBest;
    Location cur;
    Speed speed;
    int id;

    double randZeroToOne();
};


#endif //DANIELA_CPP_3_PLAYER_H
