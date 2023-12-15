#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch =64+n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("
");ch--;
    }
}