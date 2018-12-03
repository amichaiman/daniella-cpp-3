//
// Created by amichai on 03/12/18.
//

#include <climits>
#include <iostream>
#include "HockeyTeam.h"
#include "Rules.h"

bool HockeyTeam::setNumOfPlayers(int numOfPlayers) {
    if (numOfPlayers < Rules::MIN_NUM_OF_PLAYERS || numOfPlayers > Rules::MAX_NUM_OF_PLAYERS) {
        return false;
    }
    HockeyTeam::numOfPlayers = numOfPlayers;
    players = new Player[numOfPlayers];
    return true;
}

void HockeyTeam::addPlayer(Player player) {
    players[player.getId()] = player;
}

void HockeyTeam::computeGlobalBest() {
    double shortestRoute = INT_MAX;
    double curRoute;

    for (int i=0; i<numOfPlayers; i++){
        curRoute = players[i].getCur().computeDistance(destination);
        if (curRoute < shortestRoute){
            shortestRoute = curRoute;
            globalBest = players[i].getCur();
        }
    }
}

void HockeyTeam::setDestination(Location destination) {
    HockeyTeam::destination = destination;
}

Location &HockeyTeam::getDestination() {
    return destination;
}

void HockeyTeam::update() {
    for (int i=0; i<numOfPlayers; i++){
        players[i].update(globalBest);
    }
}

int HockeyTeam::getNumOfPlayers() const {
    return numOfPlayers;
}

Player &HockeyTeam::getPlayer(int i) {
    return players[i];
}
