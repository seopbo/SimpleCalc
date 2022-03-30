#pragma once
#include "ioperator.h"

class Calculator {
    public:
        void input();
        void calculate();
        void output();

    private:
        float num1, num2;
        char op;
        float res;
        IOperator* iop;
};
