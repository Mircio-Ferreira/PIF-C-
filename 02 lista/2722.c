#include <stdio.h>
#include <string.h>

int main(){

    int n;

    scanf("%d",&n);
    getchar();

    for(int i=0;i<n;i++){
        char parte1[101];
        char parte2[101];
        

        fgets(parte1, 101, stdin);
        parte1[strcspn(parte1, "\n")] = '\0';  // Remove o '\n' da string
        
        

        fgets(parte2, 101, stdin);
        parte2[strcspn(parte2, "\n")] = '\0';  // Remove o '\n' da string

        printf("%s\n%s",parte1,parte2);
       
        

        
    }

    return 0;
}