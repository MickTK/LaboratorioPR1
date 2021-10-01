#include <stdio.h>
/* Definisco un enumarazione */
typedef enum {FALSO, VERO} Boo;

int main() {
    /* Dichiaro le variabili */
    Boo v1, v2;
    Boo value;
/* Immetto i valori tramite scanf */
    printf("Immettere primo valore (0 o 1): ");
    scanf("%d", &v1);     //Primo valore
    printf("Immettere secondo valore (0 o 1): ");
    scanf("%d", &v2);       //Secondo valore
    /* Calcolo e stampo i risultati a video */
    value = v1 && v2;
    printf("\nv1 && v2 = %d", value);
    value = v1 || v2;
    printf("\nv1 || v2 = %d", value);
    value = !v1;
    printf("\n!v1 = %d", value);
    value = !v2;
    printf("\n!v2 = %d", value);


    return 0;
}