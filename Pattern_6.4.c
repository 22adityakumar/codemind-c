#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        char ch='A'+i-1;
        for(int j=i-1; j>=1; j--)
        printf(" ");
        for(int j=i; j<=n; j++)
        printf("%c ",ch);
        
        printf("
");
    }
    return 0;
}