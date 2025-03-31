#include <stdio.h>
#include <math.h>
/*
int decimal(char *string_binario){
    int somatorio=0,produtotorio=1;
    //1000 0000
       for(int i=0;i<8;i++){
        if(string_binario[i]-'0'==1){
            produtotorio=pow(2,7-i);
            somatorio+=produtotorio;
        }
        
        }
        return somatorio;
}*/


/*
int decimal(char *string_binario){
    int somatorio=0;
    for(int i=0;string_binario[i];i++){
        somatorio*=2;
        if(string_binario[i]-'0'==1){
            somatorio++;
        }
    }
    return somatorio;
}
    */
/*
int decimal(char *string_binario){
    int somatorio=0;
    for(int i=0;string_binario[i];i++){
        somatorio<<=1;
        if(string_binario[i]-'0'==1){
            somatorio++;
        }
    }
    return somatorio;
}*/

int decimal(char *string_binario){
    
}
int main(){

    char binario[9]="10000010";

    printf("\nvalor em binario: %d\n",decimal(binario));
    return 0;
}