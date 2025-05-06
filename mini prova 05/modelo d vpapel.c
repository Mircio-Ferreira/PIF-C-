#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}No;

void inserir(No **head,int n){
    No *new=malloc(sizeof(No));
    new->num=n;
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(n<(*head)->num){
        new->next=*head;
        *head=new;
    }
    else{
        No *aux=*head;
        while(aux->next!=NULL){
            if(n<aux->next->num){
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
        aux->next=new;
    }
}

int soma(No *head){
    No *aux=head;
    int soma=0;

    while(aux!=NULL){
        soma+=aux->num;
        aux=aux->next;
    }
    return soma;
}

int main(){

    No *head=NULL;
    int entrada=-1;

    while(1){
        scanf("%d",&entrada);
        if(entrada==0) break;

        inserir(&head,entrada);
    }

    printf("Soma: %d",soma(head));

    return 0;
}