#ifndef EQUATION_ANSWER_H
#define EQUATION_ANSWER_H


class Answer {
private:
    int type;
    double A, B, C;
    double D;
    double firstRoot;
    double secondRoot;
public:
    explicit Answer(int type, double A, double B, double C, double D, double firstRoot, double secondRoot);
    void print();
};


#endif //EQUATION_ANSWER_H
