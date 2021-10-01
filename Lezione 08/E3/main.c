#include <stdio.h>

void calcoloPrimi(int x);    // Definisco una subroutine

int main() {
    int x;

    printf("\nNumeri primi da generare (Max 10 e min 1): ");
    scanf("%d", &x);
    if (x > 10 || x <= 0){
        printf("n non valido");
    }
    else {
        calcoloPrimi(x);
    }
    return 0;
}

void calcoloPrimi(int x){
    static int y = 0;

    printf("\nNumeri primi:");

    if (x != y){
        printf(" %d", y);
        y++;
        calcoloPrimi(x);
    }
}