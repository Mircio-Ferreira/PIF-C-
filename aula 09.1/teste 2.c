#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

void add(No **lista,int num){
    No *nova_celula=malloc(sizeof(No));

    nova_celula->valor=num;
    nova_celula->proximo=NULL;

    if(*lista==NULL) *lista=nova_celula;
    
    else{
        No *aux=*lista;

        while(aux->proximo!=NULL){
            aux=aux->proximo;
        }
        aux->proximo=nova_celula;
    }
}

void listar(No **lista){
    if(*lista==NULL) printf("Lista vazia\n");

    else{
        No *aux=*lista;
        while(aux->proximo!=NULL){
            printf("Valor :%d\n",aux->valor);
            aux=aux->proximo;
        }
        printf("Valor :%d\n",aux->valor);


    }
}

void remover(No **lista){
    No *aux=*lista;
    if(*lista==NULL) printf("Lista vazia ( Da funcao remover )\n");
    else if(aux->proximo==NULL){
        printf("Ala so tinha um no\n");
        free(*lista); // Servria free em aux ?
        *lista=NULL;
    }
    else {
        No *penultimo;
        while(aux->proximo!=NULL){
            penultimo=aux;
            aux=aux->proximo;
        }
        penultimo->proximo=NULL;
        free(aux);
        
    }
    
}





int main(){

    No *celula=NULL;
    int entrada;

    listar(&celula);

    for(int i=0;i<3;i++){
        scanf("%d",&entrada);
        add(&celula,entrada);
    }

    listar(&celula);

    remover(&celula);

    listar(&celula);

    remover(&celula);

    listar(&celula);

    remover(&celula);

    listar(&celula);




    return 0;
}