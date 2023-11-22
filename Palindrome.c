#include<stdio.h>
int main()
{
    int n,r,d,sum=0;
    scanf("%d",&n);
    d=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        
    }
    if(d==sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}