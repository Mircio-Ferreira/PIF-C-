#include <stdio.h>
#include <string.h>

int main(){

    int valor=0;
    char palavra[]="12b345a6c789";
    char anagrama[]="12a345b67c89";
    int frequencia_palavra[257]={0};
    int frequencia_anagrama[257]={0};

    if(strlen(palavra)==strlen(anagrama)){

    for(int i = 0;palavra[i]!='\0';i++){
        frequencia_palavra[palavra[i]]+=1;    
        frequencia_anagrama[anagrama[i]]+=1;    
    }
    for(int i=0;i<257;i++){
        if(frequencia_palavra[i]!=frequencia_anagrama[i]){
            printf("Nao anagrama\n");
            break;
        }
        valor++;

        }
    }
    else printf("Nao anagrama");

    if(valor==257) printf("anagrama");



    return 0;
}