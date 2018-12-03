//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_SIMULATION_H
#define DANIELA_CPP_3_SIMULATION_H


#include "HockeyTeam.h"
#include "Field.h"

class Simulation {

public:
    bool config(char *filename);
    bool init(char *filename);
    void run();
private:
    HockeyTeam hockeyTeam;
    Field field;
    int numOfMoves;
};


#endif //DANIELA_CPP_3_SIMULATION_H
