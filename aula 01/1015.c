#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,dis;

    scanf("%f %f",&x1,&y1);
    scanf("%f %f",&x2,&y2);

    
    dis=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.4f\n",dis);
    return 0;
}