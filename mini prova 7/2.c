#include <stdio.h>

void imprimir_reverse(FILE *in, FILE *out);

int main(){


    return 0;
}

void imprimir_reverse(FILE *in, FILE *out){

    char line[100];

    if( fgets(line,sizeof(line),in)==NULL) return;
    
    imprimir_reverse(in,out);
    
    fputs(line,out);
    

}