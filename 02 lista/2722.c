#include <stdio.h>
#include <string.h>

int main(){

    int n;

    scanf(" %d",&n);
    getchar();

    for(int i=0;i<n;i++){
        char parte1[101];
        char parte2[101];
        char parte3[202];
        
        gets(parte1);
        gets(parte2);

        

        //int tamanho=(strlen(parte1)/2)+(strlen(parte2)/2);

        int direcao=0, cont1=0,cont2=0,cont3=0;

        for(int i=0;i<strlen(parte1);i++){
            
            if(direcao==0){
                parte3[cont3]=parte1[cont1];
                cont1++;
                cont3++;
                parte3[cont3]=parte1[cont1];
                cont1++;
                cont3++;
                direcao=1;
            }
            else{
                parte3[cont3]=parte2[cont2];
                cont2++;
                cont3++;
                parte3[cont3]=parte2[cont2];
                cont2++;
                cont3++;
                direcao=0;
            }
                
               
        }
        parte3[cont3] = '\0';

        printf("%s\n",parte3);
        


        
       
        

        
    }

    return 0;
}