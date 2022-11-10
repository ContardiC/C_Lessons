#include<stdio.h>
#include<math.h>
/*
Calcolo approssimativo del pi greco
*/
float pigreco(float n);
float fattoriale(float n);
float eulero(float n);
float radice(float n);
int main(){
    float num;
    printf("Inserisci n\n");
    scanf("%f",&num);
    printf("Il risultato : %f\n",pigreco(num));
    printf("Il valore approssimato di eulero :%f\n",eulero(num));
    printf("Radice :%f",radice(num));
    return 0;
}
float pigreco(float n){
    float sommatoria=0;
    float i;
    for(i=0;i<=n;i++){
        sommatoria+=(pow(-1,i))*(4/(2*i+1));
    }
    return sommatoria;
}
float fattoriale(float n){
    float res=1,i;
    if(n==0){
        return 1;
    }else{
        for(i=n;i>1;i--){
            res*=i;
        }
    }
    return res;
}

float eulero(float n){
    float sommatoria=0,i;
    for(i=0;i<=n;i++){
        sommatoria+=(1/fattoriale(i));
    }
    return sommatoria;
}

float radice(float n){
    float res=0,i;
    for(i=1;i<=n;i++){
        res+=(i+(2/i))/2;
    }
    return res;
}


