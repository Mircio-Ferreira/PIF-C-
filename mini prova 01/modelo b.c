#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matriz[n][n];
    int principal=0,secundaria=0;
    int coluna=n-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            if(i==j){
                principal+=matriz[i][j];
            }
        }
        secundaria+=matriz[i][coluna];
        coluna--;

    }

    printf("%d\n",(principal-secundaria));
    return 0;
}