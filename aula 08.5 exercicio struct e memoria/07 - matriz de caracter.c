#include <stdio.h>
#include <stdlib.h>

int main(){
    char **matriz;
    int palavras=2;

    matriz=(char **)calloc(5,sizeof(char*));

    for(int i=0;i<palavras;i++){
        char entrada;
        int len=0;

        while(1){
            scanf("%c",&entrada);

            if(entrada=='\n') break;

            matriz[i]=(char *)realloc(matriz[i],(len+2));
            matriz[i][len]=entrada;
            len++;

        }
            matriz[i][len]='\0';
    }

        for(int i=0;i<palavras;i++){
            printf("%s\n",matriz[i]);
            free(matriz[i]);
        }
        free(matriz);

    return 0;
}