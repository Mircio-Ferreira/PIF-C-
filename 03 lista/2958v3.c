#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    char letra;
} dados;

void bouble_sort(dados *vetor,int tamanho);

int main(){
    int l,c,tamanho,cont_linear=0;;
    scanf("%d %d",&l,&c);

    tamanho=l*c;

    dados **entradas;
    dados vetor[tamanho];

    entradas=malloc(l*sizeof(dados*));
    for(int i=0;i<l;i++){
        entradas[i]=malloc(c*sizeof(dados));
        
        for(int j=0;j<c;j++){
            scanf(" %d %c",&entradas[i][j].num,&entradas[i][j].letra);
            vetor[cont_linear]=entradas[i][j];
            cont_linear++;
        }
        free(entradas[i]);
    }
    free(entradas);

    bouble_sort(vetor,tamanho);

    for(int i=0;i<tamanho;i++) printf("%d%c\n",vetor[i].num,vetor[i].letra);

    return 0;
}

void bouble_sort(dados *vetor,int tamanho){
    dados temp;

    for(int i=0;i<tamanho-1;i++){
        for(int j=0;j<tamanho-1;j++){
            if(vetor[j].letra=='D'){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }
     }
     
    for(int i=0;i<tamanho-1;i++){
        for(int j=0;j<tamanho-1;j++){
            if(vetor[j].letra=='V' && vetor[j+1].letra!='D' && vetor[j+1].num>vetor[j].num){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
            else if(vetor[j].letra=='D' &&  vetor[j+1].num>vetor[j].num){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
                }
            }
        }
    }
