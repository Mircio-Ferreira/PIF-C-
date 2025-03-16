#include<stdio.h>

int recursividade(int n){
    if(n%10==0){
        return 0;
    }
    else{
        return(recursividade(n%10));
    }

}

int main(){
    int n=111;

    return 0;
}