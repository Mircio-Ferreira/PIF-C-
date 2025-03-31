#include<stdio.h>

int decimal(char *binario){
    int soma=0;
    int produtorio=1;
    
    for(int i=0;i<8;i++){
        if(binario[i]=='1'){
            for(int j=7-i;j>=1;j--){
                produtorio*=2;

            }
            soma+=produtorio;
            produtorio=1;
        }
    }
    //if(binario[7]=='1') soma++;

    return soma;
}

int main(){

    char binario[9]="10000001";
    
    printf("%d",decimal(binario));

    return 0;
}