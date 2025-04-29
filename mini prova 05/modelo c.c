//Você ficou encarregado(a) de implementar a lista de jogadores no projeto de PIF da segunda unidade. 
//No projeto de seu grupo, cada jogador é composto por apelido (char de no máximo 4 caracteres), 
//quantidade de pontos (inteiro) e o tempo (em segundos) total que o jogador levou para terminar o jogo (inteiro). 
//Sua lista deve ordenar os jogadores de maneira (1) decrescente em termos dos pontos (do maior para o menor) e 
//(2) crescente em termos do tempo (do mais rápido ao mais devagar). Por exemplo, se temos dois jogadores, kaka e 
//dino, ambos com mesma pontuação, contudo kaka terminou a fase em 300 segundos (ou seja, 5 min) e dino terminou em 
//240 segundos, o nome de dino vem antes do de kaka na lista. Implemente:


//Estrutura do jogador com base nos dados descritos na questão (0.5);
//Função de inserção de jogadores de maneira ordenada em termos de pontos e tempo (1.0);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char apelido[5];
    int pontos;
    int time;
    struct node *next;
}no;

void insert_sort(no **head,int pt, int tmp,char *nick);

//Questao n pediu isso, mas so pra verificar 
void print_lista(no *head) {
    while (head != NULL) {
        printf("Apelido: %s | Pontos: %d | Tempo: %d\n", head->apelido, head->pontos, head->time);
        head = head->next;
    }
}

int main(){
    //Questao n pede a main mas pra testar
    no *lista = NULL;

    insert_sort(&lista, 100, 300, "kaka");
    insert_sort(&lista, 100, 240, "dino");
    insert_sort(&lista, 200, 500, "luan");
    insert_sort(&lista, 150, 200, "nina");
    insert_sort(&lista, 200, 450, "joao");

    print_lista(lista);
}

void insert_sort(no **head,int pt, int tmp,char *nick){
    no *new=malloc(sizeof(no)); 
    strcpy(new->apelido,nick);
    new->pontos=pt;
    new->time=tmp;
    new->next=NULL;

    if(*head==NULL){
        *head=new;
        new->next=NULL;
        return;
    }
    if(pt>(*head)->pontos || ( pt==(*head)->pontos && tmp<(*head)->time )  ){
        new->next=*head;
        *head=new;
        return;
    }
    
    no *aux=*head;

    while(aux!=NULL){
        if(aux->next!=NULL && 
        ( aux->next->pontos<pt  ||  (aux->next->pontos==pt && tmp<= aux->next->time)    )     ){


            new->next=aux->next;
            aux->next=new;
            return;
        }
        if(aux->next==NULL){
            aux->next=new;
            new->next=NULL;
            return;
        }
        aux=aux->next;
    }
}