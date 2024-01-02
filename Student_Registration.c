#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        if(y>=(x+z)) printf("YES
");
        else printf("NO
");
    }
}