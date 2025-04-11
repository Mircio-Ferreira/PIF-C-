#include <stdio.h>
#include <stdlib.h>

void bouble_sort(int *vetor_int, char *vetor_char,int tamanho);

struct elemento_matriz{
    char num;
    char letra;
};

int main(){

    int lin,col;
    scanf("%d %d",&lin,&col);

    struct elemento_matriz **matriz=calloc(lin,sizeof(struct elemento_matriz *));

    for(int i=0;i<lin;i++){
        matriz[i]=calloc(col,sizeof(struct elemento_matriz));
    }

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            scanf(" %c",&matriz[i][j].num);
            scanf(" %c",&matriz[i][j].letra);
        }
    }

    int tamanho_linear=lin*col;

    int vetor_int[tamanho_linear];
    char vetor_caracter[tamanho_linear];
    int cont_linar=0;
    
    for(int i=0;i<(lin);i++){
        for(int j=0;j<col;j++){
            vetor_int[cont_linar]=(matriz[i][j].num)-'0';
            vetor_caracter[cont_linar]=matriz[i][j].letra;
            cont_linar++;
        }
    }

    // for(int i=0;i<(tamanho_linear);i++){
    //     printf("|%d%c|",vetor_int[i],vetor_caracter[i]);
    //     }

    // printf("\n\n");

    bouble_sort(vetor_int,vetor_caracter,tamanho_linear);



    // for(int i=0;i<(tamanho_linear);i++){
    //     printf("|%d%c|",vetor_int[i],vetor_caracter[i]);
    //     }

    for(int i=0;i<(tamanho_linear);i++){
        printf("%d%c\n",vetor_int[i],vetor_caracter[i]);
    }

    
    
    return 0;
}

void bouble_sort(int *vetor_int, char *vetor_char, int tamanho){
    int temp_int;
    char temp_char;

    for(int i=0;i<tamanho;i++){
        for(int j=0;j<tamanho-1;j++){
            if(vetor_char[j]=='D'){
                temp_char=vetor_char[j];
                vetor_char[j]=vetor_char[j+1];
                vetor_char[j+1]=temp_char;

                temp_int=vetor_int[j];
                vetor_int[j]=vetor_int[j+1];
                vetor_int[j+1]=temp_int;
            }

        }
    }

        for(int i=0;i<tamanho;i++){
            for(int j=0;j<tamanho-1;j++){
                if(vetor_char[j]=='V'&& vetor_char[j+1]!='D' && vetor_int[j+1]>vetor_int[j]){
                    temp_char=vetor_char[j];
                    vetor_char[j]=vetor_char[j+1];
                    vetor_char[j+1]=temp_char;
    
                    temp_int=vetor_int[j];
                    vetor_int[j]=vetor_int[j+1];
                    vetor_int[j+1]=temp_int;
                }

                else if((vetor_char[j]=='D' && vetor_int[j+1]>vetor_int[j])){

                    temp_char=vetor_char[j];
                    vetor_char[j]=vetor_char[j+1];
                    vetor_char[j+1]=temp_char;
    
                    temp_int=vetor_int[j];
                    vetor_int[j]=vetor_int[j+1];
                    vetor_int[j+1]=temp_int;

                }
    
            }
    }

}