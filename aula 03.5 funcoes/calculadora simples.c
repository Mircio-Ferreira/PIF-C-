#include<stdio.h>
int soma(int a,int b){
    int resultado;
    resultado=a+b;
    return resultado;
}
float divisao(int a, int b){
    float resultado=0;
    resultado=((float)a/(float)b);
    return resultado;
}
int mp(int a,int b){
    int resultado;
    resultado=(a*b);
    return resultado;
}
int sup(int a,int b){
    int resultado;
    resultado=a-b;
    return resultado;
}
int main(){

    char op;
    int a,b;
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+'){
        printf("o resultado de suma soma: %d",soma(a,b));
    }
    else if(op=='-'){
        printf("o resultado de sua subtracao foi: %d",sup(a,b));
    }
    else if(op=='*'){
        printf("o resultado de sua mp foi: %d",mp(a,b));
    }
    else if(op=='d'){
        if(b==0){
            printf("Nao apode dividir por zero!");
        }
        else{
        printf("sua divisao foi: %f",divisao(a,b));
        }
    }
    return 0;
}