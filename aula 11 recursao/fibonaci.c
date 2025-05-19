#include <stdio.h>

int fibonacci(int x){

    if(x==0) return 0;

    if(x==1) return 1;

    return fibonacci(x-1)+fibonacci(x-2);
}

int main(){

    for(int i=0;i<11;i++){
        printf("Fibonaci(%d) = %d\n",i,fibonacci(i));
    }

    return 0;
}