// 3. Concatenação de Strings
// Faça um programa que leia duas strings do usuário (tamanho arbitrário), aloque dinamicamente o
// espaço necessário para concatená-las em uma terceira string e imprima o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int len1,len2,len3;
    char *string1,*string2,*string3;
    scanf("%d",&len1);

    string1=(char *)malloc((len1+1)*sizeof(char));

    scanf(" %[^\n]",string1);

    scanf("%d",&len2);

    string2=(char *)malloc((len2+1)*sizeof(char));

    scanf(" %[^\n]",string2); 

    len3=len1+len2+1;

    string3=(char *)malloc(len3*sizeof(char));

    int tamanho_artificial=strlen(string1)+strlen(string2);

    for(int i=0;i<tamanho_artificial;i++){
        if(i<strlen(string1)) string3[i]=string1[i];
        else string3[i]=string2[i-(strlen(string1))];
    }

    string3[tamanho_artificial]='\0';
    free(string1);
    free(string2);

    printf("concatenacao: %s",string3);

    printf("\nTamanho da string 3: %ld",strlen(string3));

    return 0;
}