#include <stdio.h>
#include <stdlib.h>

int mp_array(int *array,int posi);

int main(){

    FILE *read;
    int len;
    int *array;
    char linha[1000];

    printf("Iniciando...\n");

    read=fopen("2024.2 modelo a.txt","r");

    if(read==NULL) printf("Erro al ler arquivo\n");

    else{
        while( fscanf(read,"%d",&len) !=EOF ){

            array=malloc(len*sizeof(int));

            for (int i=0;i<len;i++){
                fscanf(read,"%d",&array[i]);
            }
               printf("A multiplicacao dos elementos do array foi de: %d\n",mp_array(array,len-1));

               free(array);
        }

        
        fclose(read);
    }


    return 0;
}

int mp_array(int *array,int posi){

    if(posi==0) return array[posi];

    return array[posi]*mp_array(array,posi-1);
}