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
    return 0;
}