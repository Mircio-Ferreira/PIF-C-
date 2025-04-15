#include <stdio.h>
#include <stdlib.h>

int main(){
    int quant;
    scanf("%d",&quant);

    int *vetor;

    //vetor=(int *)malloc(quant*sizeof(int));

    vetor=(int *)calloc(quant,sizeof(int));

    printf("Printando valores zerados!\n");

    for(int i=0;i<quant;i++){
        printf("|%d|",vetor[i]);
    }

    printf("\n");


    for(int i=0;i<quant;i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<quant;i++){
        printf("|%d|",vetor[i]);
    }

    free(vetor);
}