#include <stdio.h>
#include <string.h>

int main(){

    char senha[33];
    
    while(gets(senha) != NULL){

        int tamanho=strlen(senha);

        int valido=1;

        if(tamanho<6 || tamanho>32) valido=0;


        int maisculo=0;
        int minusculo=0;
        int numero=0;

        for(int i=0;i<tamanho;i++){
            
            if(senha[i]>=65 && senha[i]<=90) maisculo++;

            if(senha[i]>=97 && senha[i]<=122) minusculo++;

            if(senha[i]>=48 && senha[i]<=57) numero++;

            if(senha[i]<=47) valido=0;

            if(senha[i] >=58 && senha[i]<=64) {
                valido=0;
                break;
            }

            if(senha[i] >=91 && senha[i]<=96){
                valido=0;
                break;
            }

            if(senha[i]>= 123) {
                valido=0;
                break;
            }

        }
        
        if(maisculo==0 || minusculo==0 || numero==0) valido=0;



        

        

        if(valido) printf("Senha valida.\n");
        else printf("Senha invalida.\n");

    }

    
    return 0;
}