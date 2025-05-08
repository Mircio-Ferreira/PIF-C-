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

void listar(No *head);



int main() {
    No *lista = NULL;

    // Inserindo elementos na lista
    inserir(&lista, 1, "192.168.0.1", 1000);
    inserir(&lista, 2, "192.168.0.2", 1050);
    inserir(&lista, 3, "10.0.0.1", 950);
    inserir(&lista, 4, "192.168.0.1", 1100); 
    inserir(&lista, 1, "192.168.0.1", 1200); // duplicado (ID e IP igual ao primeiro)

    printf("Lista original:\n");
    listar(lista);

    // Remover duplicatas (mesmo IP e ID)
    removerduplicada(&lista);
    printf("\nApos remover duplicatas:\n");
    listar(lista);

    // Ordenar por timestamp (menor para maior)
    sort(&lista);
    printf("\nApos ordenar por timestamp:\n");
    listar(lista);

    // Remover acessos com timestamp < 1000
    removertimelast(&lista, 1000);
    printf("\nApos remover acessos com timestamp < 1000:\n");
    listar(lista);

    return 0;
}


void removerduplicada(No **head) {
    if (*head == NULL) {
        printf("Nao ha o que remover, lista vazia!\n");
        return;
    }

    No *aux = *head;

    while (aux != NULL) {
        No *aux2 = aux;

        while (aux2->next != NULL) {
            if (aux2->next->idUsuario == aux->idUsuario &&
                strcmp(aux2->next->ip, aux->ip) == 0) {
                // Remove o nó duplicado
                No *remover = aux2->next;
                aux2->next = aux2->next->next;
                free(remover);
            } else {
                aux2 = aux2->next;
            }
        }

        aux = aux->next;
    }
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
void sort(No **head){
    int troca=0;
    No *aux=*head;

    do{

        troca=0;

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

void removertimelast( No **head,int time_alvo){
    No *aux, *deletar;

    if(*head==NULL) {
        printf("Lista vazia\n");
        return;
    }
    //Removendo a head
    while((*head)->timestamp < time_alvo){
        deletar=*head;
        *head=(*head)->next;
        free(deletar);

        if(*head==NULL){
            return;
        }
    }

    aux=*head;

    while(aux->next!=NULL){

        if(aux->next->timestamp < time_alvo){
            deletar=aux->next;
            aux->next=aux->next->next;
            free(deletar);
        }
        else{
            aux=aux->next;
        }

    }   
}

void listar(No *head){
    while(head!=NULL){
        printf("ID: %d | IP: %s | Timestamp: %d\n", head->idUsuario, head->ip, head->timestamp);
        head=head->next;
    }
}