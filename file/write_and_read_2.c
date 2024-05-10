//
// Created by ccont_a7onnle on 10/05/2024.
//
#include <stdio.h>

int main() {
    FILE *file=fopen("input.txt","w");
    int a=2, b=4, c=5;
    int i=0;
    for(i=0;i<25;i++){
        fprintf(file,"%d %d %d\n",a,b,c);
        a=a+1-2;
        b=a-b+i;
        c=a+b;
    }
    fclose(file);
    file=fopen("input.txt","r");
    while(fscanf(file, "%d %d %d",&a,&b,&c)==3){
        printf("%d %d %d\n",a,b,c);
    }
    fclose(file);
}