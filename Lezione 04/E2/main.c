#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Creo l'enumerazione dei giorni della settimana
typedef enum {LUN, MAR, MER, GIO, VEN, SAB, DOM} GiorniSettimana;
// Creo la struttura per il pagamento
typedef struct {
    GiorniSettimana giorno;
    int ore;
    int pagaOraria;
    int codiceDipendente;
    int straordinario;
} Pagamento;

int main() {
    /* Inizializzo i valori delle variabili */
    Pagamento valorePaga;
    valorePaga.giorno = MER ;       // Definisco il giorno
    valorePaga.ore = 8 ;            // Definisco le ore di lavoro
    valorePaga.pagaOraria = 40 ;    // Definisco la paga oraria
    valorePaga.codiceDipendente = 12345 ; // Definisco il codice del dipendente
    valorePaga.straordinario = 0 ;  // Definisco lo straordianario (0 : False) (1 : True)
    float importoStipendio;
    importoStipendio = (float) valorePaga.pagaOraria * valorePaga.ore;  // Calcolo l'importo dello stipendio
    // Calcolo il pagamento dello straordinario
    importoStipendio = importoStipendio  + (valorePaga.straordinario *(importoStipendio / 100 * 20));

    /* Stampo a video */
    printf ("Il giorno %d della settimana, il dipendente con codice %d\n"
            "e' stato pagato %.2f euro avendo lavorato %d ore\n", valorePaga.giorno, valorePaga.codiceDipendente,
            importoStipendio, valorePaga.ore);
    return 0;
}