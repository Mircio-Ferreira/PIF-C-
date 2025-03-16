/*
QUESTÃO 07 - (MATRIZES - 1.5 pontos)Escreva um programa que receba uma matriz 
quadrada e calcule a diferença entre a soma dos elementos da diagonal principal e a soma dos elementos da borda da matriz.

Seu programa deve:
a) Pedir ao usuário o tamanho N da matriz e preenchê-la com valores fornecidos;
b) Calcular a soma dos elementos da diagonal principal;
c) Calcular a soma dos elementos da borda da matriz;
d) Fazer a subtração dessas somas e imprimir o resultado.*/

#include<stdio.h>

int main(){

    int n,principal_soma=0,soma_borda=0;
    scanf("%d",&n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            
            if(i==j) principal_soma+=matriz[i][j];
            
            //Pegando elementos da primeira e ultima linha
            if(i==0 || i==n-1) soma_borda+=matriz[i][j];
            // pegando elementos da coluna exceto as pontas
            else if ((j == 0 || j == n - 1) && !(i == 0 || i == n - 1))soma_borda+=matriz[i][j];
            
            


            
        }
        
    }
    printf("%d",principal_soma-soma_borda);
    return 0;
}