#include <stdio.h>

int main(){

    FILE *read, *write;
    char linha[1000];

    read=fopen("entrada.txt","r");
    write=fopen("saida.txt","w");

    int cont_linha=0;

    if(read==NULL || write==NULL) printf("Erro ao abrir arquivo!\n");

    else{
        while(fgets(linha,sizeof(linha),read)!=NULL){
            
            cont_linha++;

            printf("Num: %d linha: %s",cont_linha,linha);

            fprintf(write,"Num: %d linha: %s",cont_linha,linha);
        }
    }

    fclose(read);
    fclose(write);

    return 0;
}