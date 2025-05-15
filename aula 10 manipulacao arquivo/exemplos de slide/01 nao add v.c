#include <stdio.h>

int main(){

    FILE *open,*write;

    open=fopen("01 entrada.txt","r");
    write=fopen("01 saida.txt","w");

    char letra;
    int validade;

    if(write==NULL || open==NULL){
        printf("Erro ao ler arquivo!");
    }

    else{

        while((letra=fgetc(open)) != EOF){
            if(letra!='v' && letra!='V'){
                fputc(letra,write);
            }
        }


    }

    fclose(open);
    fclose(write);

    return 0;
}