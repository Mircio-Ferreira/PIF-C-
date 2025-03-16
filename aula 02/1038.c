#include<stdio.h>
int main()
{
    int cod,quant;
    float valor;
    scanf("%d %d",&cod,&quant);
    
    if(cod==1){
        valor=quant*4;
    }
    if(cod==2){
        valor=quant*4.5;
        }
    if(cod==3){
        valor=quant*5;
    }
    if(cod==4){
        valor=quant*2;
    }
    if(cod==5){
        valor=quant*1.5;
    }
    printf("Total: R$ %.2f\n",valor);

    return 0;
}