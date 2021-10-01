#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* Includo le librerie per la generazione automatica dei valori */
#include <time.h>
#include <stdlib.h>
/* Definisco le macro legate alle variabili */
#define MINETA 10
#define MAXETA 80
#define MINPESO 3000
#define MAXPESO 8000
#define MINALTEZZA 120
#define MAXALTEZZA 190
#define MINGS 0
#define MAXGS 3
#define MINID 1000
#define MAXID 9999


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
   srand(time(NULL));          // Seed per la generazione randomica

    /* Genero un valore randomico delle variabili */
    ricoverato.datiPaziente.eta = MINETA + rand()%(MAXETA - MINETA + 1);
    ricoverato.datiPaziente.pesoKg = (MINPESO + rand()%(MAXPESO - MINPESO + 1)) / 100;
    ricoverato.datiPaziente.altezzaCm = MINALTEZZA + rand()%(MAXALTEZZA - MINALTEZZA + 1);
    ricoverato.gruppoSanguigno = MINGS + rand()%(MAXGS - MINGS + 1);
    ricoverato.numeroIdentificativo = MINID + rand()%(MAXID - MINID + 1);

    /* Stampo i dati del ricoverato */
    printf ("Eta' del paziente:%d\n", ricoverato.datiPaziente.eta);
    printf ("Peso del paziente:%.2f\n", ricoverato.datiPaziente.pesoKg);
    printf ("Altezza del paziente:%d\n", ricoverato.datiPaziente.altezzaCm);
    printf ("Gruppo sanguigno del paziente:%d\n", ricoverato.gruppoSanguigno);
    printf ("Numero identificativo del paziente:%d\n", ricoverato.numeroIdentificativo);

    return 0;
}