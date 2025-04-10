#include <stdio.h>
#include <stdlib.h>

struct string{
    char caracteres[3];
};

int main(){
    int linha,coluna;
    int **matriz;
    
    scanf("%d %d",&linha,&coluna);

    matriz=(char **)calloc(linha,sizeof(char*));

    for(int i=0;i<linha;i++){
        matriz=(char *)calloc(coluna,sizeof(char ));
    }

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matriz[i][j]=struct
        }
    }

    
    


    return 0;
}