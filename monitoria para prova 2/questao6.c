/*
QUESTÃO 06: Escreva uma função que receba um array, seu tamanho e um número a ser buscado,
retornando o ponteiro para o elemento encontrado (ou NULL se não estiver presente). 
Os parâmetros da função deverão receber: o array de inteiros, o tamanho do array, o número para busca*/


#include <stdio.h>
#include <string.h>

int *busca(int *vetor,int tamanho,int alvo){
    for(int i=0;i<tamanho;i++){
        if(*(vetor+i)==alvo){
            return &vetor[i];
        }
    }
    return NULL;
}


int main(){

    int vetor[3]={1,2,3};
    int tamanho=3;

    printf("%p\n",&vetor[1]);

    printf("%p",busca(vetor,tamanho,2));

    return 0;
}