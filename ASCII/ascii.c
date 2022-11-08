#include<stdio.h>
int main(){
    char c;
    c=97;
    char d='a';
    for(c=97;c<=122;c++){
        printf("%c \t",c);
    }
    printf("\n\n\n");
    for(d='a';d<='z';d++){
        printf("%d \t",d);
    } 
    return 0;
}