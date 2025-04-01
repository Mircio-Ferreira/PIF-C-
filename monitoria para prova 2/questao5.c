#include <stdio.h>
#include <string.h>

/*QUESTÃO 05: Implemente uma função que receba um array e retorne o maior e o menor elemento utilizando ponteiros. 
Os parâmetros da função deverão receber: o array de inteiros, o tamanho do array, o ponteiro para o maior e o ponteiro para o menor.*/

void maior_menor(int *maior, int *menor, int *vetor,int tam){
    
    *maior=*(vetor);
    *menor=*(vetor);

    for(int i=1;i<tam;i++){
          if(*maior<*(vetor+i)) *maior=*(vetor+i);

          if(*menor>*(vetor+i)) *menor=*(vetor+i);

    }
}

int main(){

    int vetor[10] = {0, 1, -2, 3, 4, 5, 6, 1001, 8, 9};
    int tam=10;

    int maior,menor;

    maior_menor(&maior,&menor,vetor,tam);

    printf("%d || %d",menor,maior);

    return 0;
}