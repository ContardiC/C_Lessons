#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Il programma deve generare M numeri casuali
dove M è chiesto all'utente tramite una funzione
una funzione primo restituirà 1 se il numero che riceve come parametro è primo altrimenti 0
Il programma deve stabilire quanti tra gli M numeri casuali sono primi
*/

int generaNumeroCasuale(int n);
int m;
void chiediM();
int primo(int);
int main()
{
    chiediM();
    int n=700, i, num, contaPrimi=0;
   
   
    for(i=0;i<m;i++){
        num=generaNumeroCasuale(n);
        if(primo(num)==1){
            contaPrimi++;

        }
    }
    printf("tra i numeri casuali ci sono %d numeri primi\n", contaPrimi);
    return 0;
}

void chiediM()
{
    printf("inserisci il numero per quante volte vuoi inserire un numero \n");
    scanf("%d",&m);
}

int generaNumeroCasuale(int n)
{
    int casuale;
    //srand((unsigned)time(NULL));
    casuale=rand()%n+1;
    printf("%d \n", casuale);
    return casuale;
}

int primo(int num)
{
    int res, div;
    for(div=2;div<num;div++){
        if(num%div==0){
            return 0;
        }
    }
    return 1;
}