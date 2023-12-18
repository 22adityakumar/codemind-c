#include<stdio.h>
int main()
{
    int a,sum=0,flag;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/a;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==avg)
        flag=1;
    }
    if(flag)
    printf("True");
    else printf("False");
}