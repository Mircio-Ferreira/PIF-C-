#include <stdio.h>

int operacao_array(int *vetor, int tamanho, char opcao){
    int soma=0,produto=1;

    for(int i=0;i<tamanho;i++){
        soma+=*(vetor+i);
        produto*=*(vetor+i);
    }
    if(opcao=='S') return soma;

    else if(opcao=='P') return produto;

    else return -1;

}

int main(){

    int vetor[10]={1,1,2,3,4,5,6,7,8,9};

    printf("%d",operacao_array(vetor,10,'P'));
}