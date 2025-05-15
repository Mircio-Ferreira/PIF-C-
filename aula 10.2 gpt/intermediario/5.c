#include <stdio.h>
#include <string.h>

void inserirTXT(FILE *write,int num);

int somaTXT(FILE *read);

int main(){
    int soma=0;
    FILE *write,*read;
    write=fopen("escrever.txt","w");
    

    if(write==NULL) printf("Erro ao abrir arquivo!");
    
    else{

        for(int i=0;i<5;i++){
            int num;
            printf("Inseira numero [%d]: ",i+1);
            scanf("%d",&num);
            inserirTXT(write,num);
        }
        fclose(write);

        read=fopen("escrever.txt","r");
        if(read==NULL){
            printf("erro ao abrir arquivo para colocar soma!\n");
            return 0;
        }

        soma=somaTXT(read);
        
        printf("a soma dos valores lido no txt foi de: %d\n",soma);

        fclose(read);

        write=fopen("soma.txt","w");

        fprintf(write,"soma do arquivo txt: %d",soma);

        fclose(write);

        
    }

    return 0;
}

void inserirTXT(FILE *write,int num){
    fprintf(write,"%d\n",num);
}

int somaTXT(FILE *read){
    int soma=0,num=0;

    while(fscanf(read,"%d",&num)==1){
        soma+=num;
    }
    return soma;
}