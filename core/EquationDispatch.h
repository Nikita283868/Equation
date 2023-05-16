#ifndef EQUATION_EQUATIONDISPATCH_H
#define EQUATION_EQUATIONDISPATCH_H

#include "Answer.h"

class EquationDispatch {
private:
    double A, B, C;
    Answer dispatch();
public:
    explicit EquationDispatch(double A, double B, double C);
    Answer solve();
};


#endif //EQUATION_EQUATIONDISPATCH_H
