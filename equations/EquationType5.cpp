#include "EquationType5.h"

EquationType5::EquationType5(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType5::solve() {
    double d = (B*B) - (4 * A * C);
    double firstRoot = -C / B;
    return Answer(type, A, B, C, d, firstRoot, 0);
}
