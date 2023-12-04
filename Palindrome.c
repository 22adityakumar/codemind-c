#include<stdio.h>
int main()
{
    int n,n1,rev=0,a;
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        a=n1%10;
        rev=rev*10+a;
        n1/=10;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}