#include <stdio.h>

int main(){
    int vetor[10]={9,8,7,6,5,4,3,2,1,0};
    int temp=0;

   

    for(int i=0;i<10;i++){
        printf("|%d|",vetor[i]);
    }

    return 0;
}