#include <stdio.h>
#include <stdlib.h>



int main(){

    int n,**matriz;
    scanf("%d",&n);

    matriz=(int **)calloc(n,sizeof(int *));

    for(int i=0;i<n;i++){
        matriz[i]=(int *)calloc(n-i,sizeof(int));
    }

    for(int i=0;i<n;i++){
        scanf("%d",&matriz[0][i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(matriz[i][j]==matriz[i][j+1]) matriz[i+1][j]=1;
            else matriz[i+1][j]=-1;
        }
    }

    if(matriz[n-1][0]==-1) printf("branca\n");
    else printf("preta\n");
;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("|%d|",matriz[i][j]);

    //     }
    //     printf("\n");
    // }

    return 0;
}