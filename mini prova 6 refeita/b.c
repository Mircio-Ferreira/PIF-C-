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

void inverter_arquivo(FILE *in, FILE *out){

    char linha[1000];

    if(fscanf(in," %[^\n]",linha)==EOF) return;
    
    inverter_arquivo(in,out);

    fprintf(out,"%s\n",linha);
}

int main(){

    FILE *in,*out;
    in=fopen("entrada.txt","r");
    out=fopen("saida.txt","w");

    if(in==NULL) return 1;

    if(out == NULL) return 2;

    inverter_arquivo(in,out);

    fclose(in);
    fclose(out);

    printf("End of programing\n");

    return 0;
}