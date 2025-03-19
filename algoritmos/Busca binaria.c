#include <stdio.h>

int main(){
    long long int n = 10000;
    long long int v[n];
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    int baixo=0, alto=n-1;

    int alvo=82,cont=0;
    
    while(baixo<=alto){
        int meio=(alto+baixo)/2;
        int chute=v[meio];
        cont++;

        if(alvo==chute) {
            printf("O numero alvo foi %d, o numero de operacoes para encontrar o numero foi: %d",chute,cont);
            break;
        }
        else if(chute>alvo) alto=meio-1 ;

        else baixo=meio+1;
    }

    return 0;
}