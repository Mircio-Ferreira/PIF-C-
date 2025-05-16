#include <stdio.h>

int pot(int x,int n){

    if(n==0) return 1;

    if(n==1) return x;

    return x*(pot(x,n-1));
}

int main(){

    int x=2,n=10;

    printf("%d elevado a %d = %d",x,n,pot(x,n));

    return 0;
}