//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_FIELD_H
#define DANIELA_CPP_3_FIELD_H


#include "Cell.h"
#include "Rules.h"
#include "HockeyTeam.h"

class Field {
private:
    Cell field[Rules::MAX_X_SIZE][Rules::MAX_Y_SIZE];
public:
    void update(HockeyTeam &team);
};


#endif //DANIELA_CPP_3_FIELD_H
