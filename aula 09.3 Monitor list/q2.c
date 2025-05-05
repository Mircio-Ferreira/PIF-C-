/*
2— Contagem de números pares em uma lista encadeada
Implemente uma função em linguagem C que receba uma lista encadeada de números inteiros e retorne a quantidade de elementos pares presentes na lista. A estrutura da lista encadeada está definida da seguinte forma:
Ex: Se a lista contiver os elementos 3 -> 4 -> 7 -> 8 -> 10 -> NULL, a função deverá retornar 3, pois há três números pares: 4, 8 e 10.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}No;

void add(No **head, int entrada){
    No *new=malloc(sizeof(No));
    new->num=entrada;
    new->next=NULL;

    if(*head==NULL) *head=new;
    
    else{
        No *aux=*head;

        while(aux!=NULL){
            if(aux->next==NULL){
                aux->next=new;
                return;
            }
            aux=aux->next;
            
        }
    }
}

int quantPar (No *head){
    int quant=0;

    if(head==NULL) return quant;

    else{
        No *aux=head;

        while(aux!=NULL){
            if(aux->num%2 == 0) quant++;

            aux=aux->next;
        }
        return quant;
    }

}



int main(){

    int entrada;
    No *head=NULL;

    for(int i=0;i<10;i++){
        scanf("%d",&entrada);
        add(&head,entrada);
    }

    printf("A quantidade de pares foi de: %d",quantPar(head));

    return 0;
}