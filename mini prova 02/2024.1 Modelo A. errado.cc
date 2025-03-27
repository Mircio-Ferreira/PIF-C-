#include <stdio.h>
#include <string.h>

int verificar_paladromo(char *ptrpalavra);

int main(){
    
    char palavra[100];

    scanf(" %s",palavra);

    if(verificar_paladromo(palavra)) printf("\npalidromo\n");
    else printf("\nnao palidromo\n");

    return 0;
}

int verificar_paladromo(char *ptrpalavra){
    int tamanho=strlen(ptrpalavra)+1;

    char inverso[tamanho];

    int cont=0,cont_inverso=tamanho-1;

    while(ptrpalavra[cont]!='\0'){
        inverso[cont_inverso]=ptrpalavra[cont];
        cont_inverso--;
        cont++;
    }
    inverso[tamanho-1]='\0';

    printf("\n%s\n",inverso);

    printf("%d",strcmp(ptrpalavra,inverso));

    if(strcmp(ptrpalavra,inverso)==0) return 1 ;
    else return 0;

}

