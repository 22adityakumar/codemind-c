#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=199)
    printf("%.2f",(a*1.2)+100);
    else if(a>=200 && a<400)
    printf("%.2f",(a*1.5)+100);
    else if(a>=400 && a<600)
    printf("%.2f",(a*1.8)+((a*1.8*15)/100));
    else
    printf("%.2f",(a*2)+((a*2)*15)/100);
}