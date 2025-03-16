#include<stdio.h>

int main()
{
    int num1,num2,num3;
    int maior,meio,menor;
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>=num2 && num1>=num3){
        maior=num1;
        if(num2>num3){
            menor=num3;
            meio=num2;
        }
        else{
            meio=num3;
            menor=num2;
        }
    }
    else if(num2>=num3){
        maior=num2;

        if(num1>num3){
            menor=num3;
            meio=num1;
        }
        
        else{
            meio=num3;
            menor=num1;

        }
    }
    else{
        maior=num3;

        if(num2>num1){
            menor=num1;
            meio=num2;
        }
        else{
            meio=num1;
            menor=num2;
        }
    }

    printf("%d\n%d\n%d\n",menor,meio,maior);

    printf("\n%d\n%d\n%d\n",num1,num2,num3);
    
    return 0;
}