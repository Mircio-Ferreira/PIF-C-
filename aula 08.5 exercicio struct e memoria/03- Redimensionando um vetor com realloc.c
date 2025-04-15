#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=3,*vetor;

    vetor=(int *)malloc(3*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    vetor=(int *)realloc(vetor,(n+2)*sizeof(int));

    for(int i=n;i<(n+2);i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=0;i<n+2;i++){
        printf("|%d|",vetor[i]);
    }
    
    return 0;
}