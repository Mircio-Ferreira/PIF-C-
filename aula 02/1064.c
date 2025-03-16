#include<stdio.h>

int main(){
    double a;
    double soma=0;
    int cont=0;

    for(int i=0;i<=5;i++)
    {
        scanf("%lf",&a);
        if(a>0){
            cont++;
            soma+=a;

        }
    }
    printf("%d valores positivos\n%.1lf\n",cont,(soma/cont));

    

    return 0;
}