#include "calculator.h"

int main() {
    Calculator calc;
    while (true) {
        calc.input();
        calc.calculate();
        calc.output();
    }
    return 0;
}
