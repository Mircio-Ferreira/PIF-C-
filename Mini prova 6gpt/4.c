#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}No;

void insert(No **head,int n){
    No *new=malloc(sizeof(No));
    new->num=n;
    new->next=NULL;

    if(*head==NULL) {
        *head=new;
        return;
    }
    
    No *aux=*head;

    while(aux->next!=NULL){
        aux=aux->next;
    }
    aux->next=new;
}

void imprimir(No *inicio){

    if(inicio==NULL) return;

    imprimir(inicio->next);
   
    printf("%d\n",inicio->num);
    
}

int main(){
    No *head=NULL;

    FILE *read;
    int num;
    read=fopen("numeros.txt","r");

    if(read==NULL){
        printf("Erro ao ler arquivo\n");
        return 1;
    }

    while(fscanf(read,"%d",&num)!=EOF){
        insert(&head,num);
    }

    imprimir(head);

    return 0;
}