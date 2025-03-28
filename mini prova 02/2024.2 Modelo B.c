#include<stdio.h>

int decimal(char *binario){
    int soma=0,produtorio=1;
    int pot;

    for(int i=0;i<8;i++){
        if(binario[i]=='1'){
            produtorio=1;
            pot=8-1-i;

            for(int j=0;j<pot;j++){
                produtorio*=2;
            }
            soma+=produtorio;
            //if(i==7) soma+=1;
        }

        
        
    }
    return soma;
}

int main(){

    char binario[9]="00000100";
    printf("O binario: [%s] em decimal:[%d]",binario,decimal(binario));
    return 0;
}