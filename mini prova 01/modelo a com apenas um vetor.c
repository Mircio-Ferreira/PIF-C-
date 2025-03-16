#include<stdio.h>

int main(){
    int n=5;
    int decremento=n-1;// ou seja 4
    int vetor[5]={0,1,2,3,4};
    int receber1,receber2;
    // vetor[5]={4,,,,0} 2
    for(int i=0;i<(n/2);i++){
        receber1=vetor[i];
        receber2=vetor[decremento];
        vetor[i]=receber2;
        vetor[decremento]=receber1;
        decremento--;

    }

    for(int i=0;i<n;i++){
        printf(" %d ",vetor[i]);
    
    }
    return 0;
}