#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int primo(int numero,char string[100]);

int main(){

    int valor;
    char string[100];

    scanf("%d",&valor);
    scanf("%s",string);
    
    int resposta = primo(valor,string);

    if (resposta==1){
        printf("Primo!\n");
    }
    else{
        printf("Não é primo!\n");
    }
    return 0;
}

int primo(int numero,char string[100]){
    int valor=1;

    if (numero != 1 && numero != 2){
        for (int i=2;i<numero-1;i++){
            if (numero%i==0){
                valor=0;
                break;
            }
        }
    }
    

    char stringnumero[12];

    sprintf(stringnumero, "%d", numero);

    int tamanhostring = strlen(string);
    int tamanhonumero = strlen(stringnumero);

    int total= tamanhostring + tamanhonumero;
    int contletras=0,contnumero=0,i=0;

    char resposta[total+1];
    

    while (i<total){
        if (contletras < tamanhostring) {
            resposta[i] = string[contletras];
            contletras++;
        } else if (contnumero < tamanhonumero) {
            resposta[i] = stringnumero[contnumero];
            contnumero++;
        }
        i++;
    }

    resposta[total]='\0';

    printf("%s\n",resposta);

   return valor;
}