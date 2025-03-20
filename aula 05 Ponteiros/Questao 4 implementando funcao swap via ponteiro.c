#include<stdio.h>

void swap(int *ptra, int *ptrb){

    int temp = *ptra;
    *ptra=*ptrb;
    *ptrb=temp;

}

int main(){
    int a=1, b=2;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("O valor de a:%d \nO valor de b:%d\n",&a,&b);

    return 0;
}