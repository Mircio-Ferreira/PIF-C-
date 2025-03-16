#include<stdio.h>

int main()
{   
    int n;
    scanf("%d",&n);
    int vetor[n],reverso[n];
    int decremento=n-1;
    for(int i=0;i<n;i++){  
        scanf("%d",&vetor[i]);
        reverso[decremento]=vetor[i];
        decremento--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",reverso[i]);
    }
    return 0;
}