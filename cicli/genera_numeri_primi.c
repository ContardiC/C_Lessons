#include<stdio.h>
int main(){
    int n, i, j, primo;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    
    int cont=0;
    for(i=1;cont<n;i++){
        primo = 1;
        for(j=2; j<i && primo ==1; j++){
            if(i%j==0){
                primo = 0;
            }
        }
        if(primo==1){
            printf("%d\n", i);
            cont++;
        }
    }
    return 0;
}