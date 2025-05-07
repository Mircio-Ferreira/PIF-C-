#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    char nome[21];
    struct node *next;
}No;

void inserie_ordem (No **head, char *entrada);

void listar(No *head);

int main(){
    
    No *head=NULL;
    int repeticao, posi=0 , nega=0;
    char nome[21];
    char sinal;

    scanf("%d",&repeticao);

    for(int i=0;i<repeticao;i++){

        scanf(" %c %s",&sinal,nome);
        
        if(sinal == '+') posi++;

        else nega++;

        inserie_ordem(&head,nome);        
    }

    listar(head);

    printf("Se comportaram: %d | Nao se comportaram: %d\n",posi,nega);

    return 0;
}


void inserie_ordem (No **head, char *entrada){

    No *new=malloc(sizeof(No));
    strcpy(new->nome,entrada);
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(strcmp((*head)->nome , entrada) >0 ){
        new->next=*head;
        *head =new;
    }

    else{
        No *aux=*head;

        while(aux->next!=NULL){

            if (strcmp(entrada, aux->next->nome) < 0) {
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;

        }

        aux->next=new;

    }
}

void listar(No *head){

    while(head!=NULL){
        printf("%s\n",head->nome);
        head=head->next;
    }
}

