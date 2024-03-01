#include<stdio.h>
#include<string.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};
#include <stdio.h>

int main() {
    // Creiamo un oggetto Book con dati di esempio
    struct Book myBook;
    strcpy(myBook.title, "Il Signore degli Anelli");
    strcpy(myBook.author, "J.R.R. Tolkien");
    myBook.publicationYear = 1954;

    // Apriamo un file in modalità scrittura
    FILE *outFile = fopen("libro.txt", "w");

    // Scriviamo i dati della struct nel file
    fprintf(outFile, "%s\n", myBook.title);
    fprintf(outFile, "%s\n", myBook.author);
    fprintf(outFile, "%d\n", myBook.publicationYear);

    // Chiudiamo il file
    fclose(outFile);

    printf("Dati del libro scritti nel file.\n");
    return 0;
}
