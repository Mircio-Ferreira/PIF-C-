#include <stdio.h>
#include <stdlib.h>

int soma_par(int *array,int posi){
    
    if(posi==0){
        if(array[posi]%2==0) return array[posi];

        else return 0;
    }

    if(array[posi]%2==0) return array[posi]+soma_par(array,posi-1);
    
    else return 0+soma_par(array,posi-1);
}

int main(){

    FILE *read;
    read = fopen("dados.txt","r");
    int len;
    int *array;

    if(read==NULL){
        printf("Erro ao ler arquivo\n");
        return 1;
    }
    
    while(fscanf(read,"%d",&len)!=EOF){
        array=malloc(len*sizeof(int));

        for(int i=0;i<len;i++){
            fscanf(read,"%d",&array[i]);
        }

        printf("A soma dos elementos pares do vetor foi de : %d\n",soma_par(array,len-1));

        free(array);
    }

    fclose(read);
    

    return 0;
}