#include <stdio.h>

float calcular_area(float *vetor,char opcao){
    float mp=vetor[0]*vetor[1];
    
    if(mp>0 && (opcao=='R' || opcao=='Q'|| opcao=='L')){

        if(opcao=='R' || opcao=='Q') return mp;

        else return (mp/2);
    }
    else{
        printf("\nCaracter ou valor invalido\n");
        return -1;
    }
}