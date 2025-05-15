#include <stdio.h>
#include <string.h>

int main(){

    FILE *ler,*escrever;
    int conta;
    float saldo;
    char nome[100];
    char sobrenome[100];

    ler=fopen("02 clientes.txt","r");
    escrever=fopen("02 saida.txt","w");

    if(ler==NULL || escrever==NULL){
        printf("Erro ao ler arquivo!\n");
    }
    else{
        while(fscanf(ler,"%d %s %s %f",&conta,nome,sobrenome,&saldo)==4){
            
            if(saldo<0) printf("Clientes com saldo negativo: [%s] [%.2f]\n",nome,saldo);

            if(conta==2){
                saldo-=150;
                fprintf(escrever,"Novo saldo de cliente <%s>: <%.2f>\n",nome,saldo);
            }
        }

        fclose(ler);
        fclose(escrever);

    }


    return 0;
}