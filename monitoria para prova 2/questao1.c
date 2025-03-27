#include<stdio.h>

int main(){
    char palavra[1000];
    //scanf("%s", palavra);
    gets(palavra);   
    int cont=0,vogais=0;

    //printf("\n%s",palavra);


    while(palavra[cont]){
        //printf("%d\n", palavra[cont]);

        if(palavra[cont]=='a' || palavra[cont]=='e' || palavra[cont]=='i' || palavra[cont]=='o' || palavra[cont]=='u') vogais++;
        
        cont++;
    }

    printf("\n%d\n",vogais);
    return 0;
}