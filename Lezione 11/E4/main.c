/* Definire una struttura ‘Casa’ composta dai campi ‘numeroPiani’,
 * ‘mq’, ‘prezzo’ e permetta di acquisire i relativi dati
 * attraverso una procedura passando come parametro l’indirizzo
 * di memoria della stessa. Scrivere poi una seconda
 * procedura che ne permetta la stampa. */

#include <stdio.h>
typedef struct {
    int numeroPiani;
    int mq;
    float prezzo;
} Casa;
int main() {
    Casa casa;
    int *p;

    p = &casa;
    printf("Hello, World!\n");
    return 0;
}
void acquisizioneDati(int *p){
    printf("\nInserire numero piani: ");
    scanf("%d", &p->numeropiani);
}