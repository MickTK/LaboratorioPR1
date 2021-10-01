#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MIN 1
#define MAX 90
#define RUOTE 11
#define ESTRAZIONI 5

/* Dichiarazione subroutine */
int genRandom();
void stampa(int r, int c, int matrice[r][c]);

int main() {
    int numeri[RUOTE][ESTRAZIONI] = {};
    int i, j;

    srand(time(NULL));
    /* Generazione casuale di tutti i valore della matrice */

    for(i = 0; i < RUOTE; i++){
        for (j = 0; j < ESTRAZIONI; j++) {
            numeri[i][j] = genRandom();
        }
    }
    stampa(RUOTE, ESTRAZIONI, numeri);  // Stampa risultato a video


    return 0;
}
int genRandom(){
    return MIN + rand()%(MAX - MIN + 1);
}   // Generazione casuale di un numero
void stampa(int r, int c, int matrice[r][c]){
    int i, j;

    for(i = 0; i < r; i++){
        printf("\n");
        for(j = 0; j < c; j++){
            printf("%4d", matrice[i][j]);
        }
    }
}   // Stampa risultato a video