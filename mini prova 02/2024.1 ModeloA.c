#include <stdio.h>

int palidromo(char *palavra){
    int cont=0;
    for(int i=0; palavra[i]!='\0';i++){
        if(palavra[i]<'a') palavra[i]+=('a'-'A');
    }
    
    while(palavra[cont]!='\0') cont++;


    for(int i=0;palavra[i]!='\0';i++){
        if(palavra[i]!=palavra[cont-1-i]) return 1;
    }
    return 0;
}

int main(){

    char palavra[]="ReVivEr";

    int resultado=palidromo(palavra);
    
    if(resultado==1) printf("nao palidromo");
    else printf("palidromo");
    return 0;
}