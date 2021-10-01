#include <stdio.h>

int main() {
   int numeroIntero1 = 5, numeroIntero2 = 30;
   int risultatoIntero;
   float numeroFloat1, numeroFloat2;
   float risultatoFloat;

    // Addizione int
    risultatoIntero = numeroIntero1 + numeroIntero2 ;
    printf("La somma dei numeri interi vale: %d \n", risultatoIntero);

    // Sottrazione int
    risultatoIntero = numeroIntero1 - numeroIntero2 ;
    printf("La sottrazione dei numeri interi vale: %d \n", risultatoIntero);

    // Moltiplicazione int
    risultatoIntero = numeroIntero1 * numeroIntero2 ;
    printf("La moltiplicazione dei numeri interi vale: %d \n", risultatoIntero);

    // Divisione int
    risultatoFloat = (float) numeroIntero1 / numeroIntero2 ;
    printf("La divisione dei numeri interi vale: %f \n", risultatoFloat);

    // Addizione float
    risultatoFloat = numeroFloat1 + numeroFloat2 ;
    printf("La somma dei numeri decimali vale: %f \n", risultatoFloat);

    // Sottrazione float
    risultatoFloat = numeroFloat1 - numeroFloat2 ;
    printf("La sottrazione dei numeri decimali vale: %f \n", risultatoFloat);



    return 0;
}