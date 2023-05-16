#ifndef EQUATION_EQUATIONTYPE2_H
#define EQUATION_EQUATIONTYPE2_H


#include "../core/Answer.h"

class EquationType2 {
private:
    int type = 2;
    double A;
    double B;
    double C;
public:
    explicit EquationType2(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE2_H
