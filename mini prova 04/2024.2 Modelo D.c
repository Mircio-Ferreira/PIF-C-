/*
(STRUTCS E ALOCAÇÃO DINÂMICA DE MEMÓRIA - 2.0 pontos) Escreva um programa para cadastro de 
livros de uma livraria, definindo uma estrutura chamada livro com as seguintes informações:  
número serial (int), título (string max 50 caracteres), nome do autor (string max 100 caracteres), 
quantidade (int), e preço (float). Seu programa deve receber o número de livros a serem cadastrados 
e alocar dinamicamente um vetor da estrutura livro com este tamanho. Depois deve receber as informações 
do usuário para cada livro cadastrado. Ao final, deve dar a opção de buscar um livro pelo nome do autor 
e imprimir o seu título, a quantidade disponível e o preço. Não esqueça de desalocar a memória alocada 
dinamicamente.

a)Estrutura livro (0.3 pontos);
b)Alocação dinâmica (0.6 pontos);
c)Cadastro dos livros (0.3 pontos);
d)Busca dos livros (0.6 pontos)
e)Liberar a memória (0.2 pontos)
*/

/*
OBS - Os alunos podem usar strcmp mesmo que esta não trate os casos de minúsculas e maiúsculas.

Estou usando o exemplo mais simples onde as string de titulo e nome não possuem espaço no meio, 
dai o uso de scanf. Considerar caso o aluno use scanf ou fgets()

*/

typedef struct{
    int serial;
    char titulo[51];
    char autor[101];
    int quantidade;
    float preco;
} Biblioteca;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int quant_livros;
    Biblioteca *livros;
    char procurar[101];

    printf("Digite quantide de livros a ser cadastrado na biblioteca: ");
    scanf("%d",&quant_livros);

    livros=malloc(quant_livros*sizeof(Biblioteca));

    for(int i=0;i<quant_livros;i++){
        printf("\nDigite Serial do livro: \n");
        scanf(" %d",&livros[i].serial);
        printf("Digite Titulo do livro: \n");
        scanf(" %[^\n]",livros[i].titulo);
        printf("Digite autor do livro: \n");
        scanf(" %[^\n]",livros[i].autor);
        printf("Digite quantidade do livro cadastro no sistema: ");
        scanf(" %d",&livros[i].quantidade);
        printf("Digite o valor do livro: \n");
        scanf(" %f",&livros[i].preco);
        
    }

    printf("Digite o nome do autor para poder procurar as informações cadastradas: ");
    scanf(" %[^\n]",procurar);

    int tamanho_procura=strlen(procurar), cont =0;

    for(int i=0 ;i<quant_livros;i++){
        for(int j=0;procurar[j]!='\0';j++){
            if(procurar[j]==livros[i].autor[j]) cont++;
        }
        if(cont==tamanho_procura){
            printf("\nTitulo: %s\tQuantidade disponivel: %d\tPreco: %.2f",livros[i].titulo, livros[i].quantidade, livros[i].preco);
        }
        cont=0;
    }

    free(livros);

    return 0;
}