#include <stdio.h>

int main()

{   
    int x=42, *ptrx=&x;

    *ptrx=99;

    printf("%d",x);

    return 0;
}