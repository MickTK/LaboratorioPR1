#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MIN 0
#define MAX 90

int main() {
    int altezzaMin = 0.00, altezzaMax = 2.50 ;
    float kg , metri ;
    float BMI;

    srand(time(NULL));

    // variabile randomica kg
    kg = MIN + rand()%(MAX - MIN + 1);
    kg += kg / 10 , kg += kg / 100 ;

    // variabile randomica metri
    metri = altezzaMin + rand()%(altezzaMax - altezzaMin + 1);
    metri += metri / 10 , metri += metri / 100 ;

    BMI = kg / (metri * metri);
    printf("BMI = %.2f\n", BMI);
    return 0;
}