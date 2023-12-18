#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<a;i+=2)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
}