#include<stdio.h>
#define N  5
int main(){
    int i;
    int scelta=1;
    // ciclo for 
    for(i=0;i< N;i++){
        printf("\n%d",i+1);
    }
    // ciclo while
    i=0;
    while(i<N){
        printf("\n%d",i+1);
        i++;
    }
    // ciclo do{... }while
    do{
        printf("\nPremi [1] per continuare");
        printf("\nPremi un altro numero per terminare");
        scanf("%d",&scelta);
    }while(scelta==1);
}