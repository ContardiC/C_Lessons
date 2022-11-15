#include<stdio.h>
int verificaCaratteri(char , char , char );
int main(){
    char a,b,c;
    int res;
    printf("Inserisci la prima lettera \n");
    scanf("%c",&a);
    fflush(stdin);
    printf("Inserisci la prima lettera \n");
    scanf("%c",&b);
    fflush(stdin);
    printf("Inserisci la prima lettera \n");
    scanf("%c",&c);
    fflush(stdin);
    printf("Sono presenti %d maiuscole",verificaCaratteri(a,b,c));
    return 0;
}
int verificaCaratteri(char a, char b, char c){
    int res=0;
    if(a>=65&&a<=90){
        res++;
    }
    if(b>=65&&b<=90){
        res++;
    }
    if(c>=65&&c<=90){
        res++;
    }
    return res;
}
