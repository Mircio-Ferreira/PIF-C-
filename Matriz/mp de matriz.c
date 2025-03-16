#include<stdio.h>

int main(){
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz3[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz3[i][j]=0;
            for(int k=0;k<3;k++){
                matriz3[i][j]+=matriz1[i][k]*matriz2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matriz3[i][j]);
        }
        printf("\n");
    }


    return 0;
}