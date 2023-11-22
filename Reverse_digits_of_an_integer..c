#include<stdio.h>
int main()
{
    int n,r,revers=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        revers=revers*10+r;
        n/=10;
    }
    printf("%d",revers);
}