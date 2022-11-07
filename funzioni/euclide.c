#include<stdio.h>
int euclide(int a, int b);
int main(){
    int a, b;
    printf("Inserisci il primo numero \n");
    scanf("%d",&a);
    printf("Inserisci il secondo numero \n");
    scanf("%d",&b);
    printf("MCD: %d",euclide(a,b));
    return 0;
}
int euclide(int a, int b){
    int r;
    if(b==0){
        return a;
    }else{
        do{
            r=a%b;
            if(r==0){
                return b;
            }else{
                a=b;
                b=r;
            }
        }while(r!=0);
    }
}