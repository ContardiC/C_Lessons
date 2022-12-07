#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

#define MAX 10
#define MIN -10

int n; // numero di caselle

int numeroTurni();
int lancioDado();
int main(){
    int n,i;
    srand(time(NULL));
    do{
        printf("Digita il numero di caselle: ");
        scanf("%d",&n);
    }while(n<=0);
    // genero la scacchiera
    int scacchiera[n];
    for(i=0;i<n;i++){
        9-0+1+0
        scacchiera[i]=rand()%(MAX-MIN+1)+MIN;
    }
    int k,cambio,doppi,dado1,dado2,posizione,saldo=0;
    k=numeroTurni();
    i=0;
    posizione=0;
    do{ 
        doppi=0;
        do{   
             //
            cambio=0;
            dado1=lancioDado();
            dado2=lancioDado();
            printf("GIRO (%d) -> LANCIO (%d) -> Valore dadi : %d\n",(i+1),(doppi+1),(dado1+dado2));
            if(dado1==dado2){
                printf("*** DADI CON LA STESSA FACCIA *** \n");
                doppi++;
            }else{
                cambio=1;
            }
        }while(doppi<3 && cambio==0);
        i++;
        posizione+=dado1+dado2;
        if(posizione==n){
            posizione=0;
        }
        if(posizione>n){
            posizione=posizione-n;
            //posizione%=40;
            //TODO: aggiungere passa dal via?
        }
        printf("Ora sei alla casella [%d] \t",posizione);
        saldo-=scacchiera[posizione];
        printf("Nuovo saldo: %d\n",saldo);
    }while(i<k);
    return 0;
}
int numeroTurni(){
    int k;
    do{
        printf("Quanti turni vuoi giocare? ");
        scanf("%d",&k);
    }while(k<=0);
    return k;
}
int lancioDado(){ 
    int faccia;
    faccia=(int)rand() % 6 + 1;
    return faccia;
}
