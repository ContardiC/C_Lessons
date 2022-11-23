#include <stdio.h>
#include <string.h>
#include <pthread.h>

// variabile globale:
int i = 2;

void* function(void* p){
  // Stampo il valore ricevuto come parametro:
  printf("Stampo il valore ricevuto come parametro nella starting routine: ");
  printf("%i\n", * (int*)p);

  // Restituisce il riferimento alla variabile globale
  pthread_exit(&i);
}

int main(void){
  // Dichiarazione della variabile per l'ID del thread:
  pthread_t id;

  int j = 1;
  pthread_create(&id, NULL, function, &j);
    
  int* ptr;

  //Aspetta function() e recupera il valore in ptr;
  pthread_join(id, (void**)&ptr);
  printf("Valore ricevuto dal figlio: ");
  printf("%i\n", *ptr);
}