/*

3 - Implemente uma lista encadeada simples em C que armazene elementos do tipo char item[50]. A lista deve manter os elementos em ordem alfabética crescente (ordem lexicográfica) e não pode conter elementos repetidos.
Você deverá implementar uma função void inserirOrdenado(struct Node** head, const char* novo_item) que insere um novo item na lista seguindo as regras:

O item deve ser inserido na posição correta para manter a ordenação alfabética.


Caso o item já exista na lista, ele não deve ser inserido novamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[51];
    struct node *next;
}No;

void insertSort(No **head, char *entrada){

    No *new=malloc(sizeof(No));
    strcpy(new->nome,entrada);
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(strcmp((*head)->nome,entrada) == 0 ){
        free(new);
        printf("Nome ja existe\n");
    }
    //Caso que vou inserir antes do primeiro e ja garanti que ele n e igual ao primeiro
    else if(strcmp((*head)->nome,entrada) > 0 ){
        new->next=*head;
        *head=new;
    }
    //Caso que vou inserir no meio ou final ou nao vo inserir
    else{
        No *aux=*head;
        //Primeiro verifico se existe para dps inserir
        while(aux!=NULL){
            if(strcmp(aux->nome,entrada)==0){
                free(new);
                printf("ja existe\n");
                return;
            }
            aux=aux->next;
        }
        //Reposiciona aux para comeco
        aux=*head;
        //Inserindo no meio ou fim
        while(aux!=NULL){


            if(aux->next!=NULL && strcmp(aux->next->nome,entrada)>0){
                new->next=aux->next;
                aux->next=new;
                return;
            }

            if(aux->next==NULL){
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
    }
}

void listar (No *head){
    No *aux=head;
    int cont=1;

    if(aux==NULL) printf("Lista vazia\n");

    while(aux!=NULL){
        printf("%d* Nome: %s\n",cont,aux->nome);
        cont++;
        aux=aux->next;
    }
}

int main(){

    char name[51];
    No *head=NULL;

    for(int i=0; i<10; i++){
        scanf(" %s",name);
        insertSort(&head,name);

    }

    listar(head);


    return 0;
}