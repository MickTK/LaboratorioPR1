#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m9 = 9, m8 = 8, m7 = 7, m6 = 6, m5 = 5, m4 = 4, m3 = 3, m2 = 2, m1 = 1;   // Definisco le variabili
    int x;                        // Definisco la variabile atta a contenere il valore generato casualmente

    srand(time(NULL));  // Inserisco il seed per la generazione casuale
    x = rand()%101;                  // Genero un valore casuale

    /* Calcolo i multipli di x */
    m1 = x - (x % m1);
    m2 = x - (x % m2);
    m3 = x - (x % m3);
    m4 = x - (x % m4);
    m5 = x - (x % m5);
    m6 = x - (x % m6);
    m7 = x - (x % m7);
    m8 = x - (x % m8);
    m9 = x - (x % m9);
    /* Stampo a video i numeri divisori di x */
    printf("\n\nIl numero %d e' multiplo di: ", x); // Stampo a video il messaggio principale
    if (m1 == x){ printf("1. ");}
    if (m2 == x){ printf("2. ");}
    if (m3 == x){ printf("3. ");}
    if (m4 == x){ printf("4. ");}
    if (m5 == x){ printf("5. ");}
    if (m6 == x){ printf("6. ");}
    if (m7 == x){ printf("7. ");}
    if (m8 == x){ printf("8. ");}
    if (m9 == x){ printf("9.");}
    if (x == 0) {printf("0");}
    printf("\n\n\n");   // Metto degli spazi a caso per renderlo più bellino dopo esere stato eseguito



    return 0;
}