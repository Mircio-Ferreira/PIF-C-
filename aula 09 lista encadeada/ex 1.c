#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}no;

int main(){

    no *celular1=NULL;
    no*celular2;
    celular2=malloc(sizeof(no));


    celular1=malloc(sizeof(no));
    celular1->valor=10;
    celular1->proximo=celular2;

    
    celular2->valor=20;
    celular2->proximo=NULL;

    printf("Primeiro valor: %d\n", celular1->valor);
    printf("Segundo valor: %d\n", celular1->proximo->valor);


    return 0;
}