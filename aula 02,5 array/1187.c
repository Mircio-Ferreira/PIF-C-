#include<stdio.h>

int main(){
    char operacao;
    double soma=0.0,media;
    double matriz[12][12];
    int direita=10,esquerda=1;
    int divisor=0;
    
    scanf(" %c",&operacao);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&matriz[i][j]);
            /*if(altura<=4 && direita>=6 && esquerda<=5){
                soma+=matriz[i][j];
                printf("%lf\n",matriz[i][j]);
            }*/
            if(i<=4 && j<=direita && j>=esquerda){
                soma+=matriz[i][j];
                divisor++;
            }
        }
        direita--;
        esquerda++;
    }
    if(operacao=='S'){
        printf("%.1lf\n",soma);
    }
    else if(operacao=='M'){
        printf("%.1lf\n",(soma/(divisor)));
    }

    return 0;
}