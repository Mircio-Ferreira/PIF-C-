#include <stdio.h>
#include <string.h>

int main() {
    char palavra[1001];  // Array para armazenar a linha de entrada
    char antes, atual;

    while (gets(palavra) != NULL) {  // Enquanto houver entrada de dados
        int cont_palavra = 0, cont = 0;

        // Pula espaços iniciais, se houver
        //while (palavra[cont_palavra] == ' ') cont_palavra++;

        // Pega a primeira letra da primeira palavra
        antes = palavra[cont_palavra];  // "antes" recebe a primeira letra da primeira palavra

        cont_palavra++;  // Avança para o próximo caractere, após a primeira palavra

        // Percorre as palavras a partir do segundo caractere
        while (palavra[cont_palavra] != '\0') {
            // Quando encontrar um espaço, considera que uma palavra terminou
            if (palavra[cont_palavra] == ' ') {
                cont_palavra++;  // Pula o espaço

                // Verifica se não chegou no final da string
                if (palavra[cont_palavra] != '\0') {
                    atual = palavra[cont_palavra];  // Pega a primeira letra da próxima palavra

                    // Se a letra inicial da palavra for igual a "antes", incrementa o contador
                    if (atual == antes) {
                        cont++;
                    }

                    antes = atual;  // Atualiza "antes" para a nova letra
                }
            }
            cont_palavra++;  // Avança para o próximo caractere
        }

        // Imprime o número de aliterações encontrados
        printf("%d\n", cont);
    }

    return 0;
}
