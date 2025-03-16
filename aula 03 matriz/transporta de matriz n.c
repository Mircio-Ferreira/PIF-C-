#include<stdio.h>

int main(){
    int l1,c1;
    scanf("%d %d",&l1,&c1);
    int a[l1][c1],b[c1][l1];



    for(int i=0;i<c1;i++){
        for(int j=0;j<l1;j++){
            scanf("%d",&a[j][i]);
            b[i][j]=a[j][i];
            printf("|%d|",b[i][j]);
        }
        printf("\n");
    }

    return 0;


}