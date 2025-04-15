#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float temperatura;
    float umidade;
    } Clima;

int main(){

    int l,c;
    int cont=0;

    float media_temp=0,media_umidade=0;

    scanf("%d %d",&l,&c);

    Clima **matriz;

    matriz=(Clima **)malloc(l*sizeof(Clima*));

    for(int i=0;i<l;i++){
        matriz[i]=(Clima *)malloc(c*sizeof(Clima));
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%f",&matriz[i][j].temperatura);

            scanf("%f",&matriz[i][j].umidade);

            media_temp+=matriz[i][j].temperatura;
            media_umidade+=matriz[i][j].umidade;
            cont++;
        }

        printf("Valor da media de temperatura: %.2f\n",media_temp/cont);
        printf("Valor da media de Umidade: %.2f\n",media_umidade/cont);

        media_temp=0;
        media_umidade=0;
        cont=0;

    }

    for(int i=0;i<l;i++){
        free(matriz[i]);
    }

    free(matriz);



    return 0;
}