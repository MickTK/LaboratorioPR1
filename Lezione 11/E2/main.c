#include <stdio.h>

void acquisizione(int *p);
void stampa(int *p);
int main() {
    int pippo;
    int *p = NULL;

    p = &pippo;
    acquisizione(p);
    stampa(p);
    return 0;
}
void acquisizione(int *p){
    scanf("%d", &(*p));
}
void stampa(int *p){
    printf("\nValore: %d", *p);
    printf("\nCella di memoria: %d", p);
    printf("\nCella di memoria del puntatore: %d", &p);
}