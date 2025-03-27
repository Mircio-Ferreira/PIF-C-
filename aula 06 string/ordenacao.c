#include <stdio.h>

int main(){
    int vetor[10]={9,8,7,6,5,4,3,2,1,0};
    int temp=0;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vetor[j]>vetor[j+1]){
                temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        printf("|%d|",vetor[i]);
    }

    return 0;
}