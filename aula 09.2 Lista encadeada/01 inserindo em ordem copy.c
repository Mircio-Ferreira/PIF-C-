#include <stdlib.h>
#include <stdio.h>

typedef struct numero{
    int valor;
    struct numero *next;
}No;

void inserir_ordem(No **head,int num);

void listar(No **head);

int main(){

    No *head=NULL;
    int entrada;

    for(int i=0;i<4;i++){
        scanf("%d",&entrada);
        inserir_ordem(&head,entrada);
    }

    listar(&head);

    return 0;
}

void inserir_ordem(No **head,int num){
    No *novo=malloc(sizeof(No));
    No *aux=*head;

    novo->valor=num;

    if(*head==NULL){
        *head=novo;
        novo->next=NULL;
        return;
    }
    //CASO EM QUE O numero é antes do primeiro.
    else if(aux->valor>num){
        novo->next=aux;
        *head=novo;
    }

    else{

        while(1){
            //Caso em que estou inserindo no meio
            //if(aux->next->valor>num && aux->next!=NULL)
            if (aux->next != NULL && aux->next->valor > num){

                
                    novo->next=aux->next;
                    aux->next=novo;
                
                    return;
                
            }
            

            if(aux->next==NULL){ //Numeor inserido é o ultimo
                aux->next=novo;
                novo->next=NULL;
                return;
            }

            aux=aux->next;
        }
        
    }
}


void listar(No **head){
    No *aux=*head;
    while(aux!=NULL){
        printf("Valor: %d\n",aux->valor);
        aux=aux->next;
    }
}
