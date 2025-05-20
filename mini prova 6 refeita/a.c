//Escreva uma função capaz de multiplicar os elementos de um array de maneira recursiva. Sua função deve 
//percorrer o array do último elemento até o primeiro, multiplicando seus elementos e deve ter a seguinte assinatura:

//long mult_array (int *arr, int N) ;

//Depois, crie um programa que lê o arquivo ENTRADA.txt contendo as informações dos arrays (exemplo abaixo):

//5
//12345
//3
//23 76 87
//10
//987623756712 567890 5632
//
//Onde a primeira linha contém o número de elementos do array e a próxima linha contém os elementos do array em si, 
//separados por espaço. Seu programa deve imprimir na tela o resultado de cada multiplicação dos arrays de entrada.

#include <stdio.h>
#include <stdlib.h>

long mult_array(int *array,int posi){

    if(posi==0) return array[posi];

    return array[posi] * mult_array(array,posi-1);
}

int main(){

    int *array;
    int len;

    FILE *read;

    read=fopen("numeros.txt","r");

    if(read==NULL){
        printf("erro ao abrir arquivo!\n");
        return 1;
    }

    while( fscanf(read,"%d",&len)!= EOF ){
        array=malloc(len*sizeof(int));
        for(int i=0;i<len;i++){
            fscanf(read,"%d",&array[i]);
        }

        printf("Multiplicacao do array de entrada: %ld\n",mult_array(array,len-1));
        free(array);
    }
    fclose(read);

    printf("End of programing\n");

    return 0;

}