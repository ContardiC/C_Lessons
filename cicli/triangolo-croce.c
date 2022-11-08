#include<stdio.h>
int main(){
    int i,j,n=6;
    for(i=0;i<n;i++){
        for(j=1;j<=6;j++){
            if(j<=n-i){
                printf("\t%d",j+i);
            }else{
                printf("\t+");
            } 
        }
        printf("\n");
    }
    return 0;
}