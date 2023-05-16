#include <iostream>
#include "EquationDispatch.h"

#include "../equations/EquationType1.h"
#include "../equations/EquationType2.h"
#include "../equations/EquationType3.h"
#include "../equations/EquationType4.h"
#include "../equations/EquationType5.h"
#include "../equations/EquationType6.h"
#include "../equations/EquationType7.h"
#include "../equations/EquationType8.h"

EquationDispatch::EquationDispatch(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationDispatch::solve() {
    return dispatch();
}

Answer EquationDispatch::dispatch() {
    if (A == 0 && B == 0 && C == 0) {
        return EquationType1(A, B, C).solve();
    } else if (A != 0 && B == 0 && C == 0) {
        return EquationType2(A, B, C).solve();
    } else if (A == 0 && B == 0 && C != 0) {
        return EquationType3(A, B, C).solve();
    } else if (A != 0 && B == 0 && C != 0) {
        return EquationType4(A, B, C).solve();
    } else if (A == 0 && B != 0 && C != 0) {
        return EquationType5(A, B, C).solve();
    } else if (A != 0 && B != 0 && C != 0) {
        return EquationType6(A, B, C).solve();
    } else if (A == 0 && B != 0 && C == 0) {
        return EquationType7(A, B, C).solve();
    } else if (A != 0 && B != 0 && C == 0) {
        return EquationType8(A, B, C).solve();
    } else {
        std::cout << "[-----------------------------]" << std::endl;
        std::cout << " Undefined type of equation." << std::endl;
        std::cout << "[-----------------------------]" << std::endl;
        return Answer(0, 0, 0, 0, 0, 0, 0);
    }
}
