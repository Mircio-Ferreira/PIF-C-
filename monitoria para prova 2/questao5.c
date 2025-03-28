#include <stdio.h>
#include <string.h>

/*QUESTÃO 05: Implemente uma função que receba um array e retorne o maior e o menor elemento utilizando ponteiros. 
Os parâmetros da função deverão receber: o array de inteiros, o tamanho do array, o ponteiro para o maior e o ponteiro para o menor.*/

void maior_menor(int *maior, int *menor, int *vetor){
    
    *maior=*(vetor);
    *menor=*(vetor);



    for(int i=1;i<10;i++){
          if(*maior<*(vetor+i)) *maior=*(vetor+i);

          if(*menor>*(vetor+i)) *menor=*(vetor+i);

    }
}

int main(){

    int vetor[10] = {0, 1, -2, 3, 4, 5, 6, 1001, 8, 9};

    int maior,menor;

    maior_menor(&maior,&menor,vetor);

    printf("%d || %d",menor,maior);

    return 0;
}