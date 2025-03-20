#include<stdio.h>

void mp_matriz(int *matriz,int l,int c, int mp){

    for(int i=0;i<l*c;i++){
        *(matriz+i)*=mp;
    }
}

int main(){
    int l=3,c=2;
    int matriz[l][c];

    int mp=2;

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    mp_matriz(&matriz[0][0],l,c,mp);

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("|%d|",matriz[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}