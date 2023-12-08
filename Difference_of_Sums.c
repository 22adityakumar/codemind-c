#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,sum1=0,sq;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
        sum1=sum1+i;
    }
    sq=pow(sum1,2);
    printf("%d",sq-sum);
}