#include <iostream>
#include "Answer.h"

Answer::Answer(int type,
               double A,
               double B,
               double C,
               double D,
               double firstRoot,
               double secondRoot)
               :
               type(type),
               A(A),
               B(B),
               C(C),
               D(D),
               firstRoot(firstRoot),
               secondRoot(secondRoot) {
}

void Answer::print() {
    std::cout << "[-----------------------------]" << std::endl;

    std::cout << " Equation: " << A << "x^2";

    if (B >= 0) {
        std::cout << "+" << B << "x";
    } else {
        std::cout << B << "x";
    }

    if (C >= 0) {
        std::cout << "+" << C;
    } else {
        std::cout << C;
    }

    std::cout << "=0" << std::endl;

    std::cout << " Type of equation: " << type << std::endl;
    std::cout << " Discriminant value: " << D << std::endl;
    if (type != 1 && type != 3 && D >= 0) {
        std::cout << " First root: " << firstRoot << std::endl;
    }
    if ((type == 4 || (type == 6 && D != 0) || type == 8) && D >= 0) {
        std::cout << " Second root: " << secondRoot << std::endl;
    }
    if (type == 1 && D >= 0) {
        std::cout << " Root: any value" << std::endl;
    }
    if (type == 3 || D < 0) {
        std::cout << " Root: no one root" << std::endl;
    }
    std::cout << "[-----------------------------]" << std::endl << std::endl << std::endl;
}
