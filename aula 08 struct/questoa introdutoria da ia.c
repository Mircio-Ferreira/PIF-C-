#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

int main(){

    Livro mat, fisica, portugues;

    strcpy(mat.titulo,"Calculo 1");
    strcpy(mat.autor,"Ricardo");
    mat.ano=2000;

    strcpy(fisica.titulo,"Fisica 2");
    strcpy(fisica.autor,"Eric");
    fisica.ano=2010;
    


    strcpy(portugues.titulo,"Gramatica Moderna");
    strcpy(portugues.autor,"Sanja");
    portugues.ano=2020;

    printf("Livro: %s , Autor: %s , Ano: %d\n",mat.titulo,mat.autor,mat.ano);

    printf("Livro: %s , Autor: %s , Ano: %d\n",fisica.titulo,fisica.autor,fisica.ano);

    printf("Livro: %s , Autor: %s , Ano: %d",portugues.titulo,portugues.autor,portugues.ano);




    return 0;
}