#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vetor,soma=0;

    scanf("%d",&n);

    vetor=(int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<n;i++){
        soma+=vetor[i];
    }

    printf("ala a soma foi de: %d",soma);
    

    return 0;
}