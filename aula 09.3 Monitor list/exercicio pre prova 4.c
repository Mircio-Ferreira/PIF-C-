#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Acesso {
    int idUsuario;
    char ip[16]; // Ex: "192.168.0.1"
    int timestamp; // Número inteiro representando o instante do acesso
    struct Acesso *next;
    } No;


void inserir (No **head, int id, char *ip, int time);

void removerduplicada(No **head);

void sort(No **head);

void removertimelast( No **head,int time_alvo);

int main(){

    return 0;
}

void inserir (No **head, int id, char *ip, int time){
    No *new=malloc(sizeof(No));
    new->idUsuario=id;
    strcpy(new->ip,ip);
    new->timestamp=time;
    new->next=NULL;

    if(*head==NULL) *head=new;

    else{
        No *aux=*head;

        while(aux->next!=NULL){
            aux=aux->next;
        }
        aux->next=new;
    }
}

void removerduplicada(No **head){

    No *aux=*head;
    No *aux2=NULL;
    if(*head==NULL) printf("Nao ha o que remover,lista vaziaa!\n");

    while(aux!=NULL){
        char ipcomparador[16];
        int idcompradaor=aux->idUsuario;
        strcpy(ipcomparador,aux->ip);
        aux2=aux;

        while(aux2->next!=NULL){
                if(strcmp(aux2->ip,ipcomparador)==0 && aux2->idUsuario==idcompradaor){
                    No *remover=aux2->next;
                    aux2->next=aux2->next->next;
                    free(remover);
                }
                aux2=aux2->next;
        }
        aux=aux->next;
    }


}

void sort(No **head){
    int troca=0;
    No *aux=*head;

    do{

        while(aux!=NULL){

            if(aux->next!=NULL && aux->timestamp > aux->next->timestamp){
                int troca_id=aux->next->idUsuario;
                char ip_troca[16];
                strcpy(ip_troca,aux->next->ip);
                int time_troca=aux->next->timestamp;
                
                aux->next->idUsuario=aux->idUsuario;
                aux->next->timestamp=aux->timestamp;
                strcpy(aux->next->ip,aux->ip);

                aux->idUsuario=troca_id;
                aux->timestamp=time_troca;
                strcpy(aux->ip,ip_troca);

                troca=1;
            }
            
            aux=aux->next;
        }

    }while(troca);
}

// void removertimelast( No **head,int time_alvo){
//     No *aux=*head;
//     No *remover;
//     if(*head==NULL){
//         printf("nao a o que remover, lista vaziaa!\n");
//         return;
//     }


//     while(aux->next!=NULL){
//         //remover no inicio
//         if(aux->timestamp < time_alvo){
//             remover=aux;
//             *head=aux->next;
//             aux=*head;
//             free(remover);

//             if(*head==NULL) break; //Removeu tudo

//             aux=aux->next;
//         }
//         else{
//             //Caso que irei remover o ultimo ou o do meio

//             if(aux->next->timestamp < time_alvo){
//                 remover=aux->next;
//                 aux->next=aux->next->next;
//                 free(remover);
//                 if(aux->next==NULL) break;
//             }

//             else{
//                 aux=aux->next;
//             }
//         }
        
//     }
// }