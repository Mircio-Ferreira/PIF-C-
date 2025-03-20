#include<stdio.h>

int main(){

    int A[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    
    int *ptr;
    int mp=2;
    ptr=&A[0][0];
    
    for(int i=0;i<9;i++){
        *ptr*=mp;
        ptr++;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("|%d|",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}