#ifndef EQUATION_EQUATIONTYPE4_H
#define EQUATION_EQUATIONTYPE4_H

#include "../core/Answer.h"

class EquationType4 {
private:
    int type = 4;
    double A;
    double B;
    double C;
public:
    explicit EquationType4(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONTYPE4_H
