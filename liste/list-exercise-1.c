/*
Gestire una lista semplice (informazione un semplice intero)  con un semplice switch case (senza funzioni): per
- inserire un nodo alla volta
- per visualizzare tutta la lista
- per trovare il valore massimo e in quale posizione si trova
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int number;
    struct node *next;
} node;
int main()
{
    node *head = NULL; // Empty list
    int opt;
    int number;
    do
    {
        printf("0 - Exit.\n");
        printf("1 - Insert a number.\n");
        printf("2 - Show the list.\n");
        printf("3 - Shows the number with the largest value and its position.\n");
        scanf("%i", &opt);
        switch (opt)
        {
        case 0:
            // node *current = head;
            // while (current != NULL)
            // {
            //     node *temp = current;
            //     current = current->next;
            //     free(temp);
            // }
            // return 0;
            break;
        case 1:
            printf("Insert a number.\n");
            scanf("%i", &number);
            node *new_node = malloc(sizeof(node));
            if (new_node == NULL)
            {
                perror("Malloc failed");
                return 1;
            }
            new_node->number = number;
            new_node->next = NULL;
            if (head == NULL)
            { // Management of the first element
                head = new_node;
            }
            else
            {
                node *current = head;
                while (current->next != NULL)
                { // Find last element
                    current = current->next;
                }
                current->next = new_node; // Append node
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
                    printf("%i\n", current->number);
                    current = current->next;
                }
            }

            break;
        case 3:
        if(head == NULL){
            printf("List is empty");
        }else{
            int max;
            node *current = head;
            max = current->number;
            current = current->next;
            while(current != NULL){
                if( current->number>max){
                    max = current->number;
                }
                current = current->next;
            }
            printf("Max number: %i .\n",max);
        }
            break;
        default:
            break;
        }
    } while (opt != 0);
}