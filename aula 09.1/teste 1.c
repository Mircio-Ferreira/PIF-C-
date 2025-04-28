#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void add(int num,No **lista){
    No *nova_celular=malloc(sizeof(No));
    nova_celular->valor=num;
    nova_celular->proximo=NULL;

    if(*lista==NULL) *lista=nova_celular;

    else{
        No *aux=*lista;

        while(aux->proximo !=NULL){
            aux=aux->proximo;
        }
        aux->proximo=nova_celular;
    }
}

void pecorrer(No **comeco){
    No *copia=*comeco;

    if(copia==NULL) printf("A lista esta vazia\n");

    while(copia->proximo!=NULL){
        printf("Valor : %d\n",copia->valor);
        copia=copia->proximo;
    }
    printf("Valor : %d\n",copia->valor);

}

int main(){

    No *celula=NULL;
    int entrada;

    for(int i=0;i<5;i++){
        scanf("%d",&entrada);
        add(entrada,&celula);
    }

    pecorrer(&celula);

    return 0;
}
