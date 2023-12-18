#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum=0.0;
    for(int i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    printf("%.2f",sum/a);
}