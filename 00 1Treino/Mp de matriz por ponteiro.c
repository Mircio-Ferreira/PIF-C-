#include <stdio.h>

int main(){

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int *ptr=&matriz[0][0];
    int mp=10;
    for(int i=0;i<3*3;i++){
        *(ptr+i)*=mp;
    }
    ptr=matriz[0];
    for(int i=0;i<3*3;i++){
        printf("| %d |",*(ptr+i));
    }
    

    return 0;
}