#include <stdio.h>

int fatorial(int n){
    if(n==1 || n==0 ){
        return 1;
    }
    else return n*fatorial(n-1);
}

int main(){
    int input=10;
    int valor;

    for(int i=0;i<11;i++){
        valor=input-i;
    printf("\nO fatorial de %d! = %d",valor,fatorial(valor));

    }

    return 0;
}