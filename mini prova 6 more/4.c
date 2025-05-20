/*
Questão 4 - Lista encadeada recursiva e arquivo
 Crie um programa que leia números inteiros de um arquivo ENTRADA.txt e insira em uma lista
 simplesmente encadeada. Depois, escreva uma função recursiva que imprime os valores da lista de
 trás para frente:
 typedef struct no {
    int valor;
    struct no *prox;
 } No;
 void imprimir_reverso(No *lista)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char line[1000];
    struct node *next;
}No;

void imprimir_reverso(No *head);

void insert(No **head,char *line);

int main(){
    No *head=NULL;
    FILE *read;
    read=fopen("entrada.txt","r");
    char line[1000];
    if(read==NULL) return 1;

    while(fgets(line,sizeof(line),read)!=NULL){
        insert(&head,line);
    }

    imprimir_reverso(head);

    fclose(read);

    return 0;
}

void insert(No **head,char *line){
    No *new=malloc(sizeof(No));
    strcpy(new->line,line);
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

void imprimir_reverso(No *head){
    char printar[1000];
    
    if(head==NULL) return;

    strcpy(printar,head->line);

    imprimir_reverso(head->next);
    
    printf("%s",printar);
}