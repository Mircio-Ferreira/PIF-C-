#include <stdio.h>
#include <stdlib.h>


int main() {
    int N;
    scanf("%d", &N);

    int *linhaAtual = malloc(N * sizeof(int));
    int *proximaLinha = malloc(N * sizeof(int)); 


    for (int i = 0; i < N; i++) {
        scanf("%d", &linhaAtual[i]);
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            proximaLinha[j] = linhaAtual[j] * linhaAtual[j + 1];
        }


        int *temp = linhaAtual;
        linhaAtual = proximaLinha;
        proximaLinha = temp;
    }

    if (linhaAtual[0] == 1)
        printf("preta\n");
    else
        printf("branca\n");

    free(linhaAtual);
    free(proximaLinha);

    return 0;
}