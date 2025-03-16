#include <stdio.h>

int main() {
    char matriz[3][4] = { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12} 
    };

    int linha = 1;  // Segunda linha (índice 1)
    
    // Imprimindo apenas a linha escolhida
    for (int j = 0; j < 4; j++) {
        linha=j;
        printf("%d ", matriz[linha]);
    }
    
    return 0;
}
