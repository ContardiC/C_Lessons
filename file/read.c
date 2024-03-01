#include<stdio.h>
#include<string.h>
struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};
int main() {
    struct Book readBook;

    // Apriamo il file in modalità lettura
    FILE *inFile = fopen("libro.txt", "r");

    // Leggiamo i dati dalla struct dal file
    fscanf(inFile, "%[^\n]\n", readBook.title);
    fscanf(inFile, "%[^\n]\n", readBook.author);
    fscanf(inFile, "%d\n", &readBook.publicationYear);

    // Chiudiamo il file
    fclose(inFile);

    // Stampiamo i dati letti
    printf("Titolo: %s\n", readBook.title);
    printf("Autore: %s\n", readBook.author);
    printf("Anno di pubblicazione: %d\n", readBook.publicationYear);

    return 0;
}
