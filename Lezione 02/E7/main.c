#include <stdio.h>

int main() {
    int num = 1149 ;

    printf("%d \n", num % 10);
    printf("%d \n", num / 10 % 10);
    printf("%d \n", num /100 % 10);
    printf("%d \n", num /1000 % 10);
    return 0;
}