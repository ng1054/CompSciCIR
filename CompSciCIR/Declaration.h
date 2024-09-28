#pragma once


#include <iostream>
#include <cmath>

int ORGate(int alpha, int beta) {
    if (alpha + beta == 0) {
        return 0;
    }
    else {
        return 1;
    }
}



int opposite(int const num) {

    switch (num) {
    case 1:
        return 0;
        break;
    case 0:
        return 1;
        break;
    } 
    std::cout << "Switch somehow reached default\n";
    return 0;
}




