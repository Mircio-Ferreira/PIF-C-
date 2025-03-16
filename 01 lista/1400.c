#include<stdio.h>

int validar_7(int cont);

int main(){
    int num_pessoas,pessoa_alvo,palma_alvo;
    
    while(1){

        scanf("%d %d %d",&num_pessoas,&pessoa_alvo,&palma_alvo);

        if(num_pessoas==0 && pessoa_alvo==0 && palma_alvo==0) break;
        
        int pessoa_atual=1;
        // a ideia do sentido é saber se eu estou avançado com a pessoal atual ou retornando
        // +1 para esta avançado que sempre sera o primeiro caso e -1 para caso esteja retornando
        int sentido=+1;
        //responsavel por saber qual o  numero em que eu estou
        int cont=1;
        // responsavle por saber a quantidade de vezes de palmas batidas da pessoa alvo
        int palmas_batidas=0;

        while(1){

            //responsavel para validar se a pessoa alvo bateu palma
            if(pessoa_atual==pessoa_alvo){
                // validar 7 me retorna 1 se a pessoa alvo bateu
                if(validar_7(cont)) palmas_batidas++;

                if(palmas_batidas==palma_alvo) {
                    printf("%d\n",cont);
                    break;
                }
                  }           
            //responsavel por fazer o lop de da pessoa atual que esta inreragindo.
            if(sentido==1){
                pessoa_atual++;
                if(pessoa_atual==num_pessoas){
                    sentido=-1;
                }
            }
            else{
                pessoa_atual--;
                if(pessoa_atual==1){
                    sentido=+1;
                }
            }

            cont++;
            
            if(cont>100000){
                printf("-1\n");
                break;
            } 
        }      
    }
       return 0;
}


int validar_7(int cont){
    // trata quando for multpli de 7
    if(cont%7==0) return 1;

    // trata quando o numero 7 em sua composição
    while(cont!=0){
        if(cont%10==7) return 1;
        // responsavel por tirar o ultimo digito, ex 119/10 me retorna 11, pois estamos tratando de numeros inteiros.
        cont=cont/10;
      }
    return 0;
}