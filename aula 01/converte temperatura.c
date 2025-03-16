#include<stdio.h>

int main(){
    double celci,faren;
    scanf("%lf",&celci);
    faren=(celci*9/5)+32;
    printf("New Temp: %lf",faren);
    return 0;

}