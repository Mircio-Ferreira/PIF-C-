#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *nome;
    int pag;
} livro;

int main(){
    int quanto_livros;
    scanf("%d",&quanto_livros);
    livro *vetor;
    vetor=malloc(quanto_livros*sizeof(livro));

    for(int i=0;i<quanto_livros;i++){
        (*vetor).nome=malloc(50*sizeof(char));
    }

    return 0;
}