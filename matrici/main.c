#define R 2
#define C 3
#include<stdio.h>
int main(){
    int matrice[2][3];
    int i, j;
    int somma;
    // acquisizione elementi della matrice da standard input
    for(i=0; i<R; i++){
        for(j=0;j<C;j++){
            printf("\nInserisci l'elemento in posizione (%d ,%d) => ",i,j);
            scanf("%d",&matrice[i][j]);
        }
    }
    // stampa matrice su standard output
    printf("\n");
    for(i=0; i<R; i++){
        for(j=0;j<C;j++){
            printf("%5d",matrice[i][j]);
        }
        printf("\n");
    }
    // somma di tutti gli elementi della matrice
    printf("\n");
    somma = 0;
    for(i=0; i<R; i++){
        for(j=0;j<C;j++){
            somma += matrice[i][j];
        }  
    }
    printf("\nLa somma degli elementi della matrice vale: %d", somma);
    // somma di ogni riga
    printf("\n");
   
    for(i=0; i<R; i++){
        somma = 0;
        for(j=0;j<C;j++){
            somma += matrice[i][j];
        }  
        printf("\nLa somma della riga %d vale: %d",i,  somma);
    }
}