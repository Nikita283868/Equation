#include "EquationType7.h"

EquationType7::EquationType7(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType7::solve() {
    double d = (B*B) - (4 * A * C);
    return Answer(type, A, B, C, d, 0, 0);
}
