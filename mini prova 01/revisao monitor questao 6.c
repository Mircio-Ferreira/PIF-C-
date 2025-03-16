#include<stdio.h>

int validador_simetrico(int n,int matriz[n][n]);

int main(){
    int n;
    scanf("%d",&n);
    int matriz[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    if(validador_simetrico(n,matriz)) printf("Simetrico");
    else printf("Nao simetrico");
    return 0;
}

int validador_simetrico(int n,int matriz[n][n]){
    int transposta[n][n], cont=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transposta[i][j]=matriz[j][i];
            if(transposta[i][j]==matriz[i][j]) cont++;

        }
    }

    if(cont==n*n) return 1;
    else return 0;
}
