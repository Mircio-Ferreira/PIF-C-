#include <stdio.h>
#include <string.h>

void inverter_string(char *str, int inicio, int fim);

int main(){
    FILE *read,*write;
    read=fopen("frases.txt","r");
    write=fopen("invertido.txt","w");
    char line[1000];

    if(read==NULL || write== NULL){
        printf("Erro ao ler arquivo\n");
        return 1;
    }

    while(fscanf(read," %[^\n]",line)!=EOF){
        int len=strlen(line);

        inverter_string(line,0,len-1);

        fprintf(write,"%s\n",line);
    }
    fclose(write);
    fclose(read);

    return 0;
}

void inverter_string(char *str, int inicio, int fim){

    if(inicio==fim || inicio-1==fim) {
        //printf("%s\n",str);
        return;
    }

    char temp;

    temp=str[inicio];
    str[inicio]=str[fim];
    str[fim]=temp;

    inverter_string(str,inicio+1,fim-1);

}