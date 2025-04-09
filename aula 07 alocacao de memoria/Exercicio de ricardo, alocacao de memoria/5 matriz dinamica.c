#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz,n;

    scanf("%d",&n);

    matriz=(int **)malloc(n*sizeof(int *));

    for(int i=0;i<n;i++){
        matriz[i]=(int *)malloc(n*sizeof(int));
   }

   for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        matriz[i][j] = 1;
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

    return 0;
}