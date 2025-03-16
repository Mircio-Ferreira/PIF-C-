#include<stdio.h>

int main(){
    int tamanho;
    float input;
    scanf("%d",&tamanho);
    float array[tamanho];

    for(int i=0;i<tamanho;i++){
        scanf("%f",&input);
        array[i]=input;
    }

    float soma=0;
    float media=0;

    for(int i=0;i<tamanho;i++){
        soma+=array[i];

    }
    media=soma/tamanho;

    printf("Soma:%.2f\nMedia:%.2f",soma,media);

    
    return 0;
}