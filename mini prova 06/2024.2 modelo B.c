//Escreva uma função recursiva que recebe como parâmetros os ponteiros FILE* dos arquivos textos de entrada e saída, 
//e inverte a ordem das linhas do arquivo de entrada, criando o arquivo de saída com as linhas na ordem inversa. 
//Sua função deve ter a seguinte assinatura:

//void inverter_arquivo(FILE *in, FILE *out);

//Depois, crie um programa que abre os arquivos ENTRADA.txt e SAIDA.txt, para leitura e escrita respectivamente, e chama 
//a função recursiva para inverter ENTRADA.txt gerando SAIDA.txt e por fim fecha os arquivos.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte_arquivo(FILE *in, FILE *out){
    char linha[1000];
    while(fgets(linha,sizeof(linha),in)!=NULL){
        inverte_arquivo(in,out);
        fputs(linha,out);
    }
}

int main(){

    FILE *in, *out;

    in=fopen("entrada.txt","r");
    out=fopen("saida.txt","w");

    if(in == NULL || out ==NULL){
        printf("Erro ao abrir alqul dos arquivos\n");
    }

    else{
         inverte_arquivo(in,out);
    }

    fclose(in);
    fclose(out);
    return 0;
}