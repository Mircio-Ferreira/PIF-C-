//Leia um arquivo de entrada e imprima seus caracteres na tela na ordem reversa usando recursão
//, sem considerar os espaços em branco (espaços em branco nao devem ser imprimidos). 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_print_line(char *string,int idx){
    if(idx==-1) return;

    if(string[idx]!=' '){
        printf("%c",string[idx]);
    }

    reverse_print_line(string,idx-1);
    
}

void reversev2(char *string){
    
    if(*string=='\0') return;
    
    reversev2(string+1);

    if(*string!=' '){
        printf("%c",*string);
    }
    
}

int main(){
    FILE *read;
    read=fopen("2entrada.txt","r");
    if(read==NULL) {
        printf("erro ao ler arquivo\n");
        return 0;
    }

    char line[1000];

    while(fgets(line,sizeof(line),read)!=NULL){
        int len=strlen(line);
        //reverse_print_line(line,len-1);
        //printf("\n");
        reversev2(line);
    }
    fclose(read);

    return 0;
}