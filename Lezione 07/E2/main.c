#include <stdio.h>
#define GIORNI_MESE 30
#define GIORNI_ANNO 365

typedef struct{
    int giorno;
    int mese;
    int anno;
} DataNascita;
DataNascita acquisizioneDati();
void stampa(DataNascita a);

int main() {
    DataNascita x, y, z;
    int counterX, counterY, counterZ;

    /* Acquisizione dei dati */
    x = acquisizioneDati();
    y = acquisizioneDati();
    z = acquisizioneDati();
    /* Calcolo delle eta' */
    counterX = (30 - x.giorno) + ((12 - x.mese) * GIORNI_MESE) + ((3000 - x.anno) * GIORNI_ANNO);
    counterY = (30 - y.giorno) + ((12 - y.mese) * GIORNI_MESE) + ((3000 - y.anno) * GIORNI_ANNO);
    counterZ = (30 - z.giorno) + ((12 - z.mese) * GIORNI_MESE) + ((3000 - z.anno) * GIORNI_ANNO);
    /* Stampo a video le date in base all'eta' */
    printf("\nIn ordine di età abbiamo:");
    if (counterX > counterY){
        if (counterY > counterZ){
            stampa(x);
            stampa(y);
            stampa(z);
        }
        else {
            stampa(x);
            stampa(z);
            stampa(y);
        }
    }
    else if (counterY > counterX){
        if (counterX > counterZ){
            stampa(y);
            stampa(x);
            stampa(z);
        }
        else {
            stampa(y);
            stampa(z);
            stampa(x);
        }
    }
    else if (counterZ > counterX){
        if (counterX > counterY){
            stampa(z);
            stampa(x);
            stampa(y);
        }
        else {
            stampa(z);
            stampa(y);
            stampa(x);
        }
    }

    return 0;
}
DataNascita acquisizioneDati(){
    DataNascita x;

    /* Inserimento dei dati da parte dell'utente */
    printf("\nInserire giorno di nascita: ");
    scanf("%d", &x.giorno);
    printf("\nInserire numero mese: ");
    scanf("%d", &x.mese);
    printf("\nInserire anno: ");
    scanf("%d", &x.anno);

    return x;
}
void stampa(DataNascita a){
    /* Stampo a video le date */
    printf("\nGiorno di nascita: %d", a.giorno);
    printf("\nMese: %d", a.mese);
    printf("\nAnno: %d", a.anno);
}