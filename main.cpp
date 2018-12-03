#include <iostream>
#include <cstdlib>
#include "Simulation.h"

using namespace std;

inline void invalidInput(int exitCode) {
    cerr << "ERROR: Invalid input." << endl;
    exit(exitCode);
}
int main(int argc, char** argv) {
    if (argc != 3){
        invalidInput(1);
    }
    Simulation simulation;
    if (!simulation.config(argv[1])){
        invalidInput(2);
    }
    if (!simulation.init(argv[2])){
        invalidInput(3);
    }
    simulation.run();

    return 0;
}