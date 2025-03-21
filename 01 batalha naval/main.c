#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int cont_vitoria=0;
    int cont_navio_destruido=0;

    int jogo_real[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            int numero= rand() %100;

            if(numero<70) numero=0;
            else {
                
                cont_vitoria++;
                
                numero=1;}
            
            jogo_real[i][j]=numero;
        }
    }


    int jogo_visto[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("| %d |",jogo_real[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n\n\n\n\n");

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            jogo_visto[i][j]=-1;
        }
    }

    while(1){

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                printf("| %d |",jogo_visto[i][j]);
            }
            printf("\n");
        }

        int lin,col;

        while(1){
            scanf("%d %d",&lin,&col);

            if((lin<=9 && lin>=0 && col>=0 && col<=9 ) && jogo_visto[lin][col]==-1){
                jogo_visto[lin][col]=jogo_real[lin][col];
                if(jogo_real[lin][col]==1) cont_navio_destruido++;
                break;            
            }
        }
      
        if(cont_navio_destruido==cont_vitoria) break;
    }

    printf("\nPARABENS VOCE VENCEU!!!!!");

    return 0;
}