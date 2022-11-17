/*
Radice quadrata approssimata
*/
#include<stdio.h>
int main(){
    int n,i;
    double xprecedente,xsuccessivo; 
    do{
        printf("Numero di ripetizione \n");
        scanf("%d",&n);
    }while(n<=0);
    xprecedente=1;
    for(i=0;i<n;i++){
        xsuccessivo=(xprecedente+2/xprecedente)/2;
        xprecedente=xsuccessivo;
    }
    printf("La radice quadrata vale: %lf\n",xsuccessivo);
    return 0;
}