#include<stdio.h>
int main()
{
    int n,d,n1,sum=0,pro=1;
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        d=n1%10;
        sum=sum+d;
        pro=pro*d;
        n1/=10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}