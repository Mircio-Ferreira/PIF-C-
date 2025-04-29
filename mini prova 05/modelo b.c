//Todo ano, o Spotify cria uma lista personalizada para cada usuário com base nas músicas mais ouvidas naquele ano. 
//O aplicativo constrói esta lista com base no tempo total gasto ouvindo cada música. 
//Suponha a seguinte estrutura autoreferenciada com os dados da música:
//
//struct musica{
//		char nome[50];
//		char artista[100];
//		char album[50];
//		int minutos;
//		struct musica *next;
//};
//
//Onde a variável minutos representa o tempo total que o usuário ouviu determinada música 
//(ou seja, a soma do tempo de todas as execuções da música). Esta lista está ordenada por ordem alfabética do nome do 
//artista e não há nomes duplicados de músicas. Implemente o seguinte: 
//
//Função para encontrar a  música mais ouvida no ano. Sua função deve imprimir o nome da música, artista, e álbum (0.5);
//Função para encontrar  o tamanho total da lista (ou seja, quantas músicas diferentes o usuário ouviu naquele ano) (0.5);
//Função para encontrar o tempo total que usuário passou no aplicativo ouvindo músicas (0.5);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char nome_music[50];
    char artista[100];
    char album[50];
    int minutos;
    struct node *next;
}no;

int tamanho(no *head);

int tot_minutos(no *head);

void musica_mais_ouvida(no *head);

int main(){


    return 0;
}


int tamanho(no *head){
    int cont=0;
    no *aux;
    aux=head;

    while(aux!=NULL){
        cont++;
        aux=aux->next;
    }
    return cont;
}

int tot_minutos(no *head){
    int total=0;
    no *aux=head;

    while(aux!=NULL){
        total+=aux->minutos;
        aux=aux->next;
    }
    return total;
}


void musica_mais_ouvida(no *head){
    no *aux=head;
    int maior=-1;
    char name[50];
    char artist[100];
    char album[50];
    int min;
    
    if(head==NULL){
        printf("Lista vazaia");
    }

    else{
        while(aux!=NULL){
            if(maior<aux->minutos){
                maior=aux->minutos;
                strcpy(name,aux->nome_music);
                strcpy(artist,aux->artista);
                strcpy(album,aux->album);

            }
        }
        printf("Nome da musica: %s\tArista: %s\tAlbum: %s",name,artist,album);

    }

    

}