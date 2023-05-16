#include "EquationType8.h"

EquationType8::EquationType8(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType8::solve() {
    double d = (B*B) - (4 * A * C);
    double SecondRoot = -B/A;
    return Answer(type, A, B, C, d, 0, SecondRoot);
}
