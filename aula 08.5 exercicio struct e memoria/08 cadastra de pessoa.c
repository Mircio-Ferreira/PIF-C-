#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    float altura;
} pessoa;

int main(){

    int num=2;
    pessoa cadastro[num];

    for(int i=0;i<num;i++){
        scanf(" %[^\n]",&cadastro[i].nome);
        scanf(" %d",&cadastro[i].idade);
        scanf(" %f",&cadastro[i].altura);
    }

    for(int i=0;i<num;i++){
        printf("Pessoa[%d]: %s \t idade: %d \t altura: %.2f\n",i,cadastro[i].nome,cadastro[i].idade,cadastro[i].altura);    
    }

    

    return 0;
}