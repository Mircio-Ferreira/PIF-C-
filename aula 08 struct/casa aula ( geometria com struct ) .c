#include<stdio.h>
#include<math.h>

typedef struct{
    int x;
    int y;
} ponto;

typedef struct{
    ponto p1;
    ponto p2;
} retangulo;

typedef struct{
    ponto origem;
    ponto borda;
} circulo;

float area_retangulo(retangulo rect){
    float altura,comprimento;

    //altura=abs(rect.p1.x)-abs(rect.p2.x);
    altura=fabs(rect.p1.x - rect.p2.x);
    //comprimento=abs(rect.p1.y)-abs(rect.p2.y);
    comprimento=fabs(rect.p1.y -rect.p2.y);

    return altura*comprimento;
}

float area_circulo(circulo circulo1){
    float raio;
    raio=sqrt(pow(circulo1.borda.x -circulo1.origem.x ,2) + pow( circulo1.borda.y - circulo1.origem.y ,2));
    return 3.141592653589793 *pow(raio,2);
}

int main(){

    ponto pt1,pt2;

    pt1.x=1;
    pt1.y=3;

    pt2.x=4;
    pt2.y=7;

    retangulo rect;
    rect.p1=pt1;
    rect.p2=pt2;

    float area_do_rect=area_retangulo(rect);

    circulo circulo1;
    
    circulo1.origem=pt1;
    circulo1.borda=pt2;

    float area_do_cir=area_circulo(circulo1);

    printf("A area do retangulo: %.2f",area_do_rect);

    printf("\nA area da circuferencia: %.2f",area_do_cir);

    return 0;
}