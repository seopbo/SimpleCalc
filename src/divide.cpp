#include "divide.h"

float Divide::op(float num1, float num2) {
    if (num2 != 0) {
        res = num1 / num2;
    }
    return res;    
}
