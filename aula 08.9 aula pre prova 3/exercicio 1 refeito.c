#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int cargaHoraria;
    } Curso;

typedef struct {
    char nome[100];
    int qtdCursos;
    Curso* cursos; // ponteiro para vetor de cursos
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

        }
        
    }

    return 0;
}