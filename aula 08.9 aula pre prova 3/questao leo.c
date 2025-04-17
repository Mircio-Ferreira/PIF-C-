#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b);

int main() {
    char linha[1001];
    
    if (scanf(" %[^\n]", linha) == EOF) {
        return 0;
    }

    do {
        int freq[256] = {0};

        for (int i = 0; linha[i] != '\0'; i++) {
            freq[(int)linha[i]]++;
        }

        int freq_pares[256][2], count = 0;

        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                freq_pares[count][0] = i;
                freq_pares[count][1] = freq[i];
                count++;
            }
        }

        qsort(freq_pares, count, sizeof(freq_pares[0]), compara);

        for (int i = 0; i < count; i++) {
            printf("%d %d\n", freq_pares[i][0], freq_pares[i][1]);
        }

    } while (scanf(" %[^\n]", linha) != EOF && printf("\n"));

    return 0;
}

int compara(const void *a, const void *b) {
    const int *fa = (const int *)a;
    const int *fb = (const int *)b;

    if (fa[1] == fb[1]) {
        return fb[0] - fa[0];
    }
    return fa[1] - fb[1];
}