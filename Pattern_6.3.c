#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        for(int j=i-1; j>=1; j--)
        printf(" ");
        for(int j=i; j<=n; j++)
        printf("%d ",j);
        
        printf("
");
    }
    return 0;
}