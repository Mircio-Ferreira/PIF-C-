#include<stdio.h>
#include<stdlib.h>

int main(){
    int len, *vetor,soma=0;
    scanf(" %d",&len);
    
    vetor=(int *)malloc(len*sizeof(int));

    for(int i=0;i<len;i++){
        scanf("%d",vetor+i);
        soma+=*(vetor+i);
    }

    free(vetor);

    printf("soma: %d",soma);

    return 0;
}