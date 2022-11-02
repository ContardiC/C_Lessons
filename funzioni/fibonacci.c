#include<stdio.h>
void fibonacci(int n);
int main(){
    int n;
    printf("Quanti numeri della serie di fibonacci vuoi stampare?\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n){
    int primo=1;
    int secondo=1;
    int prossimo;
    int i;
    printf("%d\t",primo);
    printf("%d\t",secondo);
    for(i=2;i<n;i++) {
        prossimo=primo+secondo;
        primo=secondo;
        secondo=prossimo;
        printf("%d\t",prossimo);
    }
}
