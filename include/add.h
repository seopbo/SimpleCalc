#pragma once
#include "ioperator.h"

class Add : public IOperator {
    public:
        float op(float num1, float num2);
    private:
        float res;
};
