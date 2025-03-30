#include<stdio.h>

int new_strcmp(char *parte1, char *parte2){
    
    int tam1=0,tam2=0,dif=0,maior;

    while(parte1[tam1]!='\0') tam1++;
    while(parte2[tam2]!='\0') tam2++;

    if(tam1>=tam2) maior=tam1;
    else maior=tam2;

    for(int i=0;i<maior;i++){
        if(parte1[i]!=parte2[i]) dif++;
    }

    return dif;

}

int main(){

    printf("a diferenca foi de: %d",new_strcmp("batata","banana"));

    return 0;
}