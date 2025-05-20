//Faça o produtorio dos elementos de um array usando recursão (multiplicação).

#include <stdio.h>

int mp_array(int *array,int idx){

    if(idx==0) return array[idx];
    
    return array[idx]*mp_array(array,idx-1);
}

int main(){

    int array[5]={1,2,3,4,5};
    int len=5;

    printf("a multiplicacao do array foi de: %d",mp_array(array,len-1));

    return 0;
}