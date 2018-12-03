//
// Created by amichai on 03/12/18.
//

#ifndef DANIELA_CPP_3_CELL_H
#define DANIELA_CPP_3_CELL_H


class Cell {
public:
    Cell& operator++(int);
    Cell& operator--(int);
    int getNumOfPlayers() const;
private:
    int numOfPlayers;

};


#endif //DANIELA_CPP_3_CELL_H
