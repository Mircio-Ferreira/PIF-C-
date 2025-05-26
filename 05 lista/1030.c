#include <stdio.h>

int flabious_josephus(int *array,int size,int ini,int passos );

int main(){

    int array[10000];
    int loops;

    scanf("%d",&loops);

    for(int i=0;i<loops;i++){
        
        int size,passos;

        scanf("%d %d",&size,&passos);

        for(int j=0;j<10000;j++){
            array[j]=j+1;
        }

        printf("Case %d: %d\n",i+1,flabious_josephus(array,size,0,passos));
        
    }

    return 0;
}

int flabious_josephus(int *array,int size,int ini,int passos ){

    if(size==1) return array[0];

    int idx_eliminado = (ini+passos-1) %size;

    for(int i=idx_eliminado;i<size-1;i++){
        array[i]=array[i+1];
    }

    int new_inicio = idx_eliminado%(size-1);

    return flabious_josephus(array, size-1 , new_inicio ,passos);
}