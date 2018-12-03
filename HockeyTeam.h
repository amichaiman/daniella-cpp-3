//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_HOCKEYTEAM_H
#define DANIELA_CPP_3_HOCKEYTEAM_H


#include "Player.h"

class HockeyTeam {
public:
    bool setNumOfPlayers(int numOfPlayers);
    void addPlayer(Player player);
    void computeGlobalBest();
    void setDestination(Location destination);
    Location & getDestination();
    Player& getPlayer(int i);
    void update();

    int getNumOfPlayers() const;

private:
    int numOfPlayers;
    Player* players;
    Location destination;
    Location globalBest;
};


#endif //DANIELA_CPP_3_HOCKEYTEAM_H
