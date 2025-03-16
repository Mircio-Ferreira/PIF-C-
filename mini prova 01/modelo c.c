#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int par=0,impar=0,matriz[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            
            if((j+1)%2==0){
                par+=matriz[i][j];
            }
            else{
                impar+=matriz[i][j];
            }

        }
    }
    printf("soma de par: %d\nsoma impar: %d\ndif: %d",par,impar,(par-impar));
    return 0;
}