#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *ler,*escrever;
    int *array;
    int tam;
    char operacao;

    ler=fopen("01 entrada.txt","r");
    escrever=fopen("01 saida.txt","w");

    if(ler==NULL || escrever==NULL){
        printf("Erro ao ler arquivo!\n");
    }
    else{
        fscanf(ler,"%d",&tam);
        array=malloc(tam*sizeof(int));

        for(int i=0;i<tam;i++){
            fscanf(ler,"%d",&array[i]);
        }

        while((operacao=fgetc(ler))!=EOF){
            if(operacao=='O'){
                for(int i=0;i<tam;i++){
                    array[i]+=1;
                }
            }
            else if(operacao=='D'){
                for(int i=0;i<tam;i++){
                    array[i]*=2;
                }
            }
            else if(operacao=='P'){
                for(int i=0;i<tam;i++){
                    array[i]*=array[i];
                }
                
            }
            else if(operacao=='S') break;
        }

        for(int i=0;i<tam;i++){
            printf("[%d] ",array[i]);
        }
        
        for(int i=0;i<tam;i++){
            fprintf(escrever,"%d\n",array[i]); 

        }

        free(array);
    

    }

    fclose(escrever);
    fclose(ler);


    return 0;
}