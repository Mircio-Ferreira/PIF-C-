#include <stdio.h>

void print_inverso(int *array,int len){

    if (len<=0){
        printf("array[%d]=%d\n",len,array[len]);
        return;
    }
    printf("array[%d]=%d\n",len,array[len]);

    print_inverso(array,(len-1));
}

void print_ordem(int *array,int posi,int len){
    if(posi==len){
        printf("array[%d]=%d\n",posi,array[posi]);
        return;
    }
    printf("array[%d]=%d\n",posi,array[posi]);
    print_ordem(array,posi+1,len);

}

int somatorio(int *array,int posi,int soma){
    
    if(posi==0){
        soma+=array[posi];
        return soma;
    }
    soma+=array[posi];

    return somatorio(array,(posi-1),soma);
}

int somatoriov2(int *array, int posi){
    if(posi==-1){
        return 0;
    }
    return array[posi]+somatoriov2(array, posi-1);
}
   

int main(){
    
    int array[10]={10,1,2,3,4,5,6,7,8,9};
    int len=10-1; 
    int soma_vector=0;

    printf("Em ordem inverso: \n");
    print_inverso(array,len);


    printf("Em ordem: \n");

    print_ordem(array,0,len);

    soma_vector=somatorio(array,len,0);

    printf("A soma do vetor foi de : %d",soma_vector);

    printf("\nA soma do vetorv2 foi de : %d",somatoriov2(array,len));


    return 0;
}