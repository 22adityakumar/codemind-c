#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,c=0;
    scanf("%d",&a);
    int arr[a];
    for (int i=0; i<=a; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                b=b+arr[i];
            }
            else
            {
                c=c+arr[i];
            }
        }
    
    printf("%d",abs(b-c));
    
}