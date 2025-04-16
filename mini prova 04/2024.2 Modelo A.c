/*
(STRUTCS E ALOCAÇÃO DINÂMICA DE MEMÓRIA - 2.0 pontos) Implemente um programa capaz de somar 
um array de números complexos. Os número complexos são caracterizados por possuírem um parte 
real e uma parte imaginária, que é representada por i = -1. Por exemplo, o número  1 + 2i é 
considerado complexo, sendo 1 sua parte real e 2 sua parte imaginária. A soma de dois números 
complexos é dada pela soma de suas partes reais e imaginárias separadamente, por exemplo, 
sejam Z =  a + bi e W = c + di, sua soma será: Z + W = (a+c)  + (b+d)i. Seu programa deve:

a) Criar uma struct chamada complexa a qual contém as partes reais e imaginárias do número (ambas 
do tipo float); (0.3)
b) Criar uma função chamada soma_array_complexa que recebe como parâmetro  um array de struct 
complexa e o seu tamanho N e realiza a soma de todos os seus elementos. Esta função deve, portanto, 
retornar uma variável do tipo struct complexa que representa esse somatório; (0.6)
c) Alocar dinamicamente um array de tamanho N (n fornecido pelo usuário) do tipo struct complexa 
para armazenar vários números complexos fornecidos pelo usuário. (0.6)
d) Realizar a soma de todos os elementos do array, chamando a função soma_array_complexa e imprimir o resultado; (0.3)
e) Liberar a memória alocada dinamicamente; (0.2)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float ima;
}Num_complex;

Num_complex soma_array_complexo(Num_complex *vetor, int n){
    Num_complex soma;
    soma.real=0;
    soma.ima=0;

    for(int i=0;i<n;i++){
        soma.real+=vetor[i].real;
        soma.ima+=vetor[i].ima;
    }
    return soma;
}

int main(){

    Num_complex *vetor,soma;
    int n;
    scanf("%d",&n);
    vetor=malloc(n*sizeof(Num_complex));
    for(int i=0;i<n;i++){
        scanf("%f %f",&vetor[i].real,&vetor[i].ima);
    }
    soma=soma_array_complexo(vetor,n);

    free(vetor);

    printf("Parte real: %.2f\tParte ima: %.2f i",soma.real,soma.ima);

    return 0;
}