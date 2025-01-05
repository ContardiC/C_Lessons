/*
.Realizzare un programma in C, che utilizzi strutture dati dinamiche, per gestire una lista di spese fatte da un gruppo di amici che di volta in volta ciascuno pagherà la spesa. Per ogni spasa fatta si dovrà annotare il valore della spesa, la data e chi ha effettuato l'esborso. Il programma dovrà permettere di:
1) Inserire una spesa
2) Visualizzare tutte le spese effettuate con data e persona che ha pagato
3) Calcolare la spesa fatta da una persona in particolare indicata dall'utente
4) Creare un'altra lista con l'elenco di tutte le persone che hanno partecipato alle spese (E' di difficoltà maggiore)
5) Memorizzare in file tutte le spese effettuate
6) Acquisire da un file di spese effettuate per inserirle in memoria centrale con una struttura dinamica a lista.
Si consiglia di memorizzare nel file nel formato CSV
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Spesa
{
    double import;
    char name[51];
    char date[11]; // DD-MM-YYYY
} Spesa;
typedef struct node
{
    Spesa spesa;
    struct node *next;
} node;
int main()
{
    node *head = NULL;
    double import;
    char name[51];
    char date[11]; // DD-MM-YYYY
    int opt;
    FILE *f;
    do
    {
        printf("0 - Exit.\n");
        printf("1 - Enter an expense.\n");
        printf("2 - Show the list.\n");
        printf("3 - Total expenses made by a person.\n");
        printf("4 - Save your expenses to a file");
        printf("5 - Create the list from file. \n");
        scanf("%i", &opt);

        switch (opt)
        {
        case 1:
            puts("Enter the import:");
            scanf("%lf", &import);
            fflush(stdin);
            fflush(stdin);
            puts("Enter the person's name:");
            gets(name);
            fflush(stdin);
            puts("Enter the date (DD-MM-YYYY):");
            gets(date);
            fflush(stdin);
            // printf("Import: %lf\nName: %s\nDate: %s\n", import, name, date);
            node *new_node = malloc(sizeof(node));
            if (new_node == NULL)
            {
                perror("Malloc failed");
                return 1;
            }
            new_node->spesa.import = import;
            strcpy(new_node->spesa.name, name);
            strcpy(new_node->spesa.date, date);
            if (head == NULL)
            {
                head = new_node;
            }
            else
            {
                node *current = head;
                while (current->next != NULL)
                {
                    current = current->next;
                }
                current->next = new_node;
            }
            break;
        case 2:
            // Print whole list
            if (head == NULL)
            {
                printf("List is empty.\n");
            }
            else
            {
                node *current = head;
                while (current != NULL)
                {
                    printf("%lf\n", current->spesa.import);
                    printf("%s\n", current->spesa.name);
                    printf("%s\n", current->spesa.date);
                    current = current->next;
                }
            }
            break;
        case 3:
            fflush(stdin);
            puts("Enter the name whose expenses you want to know? ");
            gets(name);
            if (head == NULL)
            {
                puts("List is empty");
            }
            else
            {
                node *current = head;
                while (current->next != NULL)
                {
                    if (strcmp(name, current->spesa.name) == 0)
                    {
                        printf("%s\n", current->spesa.name);
                        printf("%lf\n", current->spesa.import);
                        printf("%s\n", current->spesa.date);
                    }
                    current = current->next;
                }
            }
            break;
        case 4:

            f = fopen("expenses.csv", "a");
            if (f == NULL)
            {
                puts("Data cannot be saved");
            }
            else
            {
                node *current = head;
                if (head == NULL)
                {
                    puts("List is empty.");
                }
                else
                {
                    while (current->next != NULL)
                    {
                        fflust(stdout);
                        fprintf(f, "%s;%lf;%s\n", current->spesa.name, current->spesa.import, current->spesa.date);
                        current = current->next;
                    }
                    fclose(f);
                }
            }
            break;
        case 5:
            f = fopen("expenses.csv", "r");
            if (f == NULL)
            {
                puts("Cannot read from file");
            }
            else
            {
                while (fscanf(f, "%s;%lf;%s\n", name, &import, date) == 1)
                {
                    fflush(stdin);
                    printf("Import: %lf\nName: %s\nDate: %s\n", import, name, date);
                }
                fclose(f);
            }
            break;
        default:
            if (opt == 0)
            {
                puts("Good bye.");
            }
            else
            {
                puts("Wrong input.");
            }
            break;
        }

    } while (opt != 0);
}