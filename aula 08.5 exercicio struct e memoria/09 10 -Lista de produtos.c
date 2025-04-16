#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;
} pessoa;

void imprimir_pessoa(pessoa humano){
    printf("nome: %s \tidade: %d\taltura: %f\n",humano.nome,humano.idade,humano.altura);
}

int main(){

    pessoa humano;
    scanf("%s",humano.nome);
    humano.idade=24;
    humano.altura=1.99;

    imprimir_pessoa(humano);
    
    return 0;
}