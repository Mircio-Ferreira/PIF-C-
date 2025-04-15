#include <stdio.h>
#include <stdlib.h>

int main(){
    int l,c,**matriz;
    scanf(" %d %d",&l,&c);

    matriz=(int **)malloc(l*sizeof(int *));

    for(int i=0;i<l;i++){
        matriz[i]=(int *)malloc(c*sizeof(int));
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matriz[i][j]);
        }
    }


    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("|%d|",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}