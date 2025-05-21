#include <stdio.h>

void print_reverse(FILE *in, FILE *out){

    char line[100];

    if(fgets(line,sizeof(line),in)==NULL) return;

    print_reverse(in,out);

    fputs(line,out);

}

int main(){ 
    FILE *read,*write;
    write=fopen("saida.txt","w");
    read=fopen("entrada.txt","r");

    if(write==NULL || read==NULL){
        printf("Erro");
        return 0;
    }

    print_reverse(read,write);

    fclose(write);
    fclose(read);
    return 0;
}