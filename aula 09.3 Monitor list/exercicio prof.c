#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int id;
    char ip[16];
    int time;
    struct node *next;
}No;

void insert(No **head, int id_enter, char *ip_enter, int time_enter);

void remove_dup(No **head);

int main(){

    No *head=NULL;
    
    return 0;
}

void insert(No **head, int id_enter, char *ip_enter, int time_enter){
    No *new=malloc(sizeof(No));
    new->id=id_enter;
    strcpy(new->ip,ip_enter);
    new->time=time_enter;
    new->next=NULL;

    No *aux=*head;

    if(*head==NULL) {
        *head=new;
        return;
    }

    while(aux->next!=NULL){
        aux=aux->next;
    }
    aux->next=new;
    
}

void remove_dup(No **head){
    int id_atual;
    char ip_atual[16];

    if(*head==NULL) printf("Lista vazia, nao ha o que remover\n");

    else{
        No *aux=*head;
        No *aux2;

        while(aux!=NULL){
            id_atual=aux->id;
            strcpy(ip_atual,aux->ip);
            aux2=aux;

            while(aux2->next!=NULL){

                if(aux2->next->id==id_atual && strcmp(aux2->next->ip,ip_atual)==0){
                    No *remover;
                    remover=aux2->next;
                    aux2->next=aux2->next->next;
                    free(remover);
                }

                else{
                    aux2=aux2->next;
                }
            }
            aux=aux->next;
        }
    }
}