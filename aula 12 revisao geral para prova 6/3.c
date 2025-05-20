//Façam uma função recursiva para imprimir a sequencia de fibonacci para um determinado numero N, em um arquivo
#include <stdio.h>

int fibonaci(int x){
    if(x==0) return 0;
    if(x==1) return 1;

    return fibonaci(x-1)+fibonaci(x-2);
}

int main(){
    FILE *write;
    write=fopen("saidafibonaci.txt","w");

    if(write==NULL){
        printf("Erro ao criar arquivo\n");
        return 0;
    }

    int x;

    while(1){

        scanf("%d",&x);
        if(x<0) break;

        fprintf(write,"f(%d)=%d\n",x,fibonaci(x));

    }

    printf("fim\n");
    return 0;
}