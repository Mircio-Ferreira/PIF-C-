#include<stdio.h>

int main(){
    int N,troca,incremento;
    char shift;
    scanf("%d",&N);
    int vetor[N],vetor2[N];
    scanf(" %c",&shift);
    scanf("%d",&troca);
    //incremento = shift == 'R' ? troca : N - troca;
    if(shift=='R') incremento=troca;
    else if(shift=='L') incremento=N-troca;

    for(int i=0;i<N;i++){
        scanf("%d",&vetor[i]);
        vetor2[incremento]=vetor[i];
        incremento++;
        if(incremento==N) incremento=0;
    }
    for(int i=0;i<N;i++){
    printf("|%d|",vetor2[i]);
    }
    return 0;
}