#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    
    char nome[50];
    int id_entrada;
    struct node *next;
}No;

//void verificar_reisidencia(No *head,char *nome_teste);

void inserir_ordem(No **head,char *nome_entrada,int ordem);

void ganhador(No *head);

void printar(No *head);


int main(){

    char nome[50];
    char resposta[4];
    No *head_yes=NULL;
    No *head_no=NULL;
    int cont_sim=0;

    while(1){

        scanf(" %s",nome);

        if ((strcmp(nome,"FIM") ==0 )) break;

        scanf(" %s",resposta);

        if(strcmp(resposta,"YES") ==0 ){
            cont_sim++;
            inserir_ordem(&head_yes,nome,cont_sim);
        }
        else{
            inserir_ordem(&head_no,nome,0);  
        }
    }

    printar(head_yes);
    printar(head_no);


    return 0;
}

void inserir_ordem(No **head,char *nome_entrada, int ordem){
    
    No *new=malloc(sizeof(No));
    strcpy(new->nome,nome_entrada);
    new->id_entrada=ordem;
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(strcmp(nome_entrada,(*head)->nome) < 0 ){
        new->next=*head;
        *head=new;
        return;
    }
    else{
        No *aux=*head;

        while(aux!=NULL){
            if( strcmp(nome_entrada,aux->nome) ==0 ){
                return;
            }
            aux=aux->next;
        }

        aux=*head;

        while(aux->next!=NULL){
            if(strcmp(nome_entrada,aux->next->nome) < 0 ){
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
        aux->next=new;
    }
}


void printar(No *head){
    
    while(head!=NULL){
        printf("%s\n",head->nome);
        head=head->next;
    }
}

