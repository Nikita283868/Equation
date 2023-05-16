#ifndef EQUATION_EQUATIONTYPE8_H
#define EQUATION_EQUATIONTYPE8_H


#include "../core/Answer.h"

class EquationType8 {
private:
    int type = 8;
    double A;
    double B;
    double C;
public:
    explicit EquationType8(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE8_H
