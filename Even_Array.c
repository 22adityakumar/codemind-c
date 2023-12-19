#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {                                               
        if(arr[i]%2!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    printf("True");
    else printf("False");
}