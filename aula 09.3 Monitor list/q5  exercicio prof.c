
/******************************************************************************

Implemente um cadastro de alunos com funções para adicionar, remover e listar alunos
usando listas encadeadas. Cada aluno deve ter um login (string sem espaços),
uma nota (float) e a quantidade de faltas (int).

Dps libere a lista

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[51];
    float nota;
    int falta;
    struct node *next;
}No;


void add (No **head,char *nome_entra, float nt, int ft){

    No *new=malloc(sizeof(No));

    strcpy(new->name,nome_entra);
    new->falta=ft;
    new->nota=nt;
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

void listar (No *head){

    No *aux=head;

    if(head==NULL){

        printf("Lista vazia\n");
        return;
    }

    while(aux!=NULL){
        printf("Nome: %s\tNota: %.2f\tFalta: %d\n",aux->name,aux->nota,aux->falta);
        aux=aux->next;
    }

}

void remover (No **head,char *name_remove){
    No *remover;
    
    if(*head==NULL) printf("Lista vazia\n");
    //Removendo caso so tenha um valor
    else if((*head)->next==NULL && strcmp((*head)->name,name_remove)==0 ){
        remover=*head;
        free(remover);
        *head=NULL;
        return;
    }
    // removendo o comeco caso tenha mais de um valor
    else if(strcmp((*head)->name,name_remove)==0){
        remover=*head;
        *head=(*head)->next;
        free(remover);
        return;
    }

    else{
        No *aux=*head;

        while(aux!=NULL){

            if(aux->next!=NULL && strcmp(aux->next->name,name_remove)==0){
                remover=aux->next;
                aux->next=aux->next->next;
                free(remover);
                return;
            }

            aux=aux->next;

        }

        //se sair do lox que dizer que nao encontrou o nome
        printf("Nome nao encontrado na lista\n");
    }
    
}


int main(){
    
    No *head=NULL;
    int comando=-1;

    do{
        printf("1-adiciona\n2-listar\n3-remover\n4-sair\n");
        
        scanf("%d",&comando);

        if(comando==1){
            char nome[51];
            int falta;
            float nota;
            scanf("%s",nome);
            scanf("%d",&falta);
            scanf("%f",&nota);

            add(&head,nome,nota,falta);

        }
        else if(comando==3){
            char remover_nome[51];
            scanf("%s",remover_nome);
            remover(&head,remover_nome);
        }
        else if(comando==2){
            listar(head);
        }
    }   while(comando!=4);

    return 0;
}