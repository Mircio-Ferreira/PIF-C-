#include <stdio.h>
#include <string.h>

void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    char palavra[1000];
    scanf("%s",palavra);

    int tamanho=strlen(palavra);

    for(int i=0;i<tamanho-1;i++){
        for(int j=0;j<tamanho-1-i;j++){
            if(palavra[j]>palavra[j+1]){
                char temp=palavra[j];
                palavra[j+1]=palavra[j];
                palavra[j]=temp;
            }
        }
    }
    
    printf("%s",palavra);
    return 0;
}