/*
 (STRUTCS E ALOCAÇÃO DINÂMICA DE MEMÓRIA - 2.0 pontos) Considere um plano cartesiano bidimensional 
 contendo vários pontos, cada um deles representados pelas coordenadas x e y em ponto flutuante (float). 
 Dada uma circunferência neste mesmo plano, representada por um ponto (com coordenadas x e y em float) 
 que representa o centro e um float que representa seu raio, desenvolv a um programa capaz de, dado um 
 conjunto de pontos e uma circunferência, determinar quantos pontos estão contidos na circunferência. 
 Seu programa deve:

Definir uma struct ponto com as coordenadas x e y (ambos floats); (0.25)

Definir uma struct circunferência, a qual tem um ponto central do tipo struct ponto e um raio (float); (0.25)

Alocar dinamicamente um array de N pontos, sendo N um valor fornecido pelo usuário, e preenchê-lo com dados 
das coordenadas dos pontos, também fornecidos pelo usuário; (0.6)
+
Dada uma circunferência fornecida pelo usuário (coordenadas x e y do centro e um raio), determinar quantos 
pontos do array de pontos são internos à circunferência, imprimindo esse valor na tela; (0.7)

Liberar a memória alocada dinamicamente; (0.2)

OBS - um ponto é dito interno a uma circunferência se sua distância ao centro da mesma é menor que o raio. 
O cálculo da distância entre dois pontos é dada pela equação  (x1 - x2) 2+ (y1 - y2)2  . Use a biblioteca math.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} Ponto;

typedef struct{
    Ponto origem;
    float R;
} Circuferencia;

int main(){

    int num_pontos, pt_internos=0;
    scanf("%d",&num_pontos);
    Ponto *vetor;
    vetor=malloc(num_pontos*sizeof(Ponto));
    Circuferencia cir;
    scanf("%f %f %f",&cir.origem.x,&cir.origem.y,&cir.R);

    for(int i=0;i<num_pontos;i++){
        scanf("%f %f",&vetor[i].x,&vetor[i].y);

        if(cir.R> sqrt( pow(cir.origem.x - vetor[i].x ,2) + pow(cir.origem.y - vetor[i].y ,2 ))) pt_internos++;
    }

    free(vetor);

    printf("A quantidade de pontos internos a circuferencia foi de : %d",pt_internos);

    return 0;
}