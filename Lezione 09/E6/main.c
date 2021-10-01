#include <stdio.h>
#define SIMBOLO 'T'
#define SPAZIO ' '

int main() {
    int numeroRighe = 0, numeroSimboli = 0, numeroSpazi = 9;
    int countRighe = 0, countSimboli = 0, countSpazi = -9;


    while (numeroRighe < 10) {
        countSpazi = -9;
        numeroSpazi -= 1;
        countSimboli = 0;
        numeroSimboli += 2;

        while (countSpazi != numeroSpazi) {
            printf ("%c", SPAZIO);
            countSpazi += 1;
        }
        while (numeroSimboli != countSimboli) {
            printf (" %c", SIMBOLO);
            countSimboli += 1;
        }
        printf ("\n");
        numeroRighe += 1;
    }





    return 0;
}

