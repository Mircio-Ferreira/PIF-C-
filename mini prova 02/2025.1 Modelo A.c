#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    char matriz[2][n];
    char errado[100];

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&matriz[i][j]);
        }
    }
    scanf(" %[^\n]",errado);
    
    for(int i=0;errado[i]!='\0';i++){
        for(int j=0;j<n;j++){
            if(errado[i]==matriz[0][j]){
                errado[i]=matriz[1][j];
            }
        }
    }

    printf("\n%s",errado);
    return 0;
}