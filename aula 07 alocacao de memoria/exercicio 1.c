#include <stdio.h>
#include <stdlib.h>

int main(){

    int len1=0,soma=0,len2;
    int *vetor;
    scanf(" %d",&len1);

    //vetor=(int *)malloc(len1*sizeof(int));
    vetor = (int *)malloc(len1 * sizeof(int));


    if(vetor!=NULL){
        for(int i=0;i<len1;i++) {
        scanf(" %d",&vetor[i]);
        soma+=vetor[i];
    }
    }

    //printf("\nSoma: %d\n",soma);

    scanf("%d",&len2);

    vetor=(int *)realloc(vetor,len2*sizeof(int));

    if(vetor!=NULL){
        for(int i=len1;i<len2;i++) {
        scanf(" %d",&vetor[i]);
        soma+=vetor[i];
    }
    }

    printf("\nSoma Total: %d",soma);

    free(vetor);

    



    return 0;
}