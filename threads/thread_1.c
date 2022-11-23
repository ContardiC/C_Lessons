#include<stdio.h>
#include<pthread.h>
void doOneThing(int *);
void doAnotherThing(int *);
void doWrapUp(int, int);
int r1=0,r2=0;
int main(){
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,(void *)doOneThing,(void *)&r1);
    pthread_create(&thread2,NULL,(void *)doAnotherThing,(void *)&r2);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
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