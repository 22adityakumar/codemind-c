#include<stdio.h>
#include<math.h>
int main()
{
    double p,b,h;
    scanf("%lf%lf",&p,&b);
    h=sqrt((p*p)+(b*b));
    printf("%.2lf",h);
}