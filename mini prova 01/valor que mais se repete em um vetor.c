#include <stdio.h>

int main(){
    int vetor[10]={900,1,2,2,2,1,5,1,2,40};
    int cont_repeticao=0,valor_alvo,maior_cont=0,valor_mais_repetido;

    for(int i=0;i<10;i++){
        valor_alvo=vetor[i];
        cont_repeticao=0;
        for(int j=0;j<10;j++){
            if(valor_alvo==vetor[j]) cont_repeticao++;
            
            if(cont_repeticao>maior_cont && valor_alvo==vetor[j]){
            valor_mais_repetido=vetor[j];
            maior_cont++;
        }
        }
        
    }
    printf("%d",valor_mais_repetido);
    return 0;
}