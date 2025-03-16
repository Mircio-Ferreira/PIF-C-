#include<stdio.h>


//A ideia é verificar se os 3 numeros formal um triangulo pitagorico
int verifica_pitagorico(int a,int b,int c);

//Verificador de pitagorico primitivo ou simples
int verifica_primitivo(int a,int b,int c);

int main(){
    int a,b,c;


    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
    // A ideia é fazer com que c seja meu maior valor dentre os 3 lidos.
    int temp;
    if(a>c){
        temp=c;
        c=a;
        a=temp;
    }
    if(b>c){
        temp=c;
        c=b;
        b=temp;
     }
     if(verifica_pitagorico(a,b,c)==1){
        printf("tripla\n");
     }
     // se ele n é uma trimpla nescessariamene sera um pitagorico
     else{

     if(verifica_primitivo(a,b,c)==0){
        printf("tripla pitagorica\n");
     }
     else{
        printf("tripla pitagorica primitiva\n");
     }
    }
    }


    return 0;
}


int verifica_pitagorico(int a,int b,int c){
    if((a*a)+(b*b)!=c*c){
        return 1;
    }
    return 0;
}

int verifica_primitivo(int a,int b,int c){
    for(int i=2;i<c;i++){
        //condição para ser pitagorico simples
        if(a%i==0 && b%i==0 && c%i==0){
            return 0;
        }

    }
    //se ele nao for pitagorico ele sera o tipo primitivo
        return 1;

}

