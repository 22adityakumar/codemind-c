#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        printf(" ");
        for(int j=1; j<=i; j++)
        printf("%c ",ch);
        
        printf("
");
        ch++;
    }
    return 0;
}