#include <stdio.h>
#include <string.h>

int main(){

    char palavra[1000];
    scanf("%s",palavra);
    char temp;

    int tamanho=strlen(palavra);

    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho-1;j++){
            if(palavra[j]>palavra[j+1]){

                temp=palavra[j];

                palavra[j]=palavra[j+1];

                palavra[j+1]=temp;

                printf("%s\n",palavra);

                
            }
        }

        
    }
        
    printf("%s",palavra);
    return 0;
}