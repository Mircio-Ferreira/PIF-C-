#include <stdio.h>
#include <string.h>

int main(){
    char palavra[101*50];
    char antes, atual;

    while(gets(palavra) != NULL){ 
    //while(fgets(palavra,(101*50),stdin) !=NULL){
    //while(fgets(palavra, sizeof(palavra), stdin) != NULL){ 
        

        int cont_palavra = 0, cont = 0;
        int caso_repetido = 0;

        antes = palavra[0];

        if(antes >= 'A' && antes <= 'Z'){
            antes += 32; 
        }
        cont_palavra++; 

        while(palavra[cont_palavra] != '\0'){

            if(palavra[cont_palavra] == ' '){
                cont_palavra++;
                atual = palavra[cont_palavra];

                if(atual >= 'A' && atual <= 'Z'){
                    atual += 32; 
                }

                if(antes == atual && caso_repetido == 0){
                    cont++;
                    caso_repetido = 1; 
                }
                else if(antes != atual){
                    caso_repetido = 0;
                    antes = atual;
                }

                
            }
            
            cont_palavra++; 
        }

        printf("%d\n", cont);
    }
    
    return 0;
}
