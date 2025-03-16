#include <stdio.h>

int main(){
    int n;
    printf("Digite tamanho da matriz\n");
    scanf("%d",&n);
    int matriz[n][n],cont_sup=0,cont_inf=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            if(i>j && matriz[i][j]!=0) cont_inf++;
            else if(j>i && matriz[i][j]!=0) cont_sup++;
        }

    }
    if(cont_inf>0 && cont_sup>0){
        printf("Matriz nao triangular");
    }
    else if(cont_inf>0 && cont_sup==0){
        printf("I");
    }
    else if(cont_inf==0 && cont_sup>0){
        printf("S");
    }
    else if(cont_inf==0 && cont_sup==0){
        printf("S ou I");
    }
    return 0;
}