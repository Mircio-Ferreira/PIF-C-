#include <stdio.h>
#include <string.h>

float converte(float reais,char *palavra){
    if(reais>0 && (strcmp(palavra,"dólar")==0 || strcmp(palavra,"euro")==0 || strcmp(palavra,"libra esterlina")==0)){
        if(strcmp(palavra,"dólar")==0) return (reais*4.98);
        else if(strcmp(palavra,"euro")==0) return (reais*5.41);
        else return (reais*6.32);
    }
    else {
        printf("Valor negativo ou palavra digitar incorreta\n");
        return -1;
    }
}   

int main(){

    float conversao=converte(1,"libra esterlina");

    converte(-1,"dólar");
    


    printf("%.2f",conversao);



    return 0;
}