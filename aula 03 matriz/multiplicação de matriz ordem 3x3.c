#include<stdio.h>

int main(){
    int A[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int B[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int C[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           C[i][j]=0;
            for(int k=0;k<3;k++){
                C[i][j]+=(A[i][k]*B[k][j]);
            }
            printf("|%d|",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}