#include<stdio.h>   

int fibonaci(int i){
    if (i == 0) return 0;
    if (i == 1) return 1;
    return(fibonaci(i-1)+fibonaci(i-2));
}//             3    2             1          

int main(){
    int n=10;

    for(int i=0;i<n;i++){
        printf("F(%d)=%d\n",i,fibonaci(i));
        
    }

    return 0;
}