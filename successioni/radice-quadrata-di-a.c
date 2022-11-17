
/*
Il valore della Radice quadrata di A (cioè A) può essere calcolato con la formula iterativa di Newton:
*/
#include<stdio.h>
int main(){
    int i,n;
    double xprecedente,xsuccessivo,a;
    xprecedente=1;
    printf("Inserisci A \n");
    scanf("%lf",&a);
    do{
        printf("Numero di ripetizione \n");
        scanf("%d",&n);
    }while(n<=0);
    for(i=0;i<n;i++){
        xsuccessivo=0.5*(xprecedente+a/xprecedente);
        xprecedente=xsuccessivo;
    }
    printf("Radice quadrata di %lf vale: %lf",a,xsuccessivo);
}