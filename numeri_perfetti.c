#include<stdio.h>
int main(){
    int num, i, sommaDiv;
    sommaDiv=0;
    do{
         printf("Inserisci un numero positivo \n");
         scanf("%d",&num);
    }while(num<=0);
   
    for(i=0;i<num;i++){
        if(num%i==0){
            sommaDiv+=i; // sommaDiv=sommaDiv+i;
        }
    }
    if(sommaDiv==num){
        printf("Il numero inserito e' PERFETTO");
    }else{
        printf("Il numero inserito NON e' PERFETTO");
    }
}