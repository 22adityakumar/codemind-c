#include<stdio.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int search_element,flag;
    scanf("%d",&search_element);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==search_element)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    printf("True");
    else
    printf("False");
}