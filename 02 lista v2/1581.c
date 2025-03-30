#include <stdio.h>
#include <string.h>

int main(){
    
    int n;
    
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int k;
        
        scanf("%d",&k);

            char primeiro_idioma[21];

            scanf("%s",primeiro_idioma);
            
            int igual=1;

        for(int j=0;j<k-1;j++){
            char proximos_idiomas[21];
            
            scanf("%s",proximos_idiomas);

            if(strcmp(primeiro_idioma,proximos_idiomas)!=0) igual=0;
        }

            if(igual==1) printf("%s\n",primeiro_idioma);

            else printf("ingles\n");
       
        
    }


    return 0;
}