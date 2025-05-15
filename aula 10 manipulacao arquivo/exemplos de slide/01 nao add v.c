#include <stdio.h>
#include <string.h>

int main(){

    FILE *ler,*escrever;

    ler=fopen("01 entrada.txt","r");
    escrever=fopen("01 saida.txt","w");

    char aux[10000];
    char auxNotV[1000];
    int cont_aux_not_v=0;
    char linha[100];
    
    if(ler==NULL || escrever==NULL){
        printf("Erro ao ler lista\n");
    }
    else{
        while(fgets(linha,sizeof(linha),ler)){
            strcat(aux,linha);
        }

        for(int i=0;aux[i]!='\0';i++){
            if(aux[i]!='v' && aux[i]!='V'){
                auxNotV[cont_aux_not_v]=aux[i];
                cont_aux_not_v++;
            }
        }

        fputs(auxNotV,escrever);

        fclose(ler);
        fclose(escrever);
    }

    return 0;
}


/*
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
*/