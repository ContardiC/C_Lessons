#include<stdio.h>
int main(){
    int num, i, somma_div;
    somma_div=0;
    do{
         printf("Inserisci un numero positivo \n");
         scanf("%d",&num);
    }while(num<=0);
   
    for(i=0;i<num;i++){
        if(num%i==0){
            somma_div+=i; // sommaDiv=sommaDiv+i;
        }
    }
    if(somma_div==num){
        printf("Il numero inserito e' PERFETTO");
    }else{
        printf("Il numero inserito NON e' PERFETTO");
    }
}