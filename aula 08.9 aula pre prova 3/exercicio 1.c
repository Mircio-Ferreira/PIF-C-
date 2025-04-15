#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    scanf(" %d",&n);

    Universidade *uni;

    Curso *cursinhos;

    uni=(Universidade *)malloc(n*sizeof(Universidade));
  
    for(int i=0;i<n;i++){
        // Receber nomes de universidades
        char nome[100];
        scanf(" %[^\n]",nome);
        strcpy(uni[i].nome,nome);

        int quant_curso;
        scanf("%d",&quant_curso);

        cursinhos=(Curso*)malloc(quant_curso*sizeof(Curso));

        for(int j=0;j<quant_curso;j++){
            scanf(" %[^\n]",cursinhos[j].nome);
            scanf(" %d",&cursinhos[j].cargaHoraria);
        }
        
        uni[i].qtdCursos = quant_curso;
        uni[i].cursos=cursinhos;
        
        
    }

    for(int i=0;i<n;i++){
        printf("Universidade: %s\n",uni[i].nome);
        for(int j=0;j<uni[i].qtdCursos;j++){
            printf("Curso[%d]: %s\n",j,uni[i].cursos[j].nome);
        
        }
        free(uni[i].cursos);
    }
    free(uni);

    return 0;
}