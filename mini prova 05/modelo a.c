//Você ficou encarregado (a) de fazer a parte de controle das informações dos alunos da disciplina de PIF. 
//Cada aluno possui um nome (no máximo 50 caracteres), quantidade de faltas (inteiro), array com 10 notas representando 
//as listas de exercício e mini provas  (float) e a média geral do aluno (float). Implemente o seguinte:

//Estrutura do aluno com base nos dados descritos na questão (0.5);
//Função de inserção de alunos em ordem alfabética de nome (1.0);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[51];
    int falta;
    float vetor[10];
    struct node *next;
}no;

void insert_sort(no **head,char *nome,int ft,float *ptr_vecotr);

void print_list(no *head);


int main(){
    
    no *head = NULL;
    float notas1[10] = {7.0, 8.0, 9.0, 7.5, 6.5, 8.0, 7.0, 9.5, 8.0, 7.0};
    float notas2[10] = {6.0, 7.0, 8.0, 7.0, 8.5, 7.0, 6.5, 7.5, 8.0, 9.0};
    float notas3[10] = {8.0, 9.0, 7.5, 8.0, 9.5, 8.5, 9.0, 9.0, 8.0, 8.5};

    insert_sort(&head, "Carlos", 3, notas1);
    insert_sort(&head, "Ana", 2, notas2);
    insert_sort(&head, "Beatriz", 1, notas3);

    print_list(head);

    return 0;
}

void insert_sort(no **head,char *nome,int ft,float *ptr_vecotr){
    no *new=malloc(sizeof(no));

    strcpy(new->name,nome);
    new->falta=ft;
    for(int i=0;i<10;i++){
        new->vetor[i]=ptr_vecotr[i];
    }
    new->next=NULL;

    if(*head==NULL) *head=new;

    else if(strcmp(nome,(*head)->name) <0 ){
        new->next=*head;
        *head=new;
    }

    else{  
        no *aux=*head;

        while(aux!=NULL){

            if(aux->next!=NULL &&  strcmp(nome,aux->next->name) < 0 ){
                new->next=aux->next;
                aux->next=new;
                return;
            }

            aux=aux->next;
        }
        // Se sair do while que dizer que vou inserir no ultimo
        aux->next=new;

    }

}

void print_list(no *head) {
    no *aux = head;
    while (aux != NULL) {
        printf("Nome: %s, Faltas: %d\n", aux->name, aux->falta);
        printf("Notas: ");
        for (int i = 0; i < 10; i++) {
            printf("%.2f ", aux->vetor[i]);
        }
        printf("\n\n");
        aux = aux->next;
    }
}