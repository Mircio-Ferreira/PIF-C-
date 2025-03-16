#include<stdio.h>

int main(){
    float m[12][12],soma=0;
    int cont=0;
    char operacao;
    scanf("%c",&operacao);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&m[i][j]);
            if(j>i){
                soma+=m[i][j];
                cont++;
            }
        }
    }
    if(operacao=='S')printf("%.1f\n",soma);
    if(operacao=='M')printf("%.1f\n",soma/(cont));
    return 0;
}