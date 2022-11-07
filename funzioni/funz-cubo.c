#include<stdio.h>
int cubo(int n);

int main(){
    printf("risultato : %d",cubo(2));
    int res;
    res=cubo(4);
    printf("Risultato %d",res);
    return 0;
}
int cubo(int n){
    return n*n*n;
}