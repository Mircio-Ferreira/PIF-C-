#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=0,index=0;
    for(int i=1;i<=n;i++){
        b=a;
        scanf("%d",&a);
        if(b>a && index==0){
            index=i;
            }
        }
        printf("%d\n",index);
    return 0;
}