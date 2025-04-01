#include <stdio.h>

int main(){

    
    char palavra[100] = "batata";
    char palavra2[100];

    int num = 1234;

    sprintf(palavra2, "%s%d", palavra, num); 

    printf("%s - tamanho=%d",palavra2,strlen(palavra2));

    

    return 0;
}