#include <stdio.h>
#include <stdbool.h>

void inserimentoCarattere();
int main() {
    inserimentoCarattere();
    return 0;
}
void inserimentoCarattere() {
    char lettera;
    _Bool risultato;

    do {
        risultato = 1;
        printf("\nInserisci lettera 'S' o 'N'");
        scanf("%c", &lettera);
        switch (lettera){
            case 'N':
            case 'n':
            case 'S':
            case 's':
                risultato = 1;
                break;
            default:
                risultato = 0;
                printf("\nLettera non consentita");
        }
    } while (risultato == 0);
}