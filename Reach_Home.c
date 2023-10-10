#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((x*5)%y==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}