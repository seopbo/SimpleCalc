#pragma once
#include "ioperator.h"

class Mul : public IOperator {
    public:
        virtual float op(float num1, float num2);
};
