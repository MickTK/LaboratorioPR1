#include <stdio.h>
#include <stdlib.h >
#include <time.h>
#define MIN 0
#define MAX 100

int main() {
    int x = 0;
    srand(time(NULL));
    x = MIN + rand()%(MAX-MIN+1);

    printf("Numero random: %d \n", x);
    return 0;
}