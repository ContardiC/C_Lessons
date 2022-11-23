#include<stdio.h>
void doOneThing(int *);
void doAnotherThing(int *);
void doWrapUp(int, int);
int r1=0,r2=0;
int main(){
    doOneThing(&r1);
    doAnotherThing(&r2);
    doWrapUp(r1,r2);
    return 0;
}
void doOneThing(int *pnum_times){
    int i,j,x;
    for(i=0;i<4;i++){
        printf("Doing one thing\n");
        for(j=0;j<10000;j++){
            x=x+i;
        }
        (*pnum_times)++;
    }
}
void doAnotherThing(int *pnum_times){
    int i,j,x;
    for(i=0;i<4;i++){
        printf("Doing another thing\n");
        for(j=0;j<10000;j++){
            x=x+i;
        }
        (*pnum_times)++;
    }
}
void doWrapUp(int one_times,int another_times){
    int total;
    total = one_times + another_times;
    printf("wrap up: one thing %d, another %d, total %d\n",one_times, another_times, total);
}