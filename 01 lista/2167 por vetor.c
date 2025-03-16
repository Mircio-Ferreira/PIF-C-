#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n],index=0;

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        //garantir que eu estou ao menos no meu indicie 1 do vetor e que so va atualiza uma veez
        if(i!=0 && index==0){
            if(vetor[i-1]>vetor[i]){
                index=i+1;
            }
        }
    }
    printf("%d\n",index);

    return 0;
}