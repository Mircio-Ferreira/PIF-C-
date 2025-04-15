#include <stdio.h>
#include <stdlib.h>

int* criar_vetor_dinamico(int len){
    int *vetor;
    vetor=(int *)malloc(len*sizeof(int));

    return vetor;
}

int main(){
    int len,*vetor;

    len=5;

    vetor=criar_vetor_dinamico(len);

    for(int i=0;i<len;i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<len;i++){
        printf("|%d|",vetor[i]);
    }

    free(vetor);
    return 0;
}