#include <stdio.h>  // Includo la libreria per l'input e l'output

char coso (char x); // Dichiaro la funzione per il calcolo della lettera
int main() {
    char x;         // Dichiaro una variabile atta a contenere la scelta

    printf("\nInserire lettera: ");    // Stampo il messaggio a video
    scanf("%c", &x);                   // Acquisisco il carattere
    x = coso(x);                       // Eseguo la funzione
    printf("\nLettera: %c", x);        // Stampo la lettera a video
    return 0;
}
char coso (char x){
    int y = x;                           // Dichiaro una variabile

    /* Indirizzo il calcolo */
    if (y >= 'A' && y <= 'Z'){
        y += 32;                         // Trasformo la lettera in minuscolo
    }
    else if (y >= 'a' && y <= 'z'){
        y -= 32;                         // Trasformo la lettera in maiuscolo
    }
    else {                               // Scelta non consentita
        y = 178 ;                        // Robo strano
    }
    return y;
}