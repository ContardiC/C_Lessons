#include<stdio.h>
#define DIM 5
int max(int mult[], int dim);
int fattoriale(int n);
int fattorialeDelMinimo(int mult[], int n);
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
       if(mult[i]<min){
        min=mult[i];
       } 
    }
    printf("\nIl valore minimo vale: %d\n",min);
    printf("\n Il valore massimo vale: %d\n",max(mult,10));

    // assegnare un valore intero casuale (compreso tra 50 e 500) 
    // agli elementi di un vettore di 40 elementi (ogni elemento deve contenere un numero casuale diverso)
    
    printf("\n Il fattoriale del minimo :%d\n",fattorialeDelMinimo(mult,10));


    return 0;

}
int max(int mult[], int dim){
    int m,i;
    m=mult[0];
    for(i=0;i<dim;i++){
        if(mult[i]>m){
            m=mult[i];
        }
    }
    return m;
}
int fattoriale(int n){
    int i,res=1;
    for(i=n;i>1;i--){
        res*=i;
    }
    return res;
}
int fattorialeDelMinimo(int mult[], int n){
    int min,i;
    min=mult[0];
    for(i=1;i<n;i++){
       if(mult[i]<min){
        min=mult[i];
       } 
    }
    return fattoriale(min);
}