#include<stdio.h>
void doOneThing();
void doAnotherThing();
void doWrapUp(int, int);
int r1=0,r2=0;
int main(){
    doOneThing(&r1);
    doAnotherThing(&r2);
    doWrapUp(r1,r2);
    return 0;
}
void doOneThing(){
    int i;
    for(i=0;i<4;i++){
        printf("Doing one thing\n");
        r1++;
    }
}
void doAnotherThing(){
    int i;
    for(i=0;i<4;i++){
        printf("Doing another thing\n");
        r2++;
    }
}
void doWrapUp(int one_times,int another_times){
    int total;
    total = one_times + another_times;
    printf("wrap up: one thing %d, another %d, total %d\n",one_times, another_times, total);
}