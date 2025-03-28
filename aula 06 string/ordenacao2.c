#include <stdio.h>
#include <string.h>

void swap(int *a,int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
        
}



int main(){
    int vetor[10] = {3, 1, 7, 4, 9, 0, 5, 2, 6, 8};


    int tamanho=10;

    for(int i=0;i<tamanho-1;i++){
        for(int j=0;j<tamanho-1;j++){

            if(vetor[j]>vetor[j+1]){
                swap(&vetor[j],&vetor[j+1]);
            }
        }
    }

   

    for(int i=0;i<10;i++){
        printf("|%d|",vetor[i]);
    }

    return 0;
}