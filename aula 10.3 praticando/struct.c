#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[100];
    int age;
}Pessoa;

void search_F(FILE *search,char *name){
    char busca[100];
    int idade;

    while(fscanf(search,"%s %d",busca,&idade)!=EOF){
        if(strcmp(name,busca)==0){
            printf("Nome: %s\t Idade: %d",busca,idade);
            return;
        }
    }
    printf("Nome nao encontrado!\n");
}

int main(){

    FILE *write,*read,*search;
    Pessoa *array;
    char nome[100];
    int idade;

    array=malloc(3*sizeof(Pessoa));

    for (int i=0;i<3;i++){
        scanf("%s",nome);
        scanf("%d",&idade);
        array[i].age=idade;
        strcpy(array[i].name,nome);
    }

    //Colocando no arquivo;
    write=fopen("pessoa.txt","w");
    //colocano no arquivo
    for(int i=0;i<3;i++){
        fprintf(write,"%s %d\n",array[i].name,array[i].age);
    }
    fclose(write);
    free(array);

    read=fopen("pessoa.txt","r");
    char line[1000];

    while(fgets(line,sizeof(line),read)!=NULL){
        printf("%s",line);
    }
    fclose(read);

    //Buscando

    search=fopen("pessoa.txt","r");
    char busca[100];
    scanf("%s",busca);

    search_F(search,busca);

    printf("\nend of programing");
    return 0;
}