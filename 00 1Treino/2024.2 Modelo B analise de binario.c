#include <stdio.h>
int decimal(char *string_binario){
    int num_binario[8];

    for(int i=0;i<8;i++){
        num_binario[i]=string_binario[i]-'0';
        }
    for(int i;i<8;i++){
        
    }
       
}
int main(){

    char binario[9]="00000001";

    printf("\nvalor em binario: %d\n",decimal(binario));
    return 0;
}