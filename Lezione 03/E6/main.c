#include <stdio.h>

int main() {
    char a, b, c;

    // Acquisizione caratteri
    scanf ("%c", &a);
    scanf ("%c", &b);
    scanf ("%c", &c);
    // Nota: anche lo spazio come l'invio viene salvato nelle variabili

    printf("Lettere acquisite: %c, %c, %c", a, b, c); // Stampa caratteri
    printf ("\n"); // Spazio
    printf("Corrispondende valore intero delle lettere acquisite: %d, %d, %d", a, b, c); // Stampa interi

    return 0;
}