#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor,len=5,entrada;

    vetor=(int *)malloc(5*sizeof(int));

    for(int i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }

    while(1){
        scanf("%d",&entrada);

        if(entrada==-1) break;

        len++;

        vetor=(int *)realloc(vetor,len*sizeof(int));
        vetor[len-1]=entrada;
        
    }

    for(int i=0;i<len;i++){
        printf("|%d|",vetor[i]);
    }

    free(vetor);

    return 0;
}