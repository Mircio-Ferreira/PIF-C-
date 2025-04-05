#include <stdio.h>
#include <stdlib.h>

int main(){

    int len,*vetor,*vetor2, soma1=0, soma2=0;

    scanf("%d",&len);

    vetor=(int *)malloc(len*sizeof(int));

    for(int i=0;i<len;i++){
        scanf("%d",vetor+i);
        soma1+=*(vetor+i);
    }

    vetor2=(int *)malloc(len*sizeof(int));

    for(int i=0;i<len;i++){
        vetor2[i]=vetor[i];
        soma2+=vetor2[i];
    }

    printf("soma do vetor 1: %d\nSoma do vetor2: %d",soma1,soma2);


    free(vetor);
    free(vetor2);
    


    return 0;
}