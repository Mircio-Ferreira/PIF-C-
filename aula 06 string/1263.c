#include <stdio.h>
#include <string.h>

int main(){
    char palavra[1001];

    char antes,atual;

    

    
    while(gets(palavra)!=NULL){
        getchar();

        int cont_palavra=0,cont=0;

        antes=palavra[0];

        while(palavra[cont_palavra] != '\0'){

            if(palavra[cont_palavra]==' '){
                
                atual=palavra[cont_palavra+1];
                
                if(atual==antes){
                    cont++;
                    antes=atual;
                }
            }
            
            printf("\n%d\n",cont);
             

        }
        


    }
    return 0;
}