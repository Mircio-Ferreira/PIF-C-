#include <stdio.h>

int main()

{   int x=10, *ptrx=&x;

    
    float y=0.5, *ptry=&y;
    char letra='A', *ptrletra=&letra;

    printf("Valor x:%d / Endereico de x:%p / Valor da variavel ponteiro: %d / Endereco do propio ponteiro: %p\n\n",x,&x,*ptrx,ptrx);

    printf("Valor y:%f / Endereico de y:%p / Valor da variavel ponteiro: %f / Endereco do propio ponteiro: %p\n\n",y,&y,*ptry,ptry);

    printf("Valor letra:%c / Endereico de letra:%p / Valor da variavel ponteiro:%c  / Endereco do propio ponteiro:%p \n\n",letra,&letra,*ptrletra,ptrletra);

    

    return 0;
}