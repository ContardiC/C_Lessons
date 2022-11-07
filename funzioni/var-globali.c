#include<stdio.h>
char path[] = "documents/";
int strlength(void);
int main(){
    printf("La stringa ha %d caratteri \n",strlength());
    return 0;
}
int strlength(){
    int res;
    for(res=0;path[res]!='\0';res++);
    return res;
}