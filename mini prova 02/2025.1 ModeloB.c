#include <stdio.h>

int main(){ 

    char parte1[100]="ircioM";
    char parte2[100]="Mircio";
    int freq1[256]={0};
    int freq2[256]={0};
    int cont=0;
    int cont_para_iguais=0;


    for(int i=0;parte1[i]!='\0';i++){
        freq1[parte1[i]]++;
    }
    for(int i=0;parte2[i]!='\0';i++){
        freq2[parte2[i]]++;
    }

    

    for(int i=0;i<257;i++){
        if(freq1[i]!=0 && freq2[i]!=0) cont++;
        if(freq1[i]==freq2[i]) cont_para_iguais++;
    }

    if(cont_para_iguais==256){
        printf("Ala iguais!\n");
    }


    printf("%d",cont);


    return 0;
}