#include<stdio.h>
int main(){
    int n,i,conta_primi=0,numero,primo,j;
    // inserimento n (1 - 50)
    do{ 
        printf("Quanti numeri vuoi inserire ?\n");
        scanf("%d",&n);
    }while(n<1 || n >50);
    for(i=0;i<n;i++){
        printf("Inserisci un numero \n");
        scanf("%d",&numero);
        primo=1;
        for(j=2;j<numero;j++){
            if(numero % j ==0){
                primo=0;
            }
        }
        if(primo==1){
            conta_primi++;
        }
    }
    printf("Tra i numeri inseriti ci sono %d numeri primi \n",conta_primi);
    return 0;  
}