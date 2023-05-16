#include "EquationType3.h"

EquationType3::EquationType3(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType3::solve() {
    double d = (B*B) - (4 * A * C);
    return Answer(type, A, B, C, d, 0, 0);
}
