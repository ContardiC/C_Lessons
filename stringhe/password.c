#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int i = 0;
    char password[10];


    puts("Inserisci la password");
    do{
        password[i] = getch();
        printf("*");
        i++;
    }while(password[i-1] != '\n');

    printf("La tua password %s,");
}