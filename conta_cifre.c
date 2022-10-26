#include<stdio.h>
int conta_cifre(int num){
    int conta_c=0;
    if(num<10){
        return 1;
    }
    while(num>1){ 
        num/=10;
        conta_c++;
    }
    return conta_c;
}
int main(){
    int num;
    do{
         printf("Inserisci un numero positivo \n");
         scanf("%d",&num);
    }while(num<0);
    printf("Il numero inserito ha %d cifre \n",conta_cifre(num));
    return 0;
}