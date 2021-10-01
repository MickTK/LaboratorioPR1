#include <stdio.h>
#define SCONTO 70

int main() {
    float importoOggetto = 10 ;

    printf("Importo iniziale: %.2f EUR\n"
           "Sconto applicato (%d%%): %.2f EUR\n"
           "Importo finale: %.2f EUR\n",
           importoOggetto, SCONTO, (importoOggetto/100)*SCONTO, importoOggetto-((importoOggetto/100)*SCONTO));

    return 0;
}