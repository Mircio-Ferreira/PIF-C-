#include <stdio.h>

int main(){
    
    FILE *write,*copy;
    write=fopen("numeros.txt","w");

    if (write==NULL) printf("erro ao abrir programa\n");

    else{
        int input;

        for(int i=0;i<5;i++){
            scanf("%d",&input);
            fprintf(write,"%d\n",input);
        }

        fclose(write);
        printf("Termino de leitura, arquivo fechado!\n\nAbrindo arquivo para leitura!\n");

        write=fopen("numeros.txt","r");

        if(write==NULL){
            printf("Erro ao ler arquivo\n");
        }
        else{
            copy=fopen("copia.txt","w");

            int cont_line=0;
            char linha[100];
            while(fgets(linha,sizeof(linha),write) != NULL ){
                fputs(linha,copy);
                cont_line++;
            }

            printf("A quantidade de linhas do arquivo foi de [%d]\n",cont_line);

            fclose(write);
            fclose(copy);
        }
    }

    return 0;
}