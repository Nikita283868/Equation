#ifndef EQUATION_EQUATIONTYPE7_H
#define EQUATION_EQUATIONTYPE7_H


#include "../core/Answer.h"

class EquationType7 {
private:
    int type = 7;
    double A;
    double B;
    double C;
public:
    explicit EquationType7(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE7_H
