#include <stdio.h>
#include <string.h>

int main(){

    FILE *read;
    char linha[1000];
    read=fopen("04 entrada.txt","r");
    int cont_line=0,cont_str=0;

    if(read==NULL){
        printf("Erro ao ler arquivi!\n");
        return 0;
    }

    while(fgets(linha,sizeof(linha),read)){
        
        for(int i=0;(linha[i]!='\0' && linha[i]!='\n');i++){
            cont_str++;
        }
        linha[strlen(linha)-1]='\0';
        cont_line++;
        printf("%d %s (%dCaracteres)\n",cont_line,linha,cont_str);
        
        cont_str=0;

    }

    fclose(read);

 
    return 0;
}