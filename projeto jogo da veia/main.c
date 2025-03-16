#include<stdio.h>

int main(){
    int jogo[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};

    int cont_coluna=0,cont_linha=0,cont_diagonal1=0,cont_diagonal2=0;
    
    while(1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("| %d |",jogo[i][j]);
            }
            printf("\n");
        }
        int linha,coluna;
        int jogada;
        printf("\nDigite 1 para x, 0 para O,: ");
        scanf("%d",&jogada);
        printf("\n");
        printf("Digite entrada de sua jogada( linha coluna): ");
        scanf("%d %d",&linha,&coluna);

        //chegagem de linha a linha
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(jogo[i][j]==0){
                    cont_linha++;
                }

            }
        }
        
        jogo[linha][coluna]=jogada;

    }

    return 0;
}