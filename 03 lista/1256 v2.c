#include <stdio.h>
#include <stdlib.h>

int main(){
    int casos,cont_casos=0;

    scanf("%d",&casos);
    
    while(cont_casos<casos){
        int tamanho_tabela=0,quant_chaves=0;

        scanf("%d %d",&tamanho_tabela,&quant_chaves);

        int **matriz;
        int vetor_count[tamanho_tabela];

        for(int i=0;i<tamanho_tabela;i++){
            vetor_count[i]=0;
        }

        matriz=(int **)calloc(tamanho_tabela,sizeof(int *));

        for(int i=0;i<quant_chaves;i++){
            int input;
            scanf("%d",&input);
            
            int chave=input%tamanho_tabela;

            vetor_count[chave]++;

            matriz[chave]=realloc(matriz[chave],vetor_count[chave]*sizeof(int));
            
            matriz[chave][vetor_count[chave]-1]=input;
        }

        if(cont_casos>0)printf("\n");

        for(int i=0;i<tamanho_tabela;i++){
            printf("%d -> ",i);
            for(int j=0;j<vetor_count[i];j++){
                printf("%d -> ",matriz[i][j]);
            }
            printf("\\\n");
        }
               
        cont_casos++;
    }
  
    return 0;
}