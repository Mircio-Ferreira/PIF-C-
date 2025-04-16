/*
(STRUTCS E ALOCAÇÃO DINÂMICA DE MEMÓRIA - 2.0 pontos) Escreva um programa para cadastro de alunos 
em uma disciplina, definindo uma estrutura chamada aluno com as seguintes informações: nome (string 
tamanho 50), sobrenome (string tam 50), media (float) e faltas (int). Seu programa deve receber o 
número de alunos matriculados na disciplina e alocar dinamicamente um vetor da estrutura aluno com 
este tamanho. Depois deve receber as informações do usuário para cada aluno cadastrado e, ao final, 
imprimir (1) a média das notas da turma e (2) a quantidade de alunos reprovados por falta (lembrando 
que um número de faltas igual ou maior que 15 reprova o aluno). Ao final de tudo, seu programa deve 
desalocar a memória alocada dinamicamente.

a)Estrutura aluno (0.3 pontos)
b)Alocação dinâmica do array (0.7 pontos)
c)Receber dados o usuário, cálculo da média e impressões  (0.8 pontos)
d)Desalocar memória (0.2 pontos)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    char sobrenome[50];
    float media;
    int faltas;
} Turma;

int main(){
    
    int quant_alunos,reprovados=0;
    float media_turma=0;

    Turma *vetor;

    scanf("%d",&quant_alunos);
    vetor=malloc(quant_alunos*sizeof(Turma));

    for(int i=0;i<quant_alunos;i++){
        scanf(" %[^\n]",vetor[i].nome);
        scanf(" %[^\n]",vetor[i].sobrenome);
        scanf(" %f",&vetor[i].media);
        scanf(" %d",&vetor[i].faltas);

        media_turma+=vetor[i].media;
        
        if(vetor[i].faltas>=15) reprovados++;


    }

    free(vetor);

    printf("A media da turma foi de: %.2f\nReprovados por falta: %d",(media_turma/quant_alunos), reprovados);
    return 0;
}