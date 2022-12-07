#include<stdio.h>
int palindromo(int v[], int n);
int main(){
    int n,i;
    printf("Inserisci n\n");
    scanf("%d",&n);
    int vet[n];
    for(i=0;i<n;i++){
        printf("Inserisci elemento del vettore \n");
        scanf("%d",&vet[i]);
    }
    if(palindromo(vet,n)==1){
        printf("Palindromo \n");
    }else{
        printf("Non palindromo \n");
    }
    return 0;
}
int palindromo(int v[], int n){
    int i;
    for(i=0;i<n/2;i++){
        if(v[i]!=v[n-1-i]){
            return 0;
        }
    }
    return 1;
}