#include<stdio.h>

int validador(double i);

int main(){
    int n, apro=0, final=0, repro=0;
    printf("Favor digite quantidade de alunos: ");
    scanf("%d",&n);
    double vetor[n];
    
    for(int i=0;i<n;i++){
        printf("Digite nota do aluno %d : ",i+1);
        scanf("%lf",&vetor[i]);

        if(validador(vetor[i])==0) apro++;
        else if(validador(vetor[i])==1) final++;
        else if(validador(vetor[i])==2)repro++;
    }

    printf("acima de 9: %.2lf%%\n",(((double)apro/n)*100));
    printf("final: %.2lf%%\n",(((double)final/n)*100));
    printf("reprovados: %.2lf%%\n",(((double)repro/n)*100));

    return 0;
}

int validador(double i){
    if(i>9) return 0;
    else if(i<7 && i>3)return 1;
    else if(3>i) return 2;
    else return 4;
}