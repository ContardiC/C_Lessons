#include<stdio.h>
int main(){
    int i,j,n;
    n=6;
    for(i=0;i<n;i++) {
		for(j=1;j<=n-i;j++)
           printf(" %d \t ",i+j); 
        printf("\n");
    }
    return 0;
}