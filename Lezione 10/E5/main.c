#include <stdio.h>
#define STOP 10
#define MAX 10
#define MIN 0
#define breakingPoint 0

int main() {
    /* Dichiaro le variabili */
    int inserimento = MAX + 1, iterazione;
    int valore;

    while (inserimento > MAX || inserimento < MIN){

        while (inserimento > MAX || inserimento < MIN) {   // Ripeto in caso di inserimento sbagliato
            printf("\n\nDigitare un numero da 1 a 10");    // Richiesta inserimento
            scanf("%d", &inserimento);                     // Inserimento
            if(inserimento == breakingPoint){break;}                // End
        }
        for (iterazione = MIN; iterazione <= STOP; iterazione++) {  // Stampa per ogni valore dell'iterazione
            if(inserimento == breakingPoint){break;}                // End
            valore = inserimento * iterazione;                      // Calcolo il valore della moltiplicazione
            printf("\n%d * %d = %d", inserimento, iterazione, valore);  // Stampo il risultato a video
        }
        if(inserimento == breakingPoint){break;}    // End
        inserimento = MAX + 1;   // Ripristino il valore per forzare il loop
    }
    return 0;
}