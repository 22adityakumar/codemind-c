#include<stdio.h>
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    if(n>=3 && n<=100)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf("*");
            printf("
");
        }
        for(a=n-1;a>=1;a--)
        {
            for(b=1;b<=a;b++)
                printf("*");
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}