/*
Questão 2 – Contagem de vogais recursiva em palavras do arquivo
Escreva uma função recursiva para contar o número de vogais em uma string.

c
Copiar
Editar
int contar_vogais(char *str);
Depois, crie um programa que leia palavras (uma por linha) do arquivo ENTRADA.txt e grave no arquivo SAIDA.txt o número de vogais em cada palavra.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cont_volgar(char *string){
    if(*string=='a') return 1+cont_volgar(string+1);
    
    if(*string=='\0') return 0;

    return 0+cont_volgar(string+1);
}

int main(){

    FILE *read,*write;
    read=fopen("entrada.txt","r");
    write=fopen("saixa.txt","w");
    int cont_a=0;
    char line[1000];

    if(read==NULL) return 1;
    if(write==NULL) return 2;

    while(fgets(line,sizeof(line),read)!=NULL){
        cont_a=cont_volgar(line);
        fprintf(write,"Numero de vogais a: %d linha: %s",cont_a,line);
    }

    fclose(write);
    fclose(read);
    


    return 0;
}