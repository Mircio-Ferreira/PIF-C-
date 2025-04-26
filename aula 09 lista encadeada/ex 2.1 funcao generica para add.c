#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}no;

no* head = NULL;

no* add(int new_val){
    no* atual = malloc(sizeof(no));
    atual->valor = new_val;
    atual->proximo = NULL;

    if (head != NULL)
        head->proximo = atual;
    
    head = atual;
    return atual;   
}

int main(){
    no* primeiro = add(1);
    add(2);
    add(3);
    add(4);
    add(5);

    while(primeiro != NULL){
        printf("%d ", primeiro->valor);
        primeiro = primeiro->proximo;
    }
    return 0;
}