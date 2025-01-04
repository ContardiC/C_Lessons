/*
.Realizzare un programma in C, che utilizzi strutture dati dinamiche, per gestire una lista di spese fatte da un gruppo di amici che di volta in volta ciascuno pagherà la spesa. Per ogni spasa fatta si dovrà annotare il valore della spesa, la data e chi ha effettuato l'esborso. Il programma dovrà permettere di:
1) Inserire una spesa
2) Visualizzare tutte le spese effettuate con data e persona che ha pagato
3) Calcolare la spesa fatta da una persona in particolare indicata dall'utente
4) Creare un'altra lista con l'elenco di tutte le persone che hanno partecipato alle spese (E' di difficoltà maggiore)
5) Memorizzare in file tutte le spese effettuate
6) Acquisire da un file di spese effettuate per inserirle in memoria centrale con una struttura dinamica a lista.
Si consiglia di memorizzare nel file nel formato CSV
*/
#include <stdio.h>
#include <stdllib.h>
typef struct Spesa{
    double importo;
    char persona[51];
    char data[11]; // DD-MM-YYYY
}Spesa;
typedef struct node{
    Spesa spesa;
    struct node *next;
}node;
int main(){
    node *head = NULL;

}