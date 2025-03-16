#include<stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if (num1>=num2 && num1>=num3)
    {
        printf("O numero maior e %d",num1);
    }
    else if (num2>=num3){
        printf("o num maior e: %d",num2);
    }
    else{
        printf("O maior numero e: %d",num3);
    }
    return 0;
}