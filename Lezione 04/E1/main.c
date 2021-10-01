#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef enum {A, B, ZERO, AB} GS;       //Definisco un nuovo tipo di varibili (GS)
typedef struct {                        //Definisco la struttura Persona
    int eta;
    float pesoKg;
    int altezzaCm;
} Persona;
typedef struct {                        //Definisco la struttura Paziente
    Persona datiPaziente;
    GS gruppoSanguigno;
    int numeroIdentificativo;
} Paziente;

int main() {
   Paziente ricoverato;                         //Inizializzo la variabile ricoverato
    ricoverato.datiPaziente.eta = 50;
    ricoverato.datiPaziente.pesoKg = 78.32;
    ricoverato.datiPaziente.altezzaCm = 186;
    ricoverato.gruppoSanguigno = B;
    ricoverato.numeroIdentificativo = 123456;

    /* Stampo i dati del ricoverato */
    printf ("Eta' del paziente:%d\n", ricoverato.datiPaziente.eta);
    printf ("Peso del paziente:%.2f\n", ricoverato.datiPaziente.pesoKg);
    printf ("Altezza del paziente:%d\n", ricoverato.datiPaziente.altezzaCm);
    printf ("Gruppo sanguigno del paziente:%d\n", ricoverato.gruppoSanguigno);
    printf ("Numero identificativo del paziente:%d\n", ricoverato.numeroIdentificativo);

    return 0;
}