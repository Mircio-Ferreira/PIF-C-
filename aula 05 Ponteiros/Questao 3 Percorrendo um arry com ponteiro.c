#include <stdio.h>

int main()

{   
    int vetor[5]={10,20,30,40,50}, *ptrvetor=vetor;

    for (int  i = 0; i < 5; i++)
    {
        printf("|%d|",*(ptrvetor+i));
    }
    
    return 0;
}