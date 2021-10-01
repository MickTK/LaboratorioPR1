#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 10000

int numeroRandom (int min, int max);
void stampa (int value);
int main() {
    int min = MIN, max = MAX, value;   // Dichiaro le variabili range della generazione casuale

    srand(time(NULL));  // Definisco il seed per la generazione casuale
    value = numeroRandom (min, max);    // Assegno i valori alla subroutine
    stampa(value);
    return 0;
}
/* Dichiaro una subroutine per il calcolo del numero */
int numeroRandom (int min, int max){
    int num;
    num = min + rand()%(max - min + 1);
    return num;
}
void stampa (int value) {
    /* Stampo a video il numero generato casualmente */
    printf("\n\nNumero generato casualmente: %d\n\n", value);
}