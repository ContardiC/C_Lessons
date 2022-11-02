#include<stdio.h>
void somma(int a, int b);
int main(){
    int c=3,d=4;
    int res;
    somma(c,d);
    somma(4,17);
    somma(d,d);
    return 0;
}
void somma(int a, int b){
    int res;
    res=a+b;
    printf("La somma: %d\n ",res);
}