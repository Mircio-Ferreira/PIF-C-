#include <stdio.h>
#include <string.h>

char *quantificar(char *palavra,int tamanho){

    char palavra_ordenada[201];
    palavra_ordenada[0]=palavra[0];
    palavra_ordenada[1]='1';
    int cont_ordenacao=0, repeticao=1;

    for(int i=0;i<tamanho;i++){
        if(palavra[i]==palavra[i+1]){
            repeticao++;
            palavra_ordenada[cont_ordenacao+1]=repeticao+'0';
        }
        else{
            repeticao=1;
            cont_ordenacao+=2;
            palavra_ordenada[cont_ordenacao]=palavra[i+1];
            palavra_ordenada[cont_ordenacao+1]=repeticao+'0';


        }
    }
        palavra_ordenada[cont_ordenacao+2]='\0';
        
        strcpy(palavra,palavra_ordenada);
    
    return palavra;

}

int main(){

    char palavra[100]="AABBAAACD";
    int tamanho=strlen(palavra);

    printf("%s",quantificar(palavra,tamanho));


}