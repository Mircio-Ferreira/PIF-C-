#include<stdio.h>

int analise(int r,int n){
    //int pol_de_num=27;
    // Numeor de possibilidade por numeros disponiveis
    if(27*n<r){
        return -1;
    }
    int sobrando=r-n;
    
    float possibilidadesf=(float)sobrando/(float)n;

    int possibilidadesi=sobrando/n;

    if(possibilidadesf>possibilidadesi){
        return possibilidadesi+1;
    }
    else{
        return possibilidadesi;
    }

}

int main(){
    int r,n;
    for(int i=0;i<10002;i++){
        scanf("%d %d",&r,&n);

        if(r==0 && n==0){
            break;
        }

        if(analise(r,n)==-1){
            printf("Case %d: impossible\n",i+1);
        }
        else{
            printf("Case %d: %d\n",i+1,analise(r,n));
            
        }
        
    }

    return 0;
}