#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char lingua[100];
    char nivel[20];
    char tipo[10];
} aula;

typedef struct{
    aula aula_curso;
    int vagas;
    char turma[10];
    float mensalidade;
} curso;

int main(){
    int n;
    scanf("%d",&n);
    curso *vetor;
    vetor=malloc(n*sizeof(curso));

    for(int i=0;i<n;i++){
        scanf(" %s",vetor[i].aula_curso.lingua);
        scanf(" %s",vetor[i].aula_curso.nivel);
        scanf(" %s",vetor[i].aula_curso.tipo);
        scanf(" %d",&vetor[i].vagas);
        scanf(" %s",vetor[i].turma);
        scanf(" %f",&vetor[i].mensalidade);
    }
    char entrada_turno[100];
    scanf(" %s",entrada_turno);
    for(int i=0;i<n;i++){
    if(strcmp(entrada_turno,vetor[i].turma)==0) {
        printf("%s\n",vetor[i].aula_curso.lingua);
    }
    }

    char entrada_lingua[100];
    char entrada_nivel[20];

    scanf("%s %s",entrada_lingua,entrada_nivel);

    for(int i=0; i<n;i++){
        if((strcmp(entrada_lingua,vetor[i].aula_curso.lingua)==0) && strcmp(entrada_nivel,vetor[i].aula_curso.nivel)==0){
            printf("\nVagas: %d",vetor[i].vagas);
        }

    }
    free(vetor);

    return 0;
}