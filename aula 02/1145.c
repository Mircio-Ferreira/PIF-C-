#include<stdio.h>

int main()
{
    int x,y;
    int cont=1;
    scanf("%d %d",&x,&y);

    for(int i=0;i<y;i++){
        printf("%d",cont);
        if(cont%x==0){
            printf("\n");
        } else {
            printf(" ");
        }
        cont++;
    }
    return 0;
}