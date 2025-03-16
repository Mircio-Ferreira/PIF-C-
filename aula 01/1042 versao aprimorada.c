#include<stdio.h>

int main()
{
    int a,b,c;
    int temp;

    scanf("%d %d %d",&a,&b,&c);

    if(c<b){
      temp=c;
      c=b;
      b=temp;
    }
    if(b<a){
        temp=b;
        b=a;
        a=temp;
    }
    if(c<b){
        temp=c;
        c=b;
        b=temp;
    }

    printf("%d %d %d",a,b,c);
    
    return 0;
}