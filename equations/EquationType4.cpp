#include "EquationType4.h"
#include <cmath>

EquationType4::EquationType4(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType4::solve() {
    double d = (B*B) - (4 * A * C);
    double firstRoot = (sqrt(d) - B) / (2 * A);
    double SecondRoot = (sqrt(d) + B) / (2 * A);
    return Answer(type, A, B, C, d, firstRoot, SecondRoot);
}
