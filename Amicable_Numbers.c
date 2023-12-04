#include<stdio.h>
int main()
{
    int n,n1,sum=0,sum1=0;
    scanf("%d%d",&n,&n1);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    for(int j=1;j<n1;j++)
    {
        if(n1%j==0)
        {
            sum1+=j;
        }
    }
    if(sum==n1&&sum1==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}