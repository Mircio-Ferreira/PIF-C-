#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int cargaHoraria;
    } Curso;

typedef struct {
    char nome[100];
    int qtdCursos;
    Curso *cursos; // ponteiro para vetor de cursos
    } Universidade;

int main(){
    int n;
    scanf("%d",&n);
    Universidade *uni;
    uni=malloc(n*sizeof(Universidade));

    for(int i=0;i<n;i++){
        scanf(" %[^\n]",uni[i].nome);
        scanf(" %d",&uni[i].qtdCursos);
        uni[i].cursos=malloc(uni[i].qtdCursos*sizeof(Curso));
        for(int j=0;j<uni[i].qtdCursos;j++){
            scanf(" %[^\n]",uni[i].cursos[j].nome);
            scanf("%d",&uni[i].cursos[j].cargaHoraria);
        }   
    }

    for(int i=0;i<n;i++){
        printf("[%d]: %s com [%d] cursos\n",i,uni[i].nome,uni[i].qtdCursos);
        for(int j=0;j<uni[i].qtdCursos;j++){
        printf("{%d} Curso: %s Carta Horaria: %d\n",j,uni[i].cursos[j].nome,uni[i].cursos[j].cargaHoraria);
        }
        free(uni[i].cursos);
    }

    free(uni);

    return 0;
}