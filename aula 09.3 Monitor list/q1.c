/*
1 — Soma dos elementos de uma lista encadeada
Implemente uma função em linguagem C que receba uma lista encadeada de números inteiros e retorne a soma de todos os seus elementos.
EX: Se a lista contiver os elementos 10 -> 20 -> 30 -> NULL, a função deverá retornar 60.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}No;

void add (No **head, int numero){
    No *new=malloc(sizeof(No));
    new->num=numero;
    new->next=NULL;

    if(*head==NULL) *head=new;

    else{
        No *aux=*head;

        while(aux->next!=NULL){
            aux=aux->next;
        }
        aux->next=new;
    }
}

int cont (No *head){
    int cont=0;
    if(head==NULL) return cont;

    else{
        No *aux=head;

        while(aux!=NULL){
            cont+=aux->num;
            aux=aux->next;
        }
        return cont;
    }
}
int main(){

    No *head;
    int entrada;

    for(int i=0;i<5;i++){
        scanf("%d",&entrada);
        add(&head,entrada);
    }

    printf("A soma dos elementos foi: %d",cont(head));

    return 0;
}