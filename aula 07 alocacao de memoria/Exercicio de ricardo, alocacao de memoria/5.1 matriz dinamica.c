#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz;

    int linhas=3,col=2,soma=0;;

    matriz=(int **)(calloc(linhas,sizeof(int *)));

    for(int i=0;i<linhas;i++){
        matriz[i]=(int *)malloc(col*sizeof(int));
    }

    for(int i=0;i<linhas;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matriz[i][j]);
            soma+=matriz[i][j];
        }
    }

    printf("A soma dos elementos foi: %d",soma);

    return 0;
}