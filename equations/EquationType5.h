#ifndef EQUATION_EQUATIONTYPE5_H
#define EQUATION_EQUATIONTYPE5_H

#include "../core/Answer.h"

class EquationType5 {
private:
    int type = 5;
    double A;
    double B;
    double C;
public:
    explicit EquationType5(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE5_H
