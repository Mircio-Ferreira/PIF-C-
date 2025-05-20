/*
Leia 2 numeros de um arquivo e faça uma função recursiva para calcular o MDC entre eles
 e imprimir o resultado em outro arquivo. O programa só termina quando 
 nao tiverem mais 2 numeros para serem lidos do arquivo (EOF).
*/
#include <stdio.h>

int mdc(int a,int b);

int main(){
    FILE *read,*write;
    read=fopen("3entrada.txt","r");
    write=fopen("mdcsaida.txt","w");

    int a,b;

    if(read==NULL){
        printf("erro ao abrir arquivoz\n");
        return 0;
    }

    while(fscanf(read,"%d %d",&a,&b)!=EOF){
        //printf("MDC( %d , %d) = %d\n");
        fprintf(write,"MDC( %d , %d) = %d\n",a,b,mdc(a,b));
    }

    fclose(read);
    fclose(write);
    return 0;
}

int mdc(int a,int b){

    if(b==0) return a;

    return mdc(b,a%b);
}