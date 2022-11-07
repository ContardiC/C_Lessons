#include<stdio.h>
void tabellina(int n);
int main(){
    int a;
    do{
        printf("Inserisci un numero da 1 a 10 \n");
        scanf("%d",&a);
    }while(a<1 || a>10);
   
    tabellina(a);
    return 0;
}
void tabellina(int n){
    int i; // variabile di servizio
    for(i=1;i<=10;i++){
        printf("%d ",(n*i));
    }
   
}