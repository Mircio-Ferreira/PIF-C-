#include <stdio.h>

int mdc(int a, int b){

    if(b==0) return a;

    return mdc(b,a%b);

}

int main(){

    int a=60;
    int b=18;

    printf("O mdc(%d,%d) = %d",a,b,mdc(a,b));


    return 0;
}