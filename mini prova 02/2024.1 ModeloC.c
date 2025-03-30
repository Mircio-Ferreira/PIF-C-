#include <stdio.h>
#include <string.h>

int primo(int num, char *palavra){
    char palavranum[1000];
    int copia_num=num;
    int qant_num=0;

    while(copia_num!=0){
        palavranum[qant_num]=copia_num%10+'0';
        copia_num=copia_num/10;
        
        qant_num++;
    }
    palavranum[qant_num]='\0';

    

    //swap
    for(int i=0;i<qant_num/2;i++){
        char temp=palavranum[i];
        palavranum[i]=palavranum[qant_num-1-i];
        palavranum[qant_num-1-i]=temp;
    }

    //strcat(palavra,palavranum);

    int cont_palavra=0;
    while(palavra[cont_palavra]!='\0'){
        cont_palavra++;
    }
    for(int i=0;i<qant_num;i++){
        palavra[cont_palavra]=palavranum[i];
        cont_palavra++;
        
    }
    palavra[cont_palavra]='\0';
    
   
    printf("%s\n",palavra);

    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }



    return 1;
}


int main(){

    char palavra[100000]="bananinha";

    int resultado=primo(1230,palavra);

    if(resultado){
        printf("\n Ala primo!");

    }
    else printf("\n Grrr nao primo");

    return 0;
}