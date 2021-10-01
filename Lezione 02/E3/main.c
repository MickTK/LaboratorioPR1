#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 100

int main() {
    int a, b;
    int calc;
    srand(time(NULL));

    a = MIN + rand()%(MAX - MIN + 1);
    b = MIN + rand()%(MAX - MIN + 1);

    printf("Valore variabili: a = %d, b = %d\n", a, b); // Stampa valori
    calc = a++ * b;
    printf("a++ * b = %d\n", calc); // Stampa operazione
    calc = a * --b;
    printf ("a * --b = %d\n", calc); // Stampa operazione


    return 0;
}