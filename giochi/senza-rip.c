#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DIM 5
int main(){
    int vet[DIM],i,n,j,trovato;
    srand(time(NULL));
    for(i=0;i<DIM;i++){
        vet[i]=-1;
    }
    i=0;
    while(i<DIM){
        trovato=0;
        n=(int)rand() % 10 + 0;
        for(j=0;j<DIM;j++){
            if(vet[j]==n){
                trovato=1;
            }
        }
        if(trovato==0){
            vet[i]=n;
            i++;
        }
    }
    for(i=0;i<DIM;i++){
        printf("%d",vet[i]);
    }
    return 0;
}