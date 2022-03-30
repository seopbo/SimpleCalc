#pragma once
#include "ioperator.h"

class Divide : public IOperator {
    public:
        float op(float num1, float num2);
    private:
        float res;
};
