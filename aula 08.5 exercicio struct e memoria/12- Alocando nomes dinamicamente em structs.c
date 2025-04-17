#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *titulo;
    int pagina;
} Livro;

int main(){
    int n=2;

    Livro *vetor;
    vetor=malloc(n*sizeof(Livro));

    for(int i=0;i<n;i++){
        vetor[i].titulo=malloc(50*sizeof(char));
        scanf(" %[^\n]",vetor[i].titulo);
        scanf(" %d",&vetor[i].pagina);
    }

    for(int i=0;i<n;i++){
        printf("Livro: %s\tPagina: %d\n",vetor[i].titulo,vetor[i].pagina);
    }
    free(vetor);

    return 0;
}