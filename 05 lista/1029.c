#include <stdio.h>

int chamadas=0;

int fibonaci(int x);

int main(){

    int loops;
    scanf("%d",&loops);

    for(int i=0;i<loops;i++){
        chamadas=0;
        int x;
        scanf("%d",&x);
        
        printf("fib(%d) = %d calls = %d\n",x, chamadas-1,fibonaci(x));

        
    }
    return 0;
}



int fibonaci(int x){
    chamadas++;
    if (x==0) return 0;
    if (x==1) return 1;

    return fibonaci(x-1) + fibonaci(x-2);
}

