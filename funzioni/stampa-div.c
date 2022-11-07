#include<stdio.h>
void stampaDiv(int);
int main(){
    int num;
    do{
        printf("Inserisci un numero \n");
        scanf("%d",&num);   
    }while(num<=0);
    stampaDiv(num);
}
void stampaDiv(int n){
    int i;
    for(i=0;i<=n;i++){
        if(n%i==0){
            printf("%d \t",i);
        }
    }
}