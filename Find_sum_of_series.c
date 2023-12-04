#include<stdio.h>
int main()
{
    int n;
    float ap=0.0,sum=0.0,a=1.0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        ap=1/a;
        sum+=ap;
        a++;
    }
    printf("%.2f",sum);
}