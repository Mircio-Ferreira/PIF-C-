#include<stdio.h>

int main(){
    int cont_par=0, cont_impar=0, par[5], impar[5];
    int x;
    
    for(int i=0;i<15;i++){
        scanf("%d",&x);
        if(x%2==0){
            par[cont_par]=x;
            cont_par+=1;
            
            if(cont_par==5){
                for(int i=0;i<=4;i++){
                    printf("par[%d] = %d\n",i,par[i]);
                }
                cont_par=0;
            }
        }
        else{
            impar[cont_impar]=x;
            cont_impar+=1;

            if(cont_impar==5){
                for(int i=0;i<=4;i++){
                    printf("impar[%d] = %d\n",i,impar[i]);
                }
                cont_impar=0;
            }
        }
    }

    if(cont_impar!=0 && cont_impar!=5){
        
        for(int i=0;i<cont_impar;i++){
            printf("impar[%d] = %d\n",i,impar[i]);
        }
    }

    if(cont_par!=0 && cont_par!=5){
        
        for(int i=0;i<cont_par;i++){
            printf("par[%d] = %d\n",i,par[i]);
        }
        
    }
    return 0;
}