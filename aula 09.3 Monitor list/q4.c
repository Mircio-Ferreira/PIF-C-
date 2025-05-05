/*
4 - Implemente uma função void MoveMenor(TipoLista* lista) que, dada uma lista simplesmente encadeada, encontra o menor elemento (com base no valor inteiro do campo item) e move esse nó para o início da lista.
Importante:
Você não pode apenas trocar os valores do campo item entre os nós.


Você não pode usar listas auxiliares, pilhas ou filas.


A troca deve ser feita apenas com manipulação dos ponteiros da própria lista.
Entrada:
[10] → [5] → [8] → [3] → [12]
Saída:
[3] → [10] → [5] → [8] → [12]

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

void mover_topo(No **head){
    

    if(*head==NULL) printf("Nao a o que mover, lista vazia");

    else if((*head)->next==NULL) printf("Só tem uma valor: %d",(*head)->num);

    else{
        int menor;
        //Tenho que identificar o menor valor primeiro.
        menor=(*head)->num; //garante valor base para comparar
        No *aux=*head;

        while(aux!=NULL){
            if(menor > aux->num) menor = aux->num;

            aux=aux->next;
        }
        aux=*head; //resetando o aux para o comeco

        while(aux!=NULL){
            //[10] → [5] → [8] → [3] → [12]

            if(aux->next!=NULL &&  aux->next->num==menor){
                
                No *remover=aux->next;

                aux->next=aux->next->next; //O atual aponta para o proximo do proximo

                free(remover);
                
                
                No *new_head=malloc(sizeof(No));
                new_head->num=menor;
                new_head->next=*head;
                *head=new_head;

                return;

            }
            aux=aux->next;
        }
    }
}

void listar (No *head){
    No *aux=head;

    while(aux!=NULL){
        printf("|%d|",aux->num);
        aux=aux->next;
    }
}

int main(){

    No *head=NULL;
    int entrada;

    for(int i=0;i<5;i++){
        scanf("%d",&entrada);
        add(&head,entrada);
    }

    listar(head);

    mover_topo(&head);

    printf("\n");
    listar(head);

    return 0;
}