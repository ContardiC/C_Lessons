#include<stdio.h>
int contaCifre(int num){
    int contaC=0;
    if(num<10){
        return 1;
    }
    while(num>1){ 
        num/=10;
        contaC++;
    }
    return contaC;
}
int main(){
    int num;
    do{
         printf("Inserisci un numero positivo \n");
         scanf("%d",&num);
    }while(num<0);
    printf("Il numero inserito ha %d cifre \n",contaCifre(num));
    return 0;
}