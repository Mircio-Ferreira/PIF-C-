#include <stdio.h>

int mdc(int a,int b);

int main(){

    int loops;
    scanf("%d",&loops);

    for(int i=0;i<loops;i++){
        int a,b;

        scanf("%d %d",&a,&b);
        printf("%d\n",mdc(a,b));

    }
    return 0;
}

int mdc(int a,int b){
    if( b== 0) return a;
    
    return mdc(b,a%b);
}
