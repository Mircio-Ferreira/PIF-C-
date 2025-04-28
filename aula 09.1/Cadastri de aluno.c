/******************************************************************************

Implemente um cadastro de alunos com funções para adicionar, remover e listar alunos
usando listas encadeadas. Cada aluno deve ter um login (string sem espaços),
uma nota (float) e a quantidade de faltas (int).

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno{
    char Login[200];
    float nota;
    int faltas;
    struct aluno *proximo;
}No;

void add(No **lista,char *nome,float nt,int ft){
    No *nova_celula=malloc(sizeof(No));
    strcpy(nova_celula->Login,nome);
    nova_celula->nota=nt;
    nova_celula->faltas=ft;
    nova_celula->proximo=NULL;

    if(*lista==NULL){
        *lista=nova_celula;
    }

    else{
        No *aux=*lista;

        while(aux->proximo!=NULL) {
            aux=aux->proximo;
        }
        aux->proximo=nova_celula;
    }
}

void add_alfabetica(No **lista,char *nome,float nt,int ft){
    No *nova_celula=malloc(sizeof(No));
    strcpy(nova_celula->Login,nome);
    nova_celula->nota=nt;
    nova_celula->faltas=ft;
    nova_celula->proximo=NULL;

    if(*lista==NULL){
        *lista=nova_celula;
    }

    else{
        No *aux=*lista;

        while(aux->proximo!=NULL) {
            aux=aux->proximo;
        }
        aux->proximo=nova_celula;
    }
}

void listar(No **lista){
    No *aux=*lista;
    if(*lista==NULL) printf("Lista vazia!\n");

    else{
        while(aux->proximo!=NULL){
            printf("Login: %s | Nota: %.2f | Faltas: %d\n", aux->Login, aux->nota, aux->faltas);
            aux=aux->proximo;
        }
        printf("Login: %s | Nota: %.2f | Faltas: %d\n", aux->Login, aux->nota, aux->faltas);
}

}

void remover(No **lista,char *nome){
    No *aux=*lista;
    if(*lista==NULL) printf("Nao a o que remover, lista vazia\n");

    else if(aux->proximo==NULL && (strcmp(nome,aux->Login)==0) ){
        free(*lista);
        *lista=NULL;
    }
    //Primeiro no
    else if(aux->proximo!=NULL && (strcmp(nome,aux->Login)==0)){
        *lista=aux->proximo;
        free(aux);
    }
    
    //No do meio e ultimo
    else{
        No *celula_anterior;
        while(aux->proximo!=NULL){
            //Celula do meio
            if(strcmp(nome,aux->Login)==0){
                
                celula_anterior->proximo=aux->proximo;
                free(aux);

                return;
            }
            
            celula_anterior=aux;
            aux=aux->proximo;
        }

        //Ultima celua
        if(aux->proximo==NULL && strcmp(nome,aux->Login)==0){
            celula_anterior->proximo=NULL;
            free(aux);
            return;
            
        }

        printf("Aluno não esta cadastrado\n");
    }
}



int main(){

    No *celula=NULL;

    int opcao;
    char nome[200];
    float nota;
    int faltas;

    do {
        printf("\nMENU\n");
        printf("1. Adicionar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Remover aluno\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar aluno
                printf("Digite o login do aluno: ");
                scanf("%s", nome);
                printf("Digite a nota do aluno: ");
                scanf("%f", &nota);
                printf("Digite o numero de faltas do aluno: ");
                scanf("%d", &faltas);
                add(&celula, nome, nota, faltas);
                printf("Aluno adicionado com sucesso!\n");
                break;

            case 2:
                // Listar alunos
                printf("Lista de alunos:\n");
                listar(&celula);
                break;

            case 3:
                // Remover aluno
                printf("Digite o login do aluno a ser removido: ");
                scanf("%s", nome);
                remover(&celula, nome);
                break;

            case 4:
                // Sair
                printf("Saindo do sistema.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 4); // Repete o menu até o usuário escolher sair

    return 0;
}