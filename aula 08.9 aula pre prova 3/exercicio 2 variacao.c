#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float temperatura;
    float umidade;
} Clima;


int main(){

    Clima **matriz;
    float soma_temp=0,soma_umi=0,maior_temp;

    int l,c,x=0,y=0;
    scanf("%d %d",&l,&c);

    matriz=malloc(l*sizeof(Clima*));

    for(int i=0;i<l;i++){
        matriz[i]=malloc(c*sizeof(Clima));
    }

    

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%f %f",& matriz[i][j].temperatura, &matriz[i][j].umidade);
            if(i==0 && j==0) maior_temp=matriz[i][j].temperatura;
            
            soma_temp+=matriz[i][j].temperatura;
            soma_umi+=matriz[i][j].umidade;

            if(matriz[i][j].temperatura>maior_temp){
                x=i;
                y=j;
                maior_temp=matriz[i][j].temperatura;
            }
        }
    }

    for(int i=0;i<l;i++){
        free(matriz[i]);
    }
    free(matriz);

    printf("Media umidade: %.2f\tMedia temp: %.2f\nMaior Temperatura Registrada: %.2f\t com indicie: %d / %d",soma_umi/(l*c),soma_temp/(l*c),maior_temp,x,y);

    

    return 0;
}