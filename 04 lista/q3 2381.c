#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    char nome[21];
    struct node *next;
}No;

void inserirAlfabetico(No **head, char *entrada);

void printar(No *head, int repeticao);

int main(){

    int quant_nome, posi;
    char nome[21];
    No *head=NULL;

    scanf("%d %d",&quant_nome,&posi);

    for(int i=0;i<quant_nome;i++){
        scanf(" %s",nome);

        inserirAlfabetico(&head,nome);
    }

    printar(head,posi);
    
    return 0;
    
}

void inserirAlfabetico(No **head, char *entrada){
    No *new=malloc(sizeof(No));
    strcpy(new->nome,entrada);
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(strcmp(entrada,(*head)->nome) <0 ){
        new->next=*head;
        *head=new;
    }
    else{
        No *aux=*head;

        while(aux->next!=NULL){
            
            if(strcmp(entrada,aux->next->nome) <0 ){

                new->next=aux->next;
                aux->next=new;

                return;
            }
            aux=aux->next;
        }
        aux->next=new;
    }
}

void printar(No *head, int repeticao){
    int cont=1;

    while(head!=NULL){
        if(cont==repeticao){
            printf("%s\n",head->nome);
            return;
        }
        head=head->next;
        cont++;
    }

}
