#include<stdio.h>
//#include<locale.h>
int main(){
    //setlocale(LC_ALL," ");
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("Numero e Par");
    }
    else{
        printf("Numero e impar ");
    }

    return 0;
}