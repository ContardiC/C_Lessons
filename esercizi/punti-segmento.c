#include<stdio.h>
#include <math.h>
double px1,px2,py1,py2;
void acquisisciCoordinate();
double quadrato(double num);
double distaPunti();
int main(){ // ENTRY-POINT
    
    acquisisciCoordinate();
    double c=3.4, d=5.6;
    printf("la distanza tra i due punti vale :%f", distaPunti());
    return 0;
}
void acquisisciCoordinate(){
    printf("Inserisci coordinata x :\n");
    scanf("%lf",&px1);
    printf("Inserisci coordinata y :\n");
    scanf("%lf",&py1);
    printf("Inserisci coordinata x :\n");
    scanf("%lf",&px2);
    printf("Inserisci coordinata y :\n");
    scanf("%lf",&py2);
}
double quadrato(double num)
{
    return num*num;

}
double distaPunti()
{
    double ris=0.0;
    double op1=px2-px1;
    double op2=py2-py1;
    //printf("stampa operatore 1: %lf\n",op1);
    ris=sqrt(quadrato(op1)+quadrato(op2));
    return ris;
}