#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int vetor[N],Troca[N];
    for(int i=0;i<N;i++){
        scanf("%d",&vetor[i]);
        Troca[N-(i+1)]=vetor[i];
    }

    for(int i=0;i<N;i++){
        printf("|%d|",Troca[i]);
    }
    return 0;
}