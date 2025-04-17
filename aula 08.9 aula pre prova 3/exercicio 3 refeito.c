#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    } Dependente;

typedef struct {
    char nome[100];
    int id;
    int qtdDependentes;
    Dependente* dependentes;
    } Funcionario;



int main(){

    int n;
    scanf("%d",&n);
    
    Funcionario *fun;
    
    fun=malloc(n*sizeof(Funcionario));

    for(int i=0;i<n;i++){
        scanf(" %[^\n]",fun[i].nome);
        scanf(" %d",&fun[i].id);
        scanf(" %d",&fun[i].qtdDependentes);
        fun[i].dependentes=malloc(fun[i].qtdDependentes*sizeof(Dependente));

        for(int j=0;j<fun[i].qtdDependentes;j++){
            scanf(" %[^\n]",fun[i].dependentes[j].nome);
            scanf(" %d",&fun[i].dependentes[j].idade);
        }      
    }

    for(int i=0;i<n;i++){
        printf("ID:[%d]\tNome:[%s]\tQuantidade de depedentes[%d]\n",fun[i].id,fun[i].nome,fun[i].qtdDependentes);
        for(int j=0;j<fun[i].qtdDependentes;j++){
            printf("\tNome: %s\tIdade: %d\n",fun[i].dependentes[j].nome,fun[i].dependentes[j].idade);   
        }  
    }


    for(int i=0;i<n;i++){
        free(fun[i].dependentes);
    }
    free(fun);

    return 0;
}