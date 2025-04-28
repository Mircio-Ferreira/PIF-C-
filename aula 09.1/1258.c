#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no{
    char nome[1000];
    char cor[11];
    char tamanho;
    struct no *proximo;
}No;





int main(){

    int quant;
    char nome[1000];
    char cor[11];
    char tamanho;

    do{
        scanf(" %d",&quant);

        for(int i=0;i<quant;i++){
            scanf(" %[^\n]",nome);
            scanf(" %[^\n] %c",cor,&tamanho);

        }

    } while(quant!=0);


    return 0;
}