#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra[1001];

    int contador_de_cosos=0;
    

    while(scanf("%s",palavra)!=EOF){

        
        
        
        int asc[256]={0};
        char caracter_asc[256];

        //Serve para monta tabela de frequencia
        for(int i=0;palavra[i]!='\0';i++){
            asc[palavra[i]]++;
            //montar array de caracter contendo todos os que tem de acordo com os indicies de asc
            caracter_asc[palavra[i]]=palavra[i];
        }

        // Empurra tudo para esquerda.
        int incremento_direita=0;
        

        int cont_char_dif=0;

        for(int i=0;i<256;i++){
            if(asc[i]!=0){
                asc[incremento_direita]=asc[i];
                caracter_asc[incremento_direita]=caracter_asc[i];
                
                incremento_direita++;
                cont_char_dif++;
            }
        }
        
        //caracter_asc[incremento_direita]='\0';

        /*int cont_char_dif=0;

        for(int i=0;i<256;i++){
            if(asc[i]>0) cont_char_dif++;
        }*/

        //Ordenando vetores por frequencia
        

        for(int i=0;i<cont_char_dif-1;i++){
            for(int j=0;j<cont_char_dif-1;j++){

                if(asc[j]>asc[j+1]){
                    int temp;
                    temp=asc[j];
                    asc[j]=asc[j+1];
                    asc[j+1]=temp;

                    char chartemp=caracter_asc[j];
                    caracter_asc[j]=caracter_asc[j+1];
                    caracter_asc[j+1]=chartemp;
                    
                }
                else if(caracter_asc[j]<caracter_asc[j+1] && asc[j]==asc[j+1]){
                    
                    int temp;
                    temp=asc[j];
                    asc[j]=asc[j+1];
                    asc[j+1]=temp;

                    char chartemp=caracter_asc[j];
                    caracter_asc[j]=caracter_asc[j+1];
                    caracter_asc[j+1]=chartemp;

                }
            }
        }


        /*printf("%s\n",caracter_asc);

        for(int i=0;i<cont_char_dif;i++){
            printf("|%d|",asc[i]);
        }
            break;
        */
        if(contador_de_cosos==1) printf("\n");

        contador_de_cosos=1;

        
        
        for(int i=0;i<cont_char_dif;i++){
            printf("%d %d\n",caracter_asc[i],asc[i]);
        }
        //printf("\n");

        


        
          
    }

    


    return 0;
}