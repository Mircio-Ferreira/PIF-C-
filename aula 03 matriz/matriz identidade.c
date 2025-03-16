#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int identidade[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                identidade[i][j]=1;
            }
            else{
                identidade[i][j]=0;
            }
            printf("|%d|",identidade[i][j]);

        }
        printf("\n");
    }
    return 0;
}