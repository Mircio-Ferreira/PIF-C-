#include<stdio.h>
#include<string.h>

int main(){
    char src[]="ola";
    char src2[10];

    // Copia a ultrima string na primeira.
    strcpy(src2,src);

    printf("src: %s\nsrc2: %s\n\n\n",src,src2);

    char str3[20]="ola";
    char str4[]=" mundo";
    // Pega a ultima string e concatena na primeira
    strcat(str3,str4);

    printf("str 3: %s\n\n\n",str3);

    //comparando 2 string
    if(strcmp("abc","abc")==0){
        printf("As string sao iguais.\n");
    }




    return 0;
}