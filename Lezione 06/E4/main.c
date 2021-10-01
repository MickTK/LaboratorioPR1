#include <stdio.h>      // Includo la libreria per l'input e l'output
#include <stdbool.h>    // Includo la libreria per il tipo booleano
#include <time.h>       // Includo la libreria del tempo
#include <stdlib.h>     // Includo la libreria per la generazione casuale

int main() {
    _Bool value;        // Definisco la variabile atta a contenere il valore booleano

    srand(time(NULL));  // Identifico il seed per la generazione casuale
    value = rand()%2;                // Genero il valore casuale
    /* Stampo a video il risultato finale */
    switch (value){
        case 0:
            printf("\nIl valore risulta falso\n");  // Stampo a video il risultato falso
            break;
        case 1:
            printf("\nIl valore risulta vero\n");   // Stampo a video il risultato vero
            break;
        default:
            printf("\nWTF?!\n");                    // Stampo a video il risultato non identificato
            break;
    }

    return 0;
}