#include<stdio.h>

int main(){
    int l1,c1;
    scanf("%d %d",&l1,&c1);
    int A[l1][c1];
    int l2,c2;
    scanf("%d %d",&l2,&c2);
    int B[l2][c2];

    for(int i=0;i<l1;i++){
        for(int j=0;j<c1;j++){
            printf("\nMatriz A [%d] [%d]: ",i,j);
            scanf(" %d",&A[i][j]);
        }
    }

    for(int i=0;i<l2;i++){
        for(int j=0;j<c2;j++){
            printf("\nMatriz B [%d] [%d]: ",i,j);
            scanf(" %d",&B[i][j]);
        }
    }
    
    
    if(c1==l2){
        int C[l1][c2];

        for(int i=0;i<l1;i++){
            for(int j=0;j<c2;j++){
                C[i][j]=0;
                for(int k=0;k<c2;k++){
                    C[i][j]+=A[i][k]*B[k][j];

                }
                printf("|%d|",C[i][j]);
            }
            printf("\n");
        }


    }
    else{
        printf("\n Matriz nao pode existir");
    }
    return 0;
}