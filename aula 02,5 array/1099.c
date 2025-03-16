#include<stdio.h>
#include <stdlib.h>

int main(){
    int qant,x,y;
    int dif;
    int soma;
    scanf("%d",&qant);

    for(int i=0;i<qant;i++){
        scanf("%d %d",&x,&y);
        dif=abs(x-y);

        if(x==y || dif==1){
            printf("0\n");
        }
        else{
            
            int menor;
            if(x>y){
                menor=y;
            }
            else{
                menor=x;
            }
            soma=0;
            int interacao=dif-1;

            for(int i=1;i<=interacao;i++){
                if((menor+i)%2!=0){
                    soma+=(menor+i);
                }
            }
            
            printf("%d\n",soma);

            }
    }
    return 0;
}