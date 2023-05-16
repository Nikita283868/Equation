#ifndef EQUATION_EQUATIONTYPE6_H
#define EQUATION_EQUATIONTYPE6_H


#include "../core/Answer.h"

class EquationType6 {
private:
    int type = 6;
    double A;
    double B;
    double C;
public:
    explicit EquationType6(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE6_H
