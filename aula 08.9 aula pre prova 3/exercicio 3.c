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
    Funcionario *fun;
    Dependente *dep;
    printf("Favor digite a quantidade de funcionarios cadastrada no sistema: ");
    scanf("%d",&n);

    fun=malloc(n*sizeof(Funcionario));

    for(int i=0;i<n;i++){
        printf("\nDigite o nome do funcionario [%d]: ",i);
        scanf(" %[^\n]",fun[i].nome);
        // O id sera o valor dele de acordo com o i+1;
        fun[i].id=i+1;
        printf("Favor digite a quantidade de depedentes que tem: ");
        scanf("%d",&fun[i].qtdDependentes);
        
        dep=malloc(fun[i].qtdDependentes*sizeof(Dependente));

        for(int j=0;j<fun[i].qtdDependentes;j++){
            printf("Favir Digite nome do depedente: ");
            scanf(" %[^\n]",dep[j].nome);
            printf("Favor digite a idade: ");
            scanf("%d",&dep[j].idade);
        }

        fun[i].dependentes=dep;
    }

    for(int i=0;i<n;i++){
        printf("ID: [%d] Nome:[%s]\n",fun[i].id,fun[i].nome);

        for(int j=0;j<fun[i].qtdDependentes;j++){
            printf("[%d]\tDependete:[%s]\tIdade[%d]\n",j,fun[i].dependentes[j].nome,fun[i].dependentes[j].idade);
        }
    }

    for(int i=0;i<n;i++){
        free(fun[i].dependentes);
    }
    free(fun);

    return 0;
}