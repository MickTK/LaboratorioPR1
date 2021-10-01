#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MIN 0
#define MAX 91

int main() {
    float x;

    srand(time(NULL));
    x = MIN + rand()%(MAX - MIN + 1);

    x += x / 10 , x += x / 100 ;

     printf("%.2fkg \n", x);

    return 0;
}