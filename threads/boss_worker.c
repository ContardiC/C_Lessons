//
// boss/worker pthreads model
// the boss will create threads to handle incoming requests
//
//

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void task1() {
    printf("task 1\n");
}

void task2() {
    printf("task 2\n");
}

void task3() {
    printf("task 3\n");
}


int main() {
    pthread_t thread1 = NULL, thread2 = NULL, thread3 = NULL;
    

    int n = 1;
    while (n) {
        // get a request
        printf("Inserisci un numero (richiesta) \n");
        scanf("%d", &n);
        switch (n) {
            case 1: pthread_create(&thread1, NULL, (void *) task1, NULL);
                break;
            case 2: pthread_create(&thread2, NULL, (void *) task2,  NULL);
                break;
            default: pthread_create(&thread3, NULL, (void *) task3,  NULL);
                break;

        }
    }
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    printf("done!\n");
    return 0;
}