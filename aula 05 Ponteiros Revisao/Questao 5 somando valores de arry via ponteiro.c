#include <stdio.h>

int main(){

    int soma=0;
    int vetor[4]={1,2,3,4};
    int *ptr;
    ptr=vetor;

    for(int i=0;i<4;i++){
        //soma+=*(ptr+i);
        //soma+=*(vetor+i);
        soma+=*ptr;
        ptr+=1;
    }

    printf("%d",soma);

    return 0;
}