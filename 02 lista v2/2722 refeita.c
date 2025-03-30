#include <stdio.h>
#include <string.h>

int main(){

    int n;

    scanf("%d",&n);
    char parte1[101],parte2[101],parte3[202];

    for(int i=0;i<n;i++){

        scanf(" %[^\n]",parte1);
        scanf(" %[^\n]",parte2);

        int cont1=0,cont2=0,cont3=0;
        int direcao=1;

        for(int i=0;i<strlen(parte1);i++){
            
            if(direcao==1){
                parte3[cont3++]=parte1[cont1++];
                parte3[cont3++]=parte1[cont1++];
                direcao=2;
            }
            else{
                parte3[cont3++]=parte2[cont2++];
                parte3[cont3++]=parte2[cont2++];
                direcao=1;
            }   
        }
        
        parte3[cont3]='\0';

        printf("%s\n",parte3);
    }
        return 0;
}