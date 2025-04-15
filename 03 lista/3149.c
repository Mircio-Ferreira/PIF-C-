#include <stdio.h>

typedef struct  {
    int hora;
    int min;
    char nome[101];
} Humano;

void bouble_sort(Humano *pessoas,int quant);

int main(){

    int proximidade,quant;

    scanf("%d %d",&proximidade,&quant);

    Humano pessoas[quant];

    char descarta_1;

    for(int i=0;i<quant;i++){
        scanf(" %d %c %d %[^\n]",&pessoas[i].hora, &descarta_1, &pessoas[i].min,pessoas[i].nome);
    }

    bouble_sort(pessoas,quant);

    for(int i=0;i<quant;i++){
        if(pessoas[i].hora==0 && pessoas[i].min<=proximidade) printf("%s\n",pessoas[i].nome);
        else if(pessoas[i].hora==23 && pessoas[i].min>= (60-proximidade) ) printf("%s\n",pessoas[i].nome);
    }

    
    return 0;
}


void bouble_sort(Humano *pessoas,int quant){
    
    Humano temp;

    for(int i=0;i<quant-1;i++){
        for(int j=0;j<quant-1;j++){
            if( (pessoas[j].hora<pessoas[j+1].hora) || ( (pessoas[j].hora==pessoas[j+1].hora) && (pessoas[j].min>pessoas[j+1].min) ) ){

                temp=pessoas[j];
                pessoas[j]=pessoas[j+1];
                pessoas[j+1]=temp;
                
            }
        }
    }
}