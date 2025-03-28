#include <stdio.h>

int main(){

    int vetor[5]={1,2,3,4,5};
    int *ptr;
    ptr=vetor;

    for(int i=0;i<5/2;i++){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+5-1-i);
        *(ptr+5-1-i)=temp;
    }

    for(int i=0;i<5;i++){
        printf(" |%d| ",vetor[i]);
    }
    
    return 0;
}