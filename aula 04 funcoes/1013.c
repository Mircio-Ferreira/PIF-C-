#include<stdio.h>
#include <stdlib.h>

int MaiorAB(int a, int b){
    int maior;
    maior=(a+b+abs(a-b))/2;
    
    return maior;
}

int main(){
    int a,b,c;
    int maior;
    scanf("%d %d %d",&a,&b,&c);
    maior=MaiorAB(a,b);
    maior=MaiorAB(maior,c);
    
    printf("%d eh o maior\n",maior);
    return 0;
}