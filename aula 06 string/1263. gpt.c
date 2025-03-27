#include <stdio.h>
#include <string.h>

int main() {
    char linha[5050]; // Buffer para armazenar a linha de entrada (100 palavras * 50 letras cada, mais espaço extra)
    while (fgets(linha, sizeof(linha), stdin)) { // Lê uma linha da entrada padrão até EOF
        int aliteracoes = 0, emGrupo = 0; // Contadores para aliterações e estado de grupo
        char anterior_inicial = 0; // Armazena a inicial da palavra anterior
        
        int i = 0, inicio_palavra = 1; // `inicio_palavra` controla quando uma nova palavra começa
        while (linha[i] != '\0' && linha[i] != '\n') { // Percorre a linha até o final
            if (linha[i] != ' ') { // Se o caractere não for um espaço, é parte de uma palavra
                char inicial = linha[i]; // Captura o primeiro caractere da palavra
                if (inicial >= 'A' && inicial <= 'Z') { // Converte maiúsculas para minúsculas
                    inicial += 'a' - 'A';
                }
                
                if (inicio_palavra) { // Só verifica a inicial quando é uma nova palavra
                    if (anterior_inicial >= 'A' && anterior_inicial <= 'Z') { // Converte a inicial anterior para minúscula, se necessário
                        anterior_inicial += 'a' - 'A';
                    }
                    
                    if (anterior_inicial == inicial) { // Compara com a inicial da palavra anterior
                        if (!emGrupo) { // Evita contar múltiplas vezes dentro do mesmo grupo
                            aliteracoes++;
                            emGrupo = 1;
                        }
                    } else {
                        emGrupo = 0; // Reinicia o estado de grupo quando a inicial muda
                    }
                    anterior_inicial = inicial; // Atualiza a inicial anterior já convertida
                    inicio_palavra = 0; // Marca que estamos no meio de uma palavra
                }
            } else {
                inicio_palavra = 1; // Próximo caractere pode ser o início de uma nova palavra
            }
            i++;
        }
        
        printf("%d\n", aliteracoes); // Exibe a quantidade de aliterações encontradas
    }
    return 0;
}