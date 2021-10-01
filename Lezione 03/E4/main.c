#include <stdio.h>

int main() {
    float kg = 58.25, metri = 1.76;
    float BMI;

    BMI = kg / (metri * metri);
    printf("BMI = %.2f\n", BMI);
    return 0;
}