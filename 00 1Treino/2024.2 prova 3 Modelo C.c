#include<stdio.h>
#include<string.h>

void contabilizar(char *palavra, char *saida){
    int cont=0;
    int idx_saida=0;

    if(strlen(palavra) == 0) {
        saida[0]='0';
        saida[1]='\0';
        printf("%s",saida);
    }
    // else if(strlen(palavra)==1){
    //     saida[0]=palavra[0];
    //     saida[1]='1';
    //     saida[2]='\0';

    //     printf("%s",saida);
    // }
   

    for(int i=0;palavra[i]!='\0';i++){
        cont++;
        if(palavra[i]!=palavra[i+1]){
            saida[idx_saida++]=palavra[i];
            saida[idx_saida++]=cont+'0';
            cont=0;
            
        }
        //else{
            
        //    saida[idx_saida++]=palavra[i];
        //     saida[idx_saida++]=cont+'0';
        //     cont=0;
       // }
    }
    saida[idx_saida]='\0';

    printf("%s",saida);
    

}

int main(){

    char parte1[100]="b";
    //B1a4t1a1t1a1
    char parte2[100];

    contabilizar(parte1,parte2);

    

    
    return 0;
}