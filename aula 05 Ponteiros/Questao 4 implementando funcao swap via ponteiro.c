#include<stdio.h>

void swap(int *ptra, int *ptrb){

    int temp;
    temp=*ptra;
    *ptra=*ptrb;
    *ptrb=temp;

}

int main(){
    int a=1, b=2;
     
    int *ptra=&a, *ptrb=&b;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    swap(ptra,ptrb);

    printf("O valor de a:%d \nO valor de b:%d\n",*ptra,*ptrb);

    return 0;
}