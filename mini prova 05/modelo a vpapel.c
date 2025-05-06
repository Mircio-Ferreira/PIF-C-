//Você ficou encarregado (a) de fazer a parte de controle das informações dos alunos da disciplina de PIF. 
//Cada aluno possui um nome (no máximo 50 caracteres), quantidade de faltas (inteiro), array com 10 notas representando 
//as listas de exercício e mini provas  (float) e a média geral do aluno (float). Implemente o seguinte:

//Estrutura do aluno com base nos dados descritos na questão (0.5);
//Função de inserção de alunos em ordem alfabética de nome (1.0);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[51];
    int falta;
    float nota[10];
    float media;
    struct node *next;
}No;

void insert_sort(No **head,char *nick, int ft,float md, float *nt){
    No *new=malloc(sizeof(No));
    new->falta=ft;
    new->media=md;
    new->next=NULL;
    strcpy(new->nome, nick);
    for(int i=0;i<10;i++){
        new->nota[i]=nt[i];
    }
    if(*head==NULL) *head=new;

    else if(strcmp((*head)->nome,nick)>0){
        new->next=*head;
        *head=new;
        return;
    }
    else{
        No *aux=*head;
        while(aux->next!=NULL){

            if(strcmp(aux->next->nome,nick) > 0){
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
        aux->next=new;
        return;
    }
}

void listar(No *head){
    No *aux=head;

    while (aux != NULL) {
        printf("Nome: %s, Faltas: %d\n", aux->nome, aux->falta);
        printf("Notas: ");
        for (int i = 0; i < 10; i++) {
            printf("%.2f ", aux->nota[i]);
        }
        printf("\tmedia: %.2f",aux->media);
        printf("\n\n");
        aux = aux->next;
    }
    
}


int main(){

        
    No *head = NULL;
    float notas1[10] = {7.0, 8.0, 9.0, 7.5, 6.5, 8.0, 7.0, 9.5, 8.0, 7.0};
    float notas2[10] = {6.0, 7.0, 8.0, 7.0, 8.5, 7.0, 6.5, 7.5, 8.0, 9.0};
    float notas3[10] = {8.0, 9.0, 7.5, 8.0, 9.5, 8.5, 9.0, 9.0, 8.0, 8.5};

    insert_sort(&head, "Carlos",0, 3.0, notas1);
    insert_sort(&head, "Ana", 1,2.0, notas2);
    insert_sort(&head, "Beatriz", 3,1.0, notas3);

    listar(head);
    
    


    return 0;
}