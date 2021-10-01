#include <stdio.h>
#define T_CONV 1.17


int main() {
    float importoEuro = 19.99;
    printf("Importo in dollari pari a %.2f USD\n", importoEuro * T_CONV);
    return 0;
}