#include<stdio.h>
#include<string.h>

char *comprimir(char *palavra, char *saida){
    int cont=0;
    int idx_saida=0;

    if(strlen(palavra) == 0) {
        saida[0]='0';
        saida[1]='\0';

        return saida;
    }

    for(int i=0;palavra[i]!='\0';i++){
        cont++;
        if(palavra[i]!=palavra[i+1]){
            saida[idx_saida++]=palavra[i];
            saida[idx_saida++]=cont+'0';
            cont=0;
            
        }
    }
    saida[idx_saida]='\0';

    return saida;
}

int main(){

    char parte1[100]="AAABBCDD";

    char parte2[100];

    comprimir(parte1,parte2);

    printf("%s",parte2);

    

    
    return 0;
}