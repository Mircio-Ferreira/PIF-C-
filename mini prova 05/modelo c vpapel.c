#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[5];
    int pt;
    int tmp;
    struct node *next;
}No;

void insert_sort(No **head,int point, int time,char *nick);

void print_lista(No *head);

int main(){

    No *lista = NULL;

    insert_sort(&lista, 100, 300, "kaka");
    insert_sort(&lista, 100, 240, "dino");
    insert_sort(&lista, 200, 500, "luan");
    insert_sort(&lista, 150, 200, "nina");
    insert_sort(&lista, 200, 450, "joao");

    print_lista(lista);

    return 0;
}


void insert_sort(No **head,int point, int time,char *nick){
    No *new=malloc(sizeof(No));
    new->pt=point;
    new->tmp=time;
    new->next=NULL;
    strcpy(new->nome,nick);

    if(*head==NULL) *head=new;

    else if(point > (*head)->pt || (point==(*head)->pt && time<(*head)->tmp) ){
        new->next=*head;
        *head=new;
    }

    else{
        No *aux=*head;

        while(aux->next!=NULL){
            if( point > aux->next->pt || (point==aux->next->pt && time< aux->next->tmp) ){
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
        //Insersao no final
        aux->next=new;
    }
}

void print_lista(No *head) {
    while (head != NULL) {
        printf("Apelido: %s | Pontos: %d | Tempo: %d\n", head->nome, head->pt, head->tmp);
        head = head->next;
    }
}
