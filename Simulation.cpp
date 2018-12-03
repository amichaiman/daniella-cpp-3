//
// Created by amichai on 03/12/18.
//

#include "Simulation.h"
#include "Location.h"
#include "Speed.h"
#include "Player.h"
#include <fstream>
#include <iostream>

using namespace std;

inline bool fileStateIsGood(ifstream &file) {
    return !file.fail() && !file.bad();
}
bool Simulation::config(char *filename) {
    ifstream file;

    file.open(filename, ios::in);
    if (!file.is_open()){
        return false;
    }
    Location destination;
    file >> destination.x >> destination.y;

    hockeyTeam.setDestination(destination);

    if (!fileStateIsGood(file) || file.eof()) {
        return false;
    }

    file >> numOfMoves;
    return fileStateIsGood(file);

}

bool Simulation::init(char *filename) {
    ifstream file;

    file.open(filename, ios::in);
    if (!file.is_open()){
        return false;
    }

    int numOfPlayers;
    file >> numOfPlayers;

    if (!fileStateIsGood(file) || file.eof()) {
        return false;
    }
    if (!hockeyTeam.setNumOfPlayers(numOfPlayers)){
        return false;
    }

    Location location;
    Speed speed;
    for (int i=0; i<numOfPlayers; i++){
        file >> location.x >> location.y >> speed.x >> speed.y;
        if (!fileStateIsGood(file)){
            return false;
        }
        hockeyTeam.addPlayer(Player(location,speed,i));
    }
    hockeyTeam.computeGlobalBest();
    return true;
}

void Simulation::run() {
    int i;
    for (i=0; i<numOfMoves; i++){
        hockeyTeam.update();
        field.update(hockeyTeam);
        if (field.destinationReached()) {
            break;
        }
    }
    cout << i << endl;
    hockeyTeam.printPlayersLocations();
}
