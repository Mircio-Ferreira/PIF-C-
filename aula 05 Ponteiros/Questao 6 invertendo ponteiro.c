#include<stdio.h>

int main(){
    
    int vetor[5]={0,1,2,3,4};
    

    
    int *ptrlast,*ptr;
    int temp;


    for(int i=0;i<2;i++){
        ptrlast=&vetor[4-i];
        ptr=&vetor[i];
        temp=*ptr;
        *ptr=*ptrlast;
        *ptrlast=temp;

    }

    



    for(int i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }


    return 0;
}