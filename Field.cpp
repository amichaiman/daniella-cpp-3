//
// Created by amichai on 03/12/18.
//

#include "Field.h"

void Field::update(HockeyTeam &team) {
    for (int i=Rules::MIN_X_SIZE; i<Rules::MAX_X_SIZE; i++) {
        for (int j=Rules::MIN_X_SIZE; j<Rules::MAX_X_SIZE; j++) {
            field[i][j].setNumOfPlayers(0);
            for (int k=0; k<team.getNumOfPlayers(); k++) {
                if (hasPlayer(team.getPlayer(k), i, j)) {
                    field[i][j]++;
                }
            }
        }
    }
}
