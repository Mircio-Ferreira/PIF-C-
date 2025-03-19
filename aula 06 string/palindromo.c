#include <stdio.h>

int main(){

    char palavra[]={"arara"};
    int decremento=4;

    for(int i=0;palavra[i]!='\0';i++){
        if(palavra[i]==palavra[decremento]){
            decremento--;
            if(decremento==-1){
                printf("1palindromo\n");
            }

        }
        else printf("2nao e palindromo\n");
    }


    return 0;
}