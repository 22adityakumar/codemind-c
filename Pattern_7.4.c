#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        char ch = 'A'+n-i;
        for(int j=1; j<=i-1; j++)
        printf(" ");
        for(int j=n; j>=i; j--)
        printf("%c ",ch);
        
        printf("
");
    }
    return 0;
}