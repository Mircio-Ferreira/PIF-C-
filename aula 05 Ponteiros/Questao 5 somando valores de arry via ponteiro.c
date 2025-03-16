int main(){
    
    int vetor[5]={0,1,2,3,4};

    int *ptr=vetor;

    int soma=0;

    for(int i=0;i<5;i++){
        soma+=*(ptr+i);
    }

    printf("Somatorio: %d",soma);


    return 0;
}