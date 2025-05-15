#include <stdio.h>
#include <string.h>

int main(){

    FILE *write;

    write=fopen("03 saida.txt","w");

    char name[100];
    int id;
    float price;

    if(write==NULL){
        printf("Erro ao abrir aquivo\n");
        return 0;
    }

    while(1){
        
        scanf(" %s %d %f",name,&id,&price);

        if(strlen(name)==1) break;

        fprintf(write,"Book: %s \tid: %d \tR$:%.2f\n",name,id,price);


    }
    fclose(write);

    return 0;
}