#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int vetor[x],shift[x];
    char lado;
    int troca;
    scanf("%d",&troca);
    scanf(" %c",&lado);
    int contr=troca,contl=x-troca;

    for(int i=0;i<x;i++){
        scanf("%d",&vetor[i]);
        
        if(lado=='R'){
            if(contr==x){
                contr=0;
            }
            shift[contr]=vetor[i];
            contr++;
        }
        else if(lado=='L'){
            if(contl==x){
                contl=0;
            }
            shift[contl]=vetor[i];
            contl++;
        }

    }
    for(int i=0;i<x;i++){
        printf("|%d|",vetor[i]);
    }
    printf("\n");
    for(int i=0;i<x;i++){
        printf("|%d|",shift[i]);
    }
    return 0;
}