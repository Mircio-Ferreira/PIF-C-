/******************************************************************************

Implemente um cadastro de alunos com funções para adicionar, remover e listar alunos
usando listas encadeadas. Cada aluno deve ter um login (string sem espaços),
uma nota (float) e a quantidade de faltas (int).
Faca uma funcao para colocar em sort
Limpar a lista dps de terminar
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome[50];
    float nota;
    int faltas;
    struct node *next;
}No;

//void insert(No **head, char *nome_enter,float nt, int ft);

void insert_Sort(No **head, char *nome_enter,float nt, int ft);

void list(No *head);

void delete (No **head, char *nome_delete);

void limpar (No **head);

int main(){
    No *head = NULL;
    int opcao;
    char nome[50];
    float nota;
    int faltas;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Adicionar aluno\n");
        printf("2 - Remover aluno\n");
        printf("3 - Listar alunos\n");
        printf("4 - Ordenar alunos (NOME)\n");
        printf("5 - Limpar lista\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer do enter

        switch(opcao) {
            case 1:
                printf("Nome (sem espacos): ");
                scanf("%s", nome);
                printf("Nota: ");
                scanf("%f", &nota);
                printf("Faltas: ");
                scanf("%d", &faltas);
                //insert(&head, nome, nota, faltas);
                insert_Sort(&head, nome, nota, faltas);
                break;
            case 2:
                printf("Nome do aluno a remover: ");
                scanf("%s", nome);
                delete(&head, nome);
                break;
            case 3:
                list(head);
                break;
            case 4:
                printf("Funcao de ordenacao ainda nao implementada.\n");
                break;
            case 5:
                limpar(&head);
                printf("Lista limpa.\n");
                break;
            case 0:
                limpar(&head);
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}


// void insert(No **head, char *nome_enter,float nt, int ft){
//     No *new=malloc(sizeof(No));
//     new->faltas=ft;
//     new->nota=nt;
//     strcpy(new->nome,nome_enter);
//     new->next=NULL;

//     if (*head==NULL) *head=new;

//     else{
//         No *aux=*head;

//         while(aux->next!=NULL){
//             aux=aux->next;
//         }
//         aux->next=new;
//     }
// }

void list(No *head){

    if(head==NULL) printf("Lista vazia!\n");

    else{
        No *aux=head;
        while(aux!=NULL){
            printf("Nome: %s\tNota: %.2f\tFalta: %d\n",aux->nome,aux->nota,aux->faltas);
            aux=aux->next;
        }
    }
}

void delete (No **head, char *nome_delete){

    No *aux=*head; 
    
    if(*head==NULL) printf("Nao ha o que remover, lista vazia!\n");

    else if(aux->next==NULL && strcmp(aux->nome,nome_delete)==0 ){
        free(aux);
        *head=NULL;
        return;
    }

    else if(strcmp(aux->nome,nome_delete)==0 ){
        *head=aux->next;
        free(aux);
        return;
    }

    else{

        while(aux->next!=NULL){
            if(strcmp(aux->next->nome,nome_delete)==0){
                No *delete=aux->next;
                aux->next=aux->next->next;
                free(delete);
                return;
            }
            aux=aux->next;
        }

        printf("Nome nao encontrado\n");
    }
}

void limpar (No **head){
    
    No *aux=*head;
    while(aux!=NULL){
        No *delete=aux;
        aux=aux->next;
        free(delete);
    }
    *head=NULL;
}

void insert_Sort(No **head, char *nome_enter,float nt, int ft){
   
    No *new=malloc(sizeof(No));
    new->faltas=ft;
    new->nota=nt;
    strcpy(new->nome,nome_enter);
    new->next=NULL;

    if (*head==NULL) *head=new;

    else if(strcmp(nome_enter,(*head)->nome)<0){
        new->next=*head;
        *head=new;
    }

    else{
        No *aux=*head;
        
        while(aux->next!=NULL){
            if(strcmp(nome_enter,aux->next->nome)<0){
                new->next=aux->next;
                aux->next=new;
                return;
            }
            aux=aux->next;
        }
        //Inserindo no final
        aux->next=new;

    }
}
