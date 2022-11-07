#include<stdio.h>
int main(){
    int i, j, n;
 
    do{
        printf("inserisci il lato del quadrato\n");
        scanf("%d",&n);
    }while(n<=0);
    int tmp=1;
    for(i=1;i<=(n*n);i++){
        printf("%d \t",i);
        if(i%n == 0){
            printf("\n");
            for(j=n+i;j>i;j--){
                printf("%d\t",j);
            }
            i=j+n;
            printf("\n");
        }
    }
    return 0;
    
}
