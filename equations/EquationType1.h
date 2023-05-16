#ifndef EQUATION_EQUATIONTYPE1_H
#define EQUATION_EQUATIONTYPE1_H


#include "../core/Answer.h"

class EquationType1 {
private:
    int type = 1;
    double A;
    double B;
    double C;
public:
    explicit EquationType1(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE1_H
