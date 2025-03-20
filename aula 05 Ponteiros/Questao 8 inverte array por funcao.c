#include<stdio.h>
// Forma 1 fazendo com 2 ponteiros
void inversao( int *ptr){
    int temp;
    //int *ptrlast=(ptr+4);
    for(int i=0;i<2;i++){
        int *ptrlast=(ptr+4-i);
        temp=ptr[i];
        ptr[i]=*ptrlast;
        *ptrlast=temp;
        }
}
// Forma 2 com um ponteiro
void inversao2(int *ptr){
    int temp;
    for(int i=0;i<5/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[4-i];
        ptr[4-i]=temp;        
    }
}

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};
    inversao2(numeros);

    for(int i=0;i<5;i++){
        printf("|%d|",*(numeros+i));
    }
    return 0;
}