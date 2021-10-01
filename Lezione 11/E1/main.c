#include <stdio.h>

void acquisizione(int *p);
int main() {
    int pippo;
    int *p = NULL;

    p = &pippo;
    acquisizione(p);
    printf("\n%d", pippo);
    return 0;
}
void acquisizione(int *p){
    scanf("%d", &(*p));
}
