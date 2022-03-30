#pragma once
#include "ioperator.h"

class Sub : public IOperator {
    public:
        float op(float num1, float num2);
    private:
        float res;
}; 
