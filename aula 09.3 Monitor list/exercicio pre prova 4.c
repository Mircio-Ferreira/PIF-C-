#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Acesso {
    int idUsuario;
    char ip[16]; // Ex: "192.168.0.1"
    int timestamp; // Número inteiro representando o instante do acesso
    struct Acesso *next;
    } No;


void inserir (No **head, int id, char *ip, int time);

void removerduplicada(No **head);

int main(){

    return 0;
}

void inserir (No **head, int id, char *ip, int time){
    No *new=malloc(sizeof(No));
    new->idUsuario=id;
    strcpy(new->ip,ip);
    new->timestamp=time;
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

void removerduplicada(No **head){

    No *aux=*head;
    No *aux2=NULL;
    if(*head==NULL) printf("Nao ha o que remover,lista vaziaa!\n");

    while(aux!=NULL){

        

        aux=aux->next;
    }


}