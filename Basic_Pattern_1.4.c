#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    //char ch='A'
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=n;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("
");
    }
}