#include "EquationType1.h"

EquationType1::EquationType1(double A, double B, double C) : A(A), B(B), C(C) {
}

Answer EquationType1::solve() {
    return Answer(type, A, B, C, 0, 0, 0);
}

