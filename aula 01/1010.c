#include<stdio.h>

int main()
{
    int num1,num2;
    float num3;
    float soma=0;

    scanf("%d %d %f",&num1, &num2, &num3);
    soma=soma+(num2*num3);
    scanf("%d %d %f",&num1,&num2,&num3);
    soma=soma+(num2*num3);

    printf("VALOR A PAGAR: R$ %.2f\n",soma);


    return 0;

}