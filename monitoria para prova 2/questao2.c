#include<stdio.h>
#include<string.h>

int palidromo(char *ptr,int len);

int main(){

    char palavra[1000]="ata";
    int tamanho=strlen(palavra);
    if(palidromo(palavra,tamanho)) printf("nao e palidromo");
    
    else printf("palidromo");

    return 0;
}

int palidromo(char *ptr,int len){
    for(int i=0;i<len;i++){
        if(*(ptr+1)!=*(ptr+len-1)) return 0;
    }

    return 1;
}
