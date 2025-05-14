#include <stdio.h>

int main(){

    FILE *read;
    char linha[1000];
    char letra;
    //read=fopen("C:/codigo/C/aula 10 manipulacao arquivo/01.txt", "r");
    read=fopen("01.txt", "r");


    if(read==NULL){
        printf("Erro ao abrir arquivo");

        return 0;
    }

    else{

        fgets(linha,sizeof(linha),read);

        printf("Linha lida: %s",linha);

        fgets(linha,sizeof(linha),read);

        printf("Linha lida 02: %s",linha);

        letra=fgetc(read);

        printf("Letra lida ( linha 3 ): %c",letra);

        fgets(linha,sizeof(linha),read);

        printf("\nLinha lida 03 ( resto ): %s",linha);

        fgets(linha,4,read);

        printf("\nLinha lida 04 ( apenas 3 caracters ): %s",linha);
    

    }

    fclose(read);

    return 0;
}