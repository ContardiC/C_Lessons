#include <stdio.h>

struct Libro {
    char titolo[100];
    char autore[100];
    int anno_pubblicazione;
};

int main() {
    FILE *fp;
    struct Libro libri[10];

    // Apri il file in modalità scrittura
    fp = fopen("libri.txt", "w");

    // Scrivi dati nel file
    for (int i = 0; i < 10; i++) {
        // devono essere prima memorizzati nella RAM
        fprintf(fp, "%s\n%s\n%d\n", libri[i].titolo, libri[i].autore, libri[i].anno_pubblicazione);
    }

    // Chiudi il file
    fclose(fp);

    // Apri il file in modalità lettura
    FILE *fp_lettura;
    fp_lettura = fopen("libri.txt", "r");
    char titolo[100], autore[100];
    int anno_pubblicazione;
    // Leggi dati dal file
    while (!feof(fp_lettura)) {
        
        fscanf(fp_lettura, "%[^\n]\n%[^\n]\n%d\n", titolo, autore, &anno_pubblicazione);
        // Usa i dati letti come desideri
    }

    // Chiudi il file di lettura
    fclose(fp_lettura);

    return 0;
}
