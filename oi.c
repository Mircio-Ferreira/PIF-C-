#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int valor;
    Node *next;
}Node; 

void print(Node *head){
    while (head->next != NULL){
        printf("%d", head->valor);

        head = head->next; 
    }
    printf("NULL\n"); 
}
 