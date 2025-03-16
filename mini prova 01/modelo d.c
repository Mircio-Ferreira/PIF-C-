#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n],shift,new_vetor[n];
    char desloca;

    scanf("%d",&shift);
    
    int cont_r=shift;

    scanf(" %c",&desloca);

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        
        if(desloca=='R'){
            new_vetor[cont_r]=vetor[i];
            if(cont_r>n-1){
                cont_r=0;
            }
            cont_r++;
        }
        else if(desloca=='L'){

        }
    }

    for(int i=0;i<n;i++){
        printf("%d",new_vetor[i]); 
    }
    
    return 0;
}