//
// Created by amichai on 03/12/18.
//

#include <cstdlib>
#include "Player.h"

Player::Player(Location location, Speed speed, int id)
: cur(location), speed(speed), id(id){
    personalBest = cur;
}

Player::Player() {

}

int Player::getId()const {
    return id;
}

Player &Player::operator=(const Player &rhs) {
    if (this == &rhs){
        return *this;
    }
    personalBest = rhs.getPersonalBest();
    speed = rhs.getSpeed();
    cur = rhs.getCur();
    id = rhs.getId();
    return *this;
}

const Location &Player::getCur() const {
    return cur;
}

const Location &Player::getPersonalBest() const {
    return personalBest;
}

const Speed &Player::getSpeed() const {
    return speed;
}

//    speed.operator*(0.25);
void Player::update(Location globalBest) {
    Speed speedTplusOne = speed*0.25 + (globalBest-cur)*randZeroToOne() + (personalBest-cur)*randZeroToOne();
    cur = cur+speed;
    speed = speedTplusOne;
}

double Player::randZeroToOne() {
    return static_cast<double>(rand())/RAND_MAX;
}

