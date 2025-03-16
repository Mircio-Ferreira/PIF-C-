#include<stdio.h>

int main(){
    
    int m[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int m2[3][3];
    
    int vetor[3];

    int cont=2;

    /* 00 01 02      20 10 00
       10 11 12      21 11 01   
       20 21 22      22 12 02
       */

       for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                vetor[j]=m[i][j];

            }

            for(int k=0;k<3;k++){
                m2[k][cont]=vetor[k];
            }

            cont--;
       }

       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("|%d|",m2[i][j]);
        }
        printf("\n");
    }
       

    return 0;
}