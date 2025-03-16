#include<stdio.h>

int pow(int n,int e){
    
    if(e==0) return 1;
    if(e==1) return n;
    
    return n*pow(n,e-1);

    
}

int main()
{
    int n=2,e=5;

    printf("%d",pow(n,e));
return 0;    
}