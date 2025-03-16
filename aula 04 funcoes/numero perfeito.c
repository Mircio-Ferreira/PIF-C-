#include<stdio.h>

int perfeito(int x){
    int soma=0;
    for(int i=1;i<x;i++){
            if(x%i==0) soma+=i;
    }
    if(soma==x) return 1;
    else return 0;
}

int main(){
    int x=5;

    printf("%d",perfeito(x));
    return 0;


}