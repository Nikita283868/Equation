#ifndef EQUATION_EQUATIONTYPE3_H
#define EQUATION_EQUATIONTYPE3_H

#include "../core/Answer.h"

class EquationType3 {
private:
    int type = 3;
    double A;
    double B;
    double C;
public:
    explicit EquationType3(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE3_H
