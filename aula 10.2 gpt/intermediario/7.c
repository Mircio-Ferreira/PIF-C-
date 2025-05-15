#include <stdio.h>
#include <string.h>

int main(){

    FILE *read;
    read=fopen("7leitura.txt","r");
    char aux[2000]="";
    char linha[100];
    int cont_palavras=0;
    int flag=0;

    if(read==NULL){
        printf("Erro ao abrir arquivo!\n");
        return 0;
    }

    while(fgets(linha,sizeof(linha),read)!=NULL){
        strcat(aux,linha);
    }
    fclose(read);

    for(int i=0;aux[i]!='\0';i++){
        // Estou em uma palavra
        if(aux[i]!=' ' && aux[i]!='\n'){
            if(flag==0){
                cont_palavras++;
                flag=1;
            }
        }
        else{
            flag=0;
        }
    }

    printf("O que foi lido do arquivo:\n%s\n",aux);

    printf("A quantidade de palavras lidar do arquivo foi de: %d \n",cont_palavras);

    
    return 0;
}