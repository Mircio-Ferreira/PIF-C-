#include <stdio.h>
#include <string.h>

void tabela_frequencia(char *palavra, int *frequencia_asc,char *caracter_asc);

int organizar_esquerda(int *frequencia_asc, char *caracter_asc);

void bouble_sort(int cont_char_dif, int *frequencia_asc, char *caracter_asc);

int main(){

    char palavra[1001];

    int espaco=0;

    while(scanf("%s",palavra)!=EOF){

        int frequencia_asc[256]={0};
        char caracter_asc[256];

        tabela_frequencia(palavra, frequencia_asc, caracter_asc);

        int cont_char_dif=organizar_esquerda(frequencia_asc,caracter_asc);


        bouble_sort(cont_char_dif ,frequencia_asc, caracter_asc);

        if(espaco==1) printf("\n");

        espaco=1;

        for(int i=0;i<cont_char_dif;i++){
            printf("%d %d\n",caracter_asc[i],frequencia_asc[i]);
        }
        

    }
    
    return 0;
}

void tabela_frequencia(char *palavra, int *frequencia_asc,char *caracter_asc){
    
    for(int i=0;palavra[i]!='\0';i++){

        frequencia_asc[palavra[i]]++;
        
        caracter_asc[palavra[i]]=palavra[i];
    }
}

int organizar_esquerda(int *frequencia_asc, char *caracter_asc){

    int incremento_direita=0;
    int cont_char_dif=0;


    for(int i=0;i<256;i++){
        if(frequencia_asc[i]!=0){
            
            frequencia_asc[incremento_direita]=frequencia_asc[i];
            caracter_asc[incremento_direita]=caracter_asc[i];

            incremento_direita++;

            cont_char_dif++;

        }
    }

    return cont_char_dif;
}


void bouble_sort(int cont_char_dif, int *frequencia_asc, char *caracter_asc){

    for(int i=0;i<cont_char_dif-1;i++){
        for(int j=0;j<cont_char_dif-1;j++){

            if(frequencia_asc[j]>frequencia_asc[j+1]){

                int temp;
                temp=frequencia_asc[j];
                frequencia_asc[j]=frequencia_asc[j+1];
                frequencia_asc[j+1]=temp;

                char chartemp=caracter_asc[j];
                caracter_asc[j]=caracter_asc[j+1];
                caracter_asc[j+1]=chartemp;
            }
            else if(caracter_asc[j]<caracter_asc[j+1] && frequencia_asc[j]==frequencia_asc[j+1]){

                int temp;
                temp=frequencia_asc[j];
                frequencia_asc[j]=frequencia_asc[j+1];
                frequencia_asc[j+1]=temp;

                char chartemp=caracter_asc[j];
                caracter_asc[j]=caracter_asc[j+1];
                caracter_asc[j+1]=chartemp;

            }

        }
    }

}
