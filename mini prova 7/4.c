#include <stdio.h>

int mdc(int a,int b);

int main(){

    int a,b;
    FILE *write,*read;

    read=fopen("mdc_read.txt","r");
    write=fopen("saida_mdc.txt","w");


    if(write==NULL || read==NULL ){
        printf("ERRO\n");
        return 0;
    }

    while(fscanf(read,"%d %d",&a,&b)!=EOF){
        fprintf(write,"mdc(%d,%d) =%d\n",a,b,mdc(a,b));
    }
    printf("Fim\n");
    fclose(write);
    fclose(read);

    return 0;
}

int mdc(int a,int b){

    if(b==0) return a;

    return mdc(b,a%b);
}