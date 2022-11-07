#include<stdio.h>
int somma(int, int );
int main(){
    int c=3,d=4;
    int res;
    res=somma(c,d);
    printf("La somma 1: %d\n",res);
    res=somma(5,c);
    printf("La somma 2: %d\n",res);
    res=somma(c,c);
    printf("La somma 2: %d\n",res);
    return 0;
}
int somma(int a, int b){
    return a+b;
}