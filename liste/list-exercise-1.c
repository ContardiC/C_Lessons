/*
Gestire una lista semplice (informazione un semplice intero)  con un semplice switch case (senza funzioni): per 
- inserire un nodo alla volta
- per visualizzare tutta la lista
- per trovare il valore massimo e in quale posizione si trova
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node *next;
}node;
int main(){
    node *list = NULL;
    int opt;
    do{
        printf("1 - Insert a number.\n");
        printf("2 - Show the list.\n");
        printf("3 - Shows the number with the largest value and its position.\n");
        scanf("%i",&opt);
    }while(opt!=0);
}