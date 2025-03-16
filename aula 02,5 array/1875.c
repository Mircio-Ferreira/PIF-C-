#include<stdio.h>

int main(){
    int casos,gol,rgol,bgol,ggol;
    int cont=0;

    scanf("%d",&casos);

    while(1){
        rgol=0;
        bgol=0;
        ggol=0;
        if(casos==cont){
            break;
        }
        int cont_gol=0;

        scanf("%d",&gol);
        while(1){
            if(cont_gol==gol){
                break;
            }
            char goleador,goleado;
            
            scanf(" %c %c",&goleador,&goleado);
            
            if(goleador=='R'){

                if(goleado=='G'){
                    rgol+=2;
                    
                }
                else{ 
                    rgol++;
                }

            }
            else if(goleador=='B'){

                if(goleado=='R'){
                    bgol+=2;
                }
                else{
                    bgol++;
                }

            }
            else if(goleador=='G'){

                if(goleado=='B'){
                    ggol+=2;
                }
                else{
                    ggol++;
                }

            }

            cont_gol++;

            
        }
        
        if(ggol==bgol && rgol==bgol){
            printf("trempate\n");
        }
        
        else if(rgol>bgol && rgol>ggol){
            printf("red\n");
        }
        else if(bgol>rgol && bgol>ggol){
            printf("blue\n");

        }
        else if(ggol>bgol && ggol>rgol){
            printf("green\n");

        }
        else{
            printf("empate\n");

        }
        

        cont++;
        
        
    }

    return 0;
}