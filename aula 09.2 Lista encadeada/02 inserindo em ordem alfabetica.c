#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node{
    char string[21];
    struct node *next;
}no;

void inserir_ordem(no **head,char *nome){
    no *novo=malloc(sizeof(no));
    strcpy(novo->string,nome);

    if(*head==NULL){
        *head=novo;
        novo->next=NULL;
    }
    else if(strcmp(nome,(*head)->string)<0){
        novo->next=*head;
        *head=novo;
    }

    else{
        no *aux=*head;

        while(aux!=NULL){

            
            if (aux->next != NULL && strcmp(nome, aux->next->string) < 0){
                novo->next=aux->next;
                aux->next=novo;

                return;
            }

            else if(aux->next==NULL){ 
                //vou colocar no final
                aux->next=novo;
                novo->next=NULL;
                return;
            }
            aux=aux->next;
        }
    }
}

void listar(no **head){
    no *aux=*head;
    while(aux!=NULL){
        printf("Nome: %s\n",aux->string);
        aux=aux->next;
    }
}


int main(){

    no *head=NULL;

    char entrada[21];

    for(int i=0;i<10;i++){
        scanf(" %s",entrada);
        inserir_ordem(&head,entrada);
    }

    listar(&head);
    
    

    return 0;
}