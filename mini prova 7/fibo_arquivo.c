#include <stdio.h>

int fibo(int x);

int main(){

    FILE *write;
    write=fopen("saida_fibo.txt","w");
    if(write==NULL){
        printf("erro ao ler\n");
        return 0;
    }

    int x;

    for(int i=0;i<11;i++){
        fprintf(write,"fibo(%d) = %d\n",i,fibo(i));
    }

    fclose(write);

    return 0;
}

int fibo(int x){

    if(x==0) return 0;
    if(x==1) return 1;
    return fibo(x-1)+fibo(x-2);

}