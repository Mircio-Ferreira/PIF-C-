#include <stdio.h>

typedef struct{
    char nome[100];
    float nota;
} Aluno;

int main(){
    int quant=10;
    Aluno humano[quant];
    
    for(int i=0;i<quant;i++){
        scanf(" %[^\n]",humano[i].nome);
        scanf("%f",&humano[i].nota);
    }

    for(int i=0;i<quant;i++){
        if(humano[i].nota>=7){
            printf("[%d] Aluno Aprovado: %s\t Media: %.2f\n",i,humano[i].nome,humano[i].nota);
        }
    }



    return 0;
}