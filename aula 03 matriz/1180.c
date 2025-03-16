#include<stdio.h>

int main()
{   int n,menor,local;
    
    scanf("%d",&n);
    
    int vetor[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        if(i==0){
            menor=vetor[i];
            local=i;
        }
        if(vetor[i]<menor){
            menor=vetor[i];
            local=i;
        }
    }   

    printf("Menor valor: %d\nPosicao: %d\n",menor,local);
    

    return 0;
}