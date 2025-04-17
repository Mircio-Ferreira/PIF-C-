#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    int l=5,c=5;


    int **matriz;

    matriz=malloc(l*sizeof(int *));

    for(int i=0;i<l;i++) {
        matriz[i]=malloc((c)*sizeof(int));
        c=c-1;
    }


    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matriz[i][j]);
        }
    }




    int matriz2[l][c];

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz2[i][j]);
        }
    }

    return 0;
}