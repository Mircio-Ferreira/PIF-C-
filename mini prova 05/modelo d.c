//Escreva um programa que insira, em ordem crescente, números inteiros fornecidos pelos usuário em uma lista encadeada. 
//Além disso, o programa deve calcular a soma de todos os elementos inseridos e imprimir o resultado na tela. 
//Para o seu programa, defina:

//A estrutura do nó da lista (0.25);
//A função de inserção na lista (0.7);
//A função que calcula a soma dos elementos da lista (0.25);
//A função main que recebe valores inteiros do usuário e os insere na lista, até que o valor informado pelo usuário 
//seja 0 (zero), depois chama a função para calcular a soma dos valores da lista e imprime esse resultado na tela (0.3);

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}no;

int somar(no *head);

void insert_sort(no **head,int num);


int main(){

    int entrada=-1;
    no *head;

    while(1){
        
        scanf("%d",&entrada);

        if(entrada==0) break;

        insert_sort(&head,entrada);
        
    }

    printf("\nsomatorio: %d",somar(head));


    return 0;
}

int somar(no *head){
    int somatorio=0;
        no *aux=head;
        while(aux!=NULL){
            somatorio+=aux->num;
            aux=aux->next;
        }
        return somatorio;    
}

void insert_sort(no **head,int numero){
    no *novo=malloc(sizeof(no));
    novo->num=numero;
    novo->next=NULL;
    
    if(*head==NULL){
        *head=novo;
        novo->next=NULL;
        return;
    }
    else if(numero<(*head)->num){
        novo->next=*head;
        *head=novo;
        return;
    }

    else{
        no *aux=*head;
        while(aux->next!=NULL && aux->next->num < numero){
            aux=aux->next;
        }
        novo->next=aux->next;
        aux->next=novo;
        
    }
}
