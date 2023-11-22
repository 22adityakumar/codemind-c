#include<stdio.h>
int main()
{
    int a,r=1,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        r=r*i;
    }
    printf("%d",r);
}