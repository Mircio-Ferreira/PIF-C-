#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int temNavio; // 0 ou 1
    int atingido; // 0 ou 1
    } Celula;

int main(){
    srand(time(NULL));
    int num1to10;

    int n=4,cont_navio=0, cord_i , cord_j;

    Celula **matriz;

    matriz=malloc(n*sizeof(Celula *));

    for(int i=0;i<n;i++){
        matriz[i]=malloc(n*sizeof(Celula));
    }
    // Motando tabuleiro
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            num1to10 = rand()%10;
            if(num1to10==0) {
                matriz[i][j].temNavio=1;
                cont_navio++;
            }
            else matriz[i][j].temNavio=0;
            
            matriz[i][j].atingido=0;
        }
    }

    while(cont_navio!=0){

        //Mostra Tabuleiro
        printf("\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matriz[i][j].atingido==0) printf("| . |");
                
                else if(matriz[i][j].atingido==1 && matriz[i][j].temNavio==1) printf("| X |");

                else printf("| O |");
            }
            printf("\n");
        }

        printf("\n\n");

        printf("Digite a cordenada: ");
            scanf("%d %d",&cord_i,&cord_j);

            if(matriz[cord_i][cord_j].temNavio==1) {
                matriz[cord_i][cord_j].atingido=1;
                cont_navio--;
            }
            else matriz[cord_i][cord_j].atingido=1;

    }

    printf("\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matriz[i][j].atingido==0) printf("| . |");
                
                else if(matriz[i][j].atingido==1 && matriz[i][j].temNavio==1) printf("| X |");

                else printf("| O |");
            }
            printf("\n");
        }

        for(int i=0;i<n;i++){
            free(matriz[i]);
        }

        free(matriz);
    

    return 0;
}