#include<stdio.h>
#define DIM 5
int main(){
    int vet[DIM];
    int i;
    // iniz diretta
    vet[0] = 34;
    //iniz con ciclo
    for(i=0;i<DIM;i++){
        vet[i]=i+1;
    }
    // stampo una posizione
    printf("Elemento in prima posizione %d \n",vet[0]);

    // stampo tutto il vettore
    printf("TUTTO IL VETTORE \n");
    for(i=0;i<DIM;i++){
        printf(" %d \t",vet[i]);
    }
    // Inizializzare un vettore con i primi 10 multipli di 3 
    int mult[10];
    for(i=0;i<10;i++){
        mult[i]=3*(i+1);
    }
    // stampa del vettore di multipli
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d \t",mult[i]);
    }
    // Ricercare il minimo
    int min;
    min=mult[0];
    for(i=1;i<10;i++){
       if(vet[i]<min){
        min=vet[i];
       } 
    }
    printf("\nIl valore minimo vale: %d\n",min);


    return 0;


    




}