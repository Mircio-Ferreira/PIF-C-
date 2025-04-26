#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char login[100];
    float nota;
    int faltas;
    struct aluno *proximo;
}aluno;

void add(aluno celula,aluno **incio_lista){

    aluno *nova_celula = malloc(sizeof(aluno));
    //nova_celula->login = celula.login;
    nova_celula->nota = celula.nota;
    nova_celula->faltas = celula.faltas;
    nova_celula->proximo=NULL;

    if(*incio_lista==NULL) *incio_lista=nova_celula;

    else{
        aluno *pecorrer=incio_lista;

        while(pecorrer->proximo!=NULL){
            pecorrer=pecorrer->proximo;
        }
        percorrer->proximo = nova_celula;
        
    }


}


int main(){
    int opcao=100;

    while(opcao!=0){
        printf("\n1-ADICIONAR\n2-Remover\n3-Lista Alunos\n4-Sair\nDigite comando: ");
        scanf(" %d",&opcao);
        if(opcao==1){

        }
        else if(opcao==2){

        }
        else if(opcao==3){

        }
        else if(opcao==4){
            break;
        }
    }
    


    return 0;
}