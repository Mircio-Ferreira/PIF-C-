#include <stdio.h>
#include <string.h>
int main(){

    char palavra[]="Mircio Ferreira Dos Santos Neto";
                    
    int idx=0;
    int idxtroca=0;
    
    while(palavra[idx]!='\0'){
        if(palavra[idxtroca]==' '){
            idxtroca++;
            palavra[idx]=palavra[idxtroca];   
        }
        else{
            palavra[idx]=palavra[idxtroca];
        }
        printf("%s\n",palavra);
        idxtroca++;
        idx++;
        }

    int tamanho=strlen(palavra);
    
    printf("Tamanho :%d\n",tamanho);

        
    palavra[idxtroca]='\0';

    tamanho=strlen(palavra);

    printf("Tamanho :%d\n",tamanho);
    printf("%s",palavra);

    return 0;
}