#include <stdio.h>

int main(){

    FILE *add;
    FILE *read;
    char linha[1000];

    add=fopen("02.txt","w");
    
    fputs("bananinha\n",add);

    fputs("laranjinha\n",add);

    fclose(add);

    read=fopen("02.txt","r");

    fgets(linha,sizeof(linha),add);

    printf("Linha 1: %s",linha);

    fgets(linha,sizeof(linha),add);

    printf("Linha 2: %s",linha);


    fclose(add);

    return 0;
}