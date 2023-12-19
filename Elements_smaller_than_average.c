#include<stdio.h>
int main()
{
    int a,c=0,sum=0;
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
        if(arr[i]<=avg){
        c++;
        }
    }
    printf("%d",c);
}
