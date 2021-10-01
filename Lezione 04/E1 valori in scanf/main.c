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
    /*ricoverato.datiPaziente.eta = 50;
    ricoverato.datiPaziente.pesoKg = 78.32;
    ricoverato.datiPaziente.altezzaCm = 186;
    ricoverato.gruppoSanguigno = B;
    ricoverato.numeroIdentificativo = 123456;*/

    printf("Eta' del paziente:\n");                  //Messaggio a video
    scanf("%d", &ricoverato.datiPaziente.eta);       //Inserisco l'eta' del paziente
    printf("Peso del paziente:\n");                  //Messaggio a video
    scanf("%f", &ricoverato.datiPaziente.pesoKg);     //Inserisco il peso del paziente
    printf("Altezza del paziente:\n");                //Messaggio a video
    scanf("%d", &ricoverato.datiPaziente.altezzaCm);  //Inserisco l'altezza del paziente
    printf("Gruppo sanguigno del paziente:\n");       //Messaggio a video
    scanf("%d", &ricoverato.gruppoSanguigno);         //Inserisco il gruppo sanguigno del paziente
    printf("Numero identificativo del paziente:\n"); //Messaggio a video
    scanf("%d", &ricoverato.numeroIdentificativo);       //Inserisco il numero identificativo del paziente



    /* Stampo i dati del ricoverato a video */
    printf ("Eta' del paziente:%d\n", ricoverato.datiPaziente.eta);
    printf ("Peso del paziente:%.2f\n", ricoverato.datiPaziente.pesoKg);
    printf ("Altezza del paziente:%d\n", ricoverato.datiPaziente.altezzaCm);
    printf ("Gruppo sanguigno del paziente:%d\n", ricoverato.gruppoSanguigno);
    printf ("Numero identificativo del paziente:%d\n", ricoverato.numeroIdentificativo);

    return 0;
}