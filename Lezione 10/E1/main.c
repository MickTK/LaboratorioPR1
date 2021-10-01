#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 0
#define MAX 150

int generatore ();
int main() {
    int numero, iterazione, somma = 0, media = 0, nMin = MAX, nMax = MIN;

    srand(time(NULL));
    for (iterazione = 0; iterazione < MAX; iterazione++) {
        numero = generatore();
        printf("\n%d", numero);
        somma += numero;
        if (numero < nMin) {nMin = numero;}
        if (numero > nMax) {nMax = numero;}
    }
    media = somma / iterazione;
    printf("\nSomma: %d", somma);
    printf("\nMedia: %d", media);
    printf("\nNumero minore: %d, numero maggiore: %d", nMin, nMax);

    return 0;
}
int generatore () {
    int num;

    num = MIN + rand()%(MAX - MIN + 1);
    return num;
}