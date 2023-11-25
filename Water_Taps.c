#include<stdio.h>
int main()
{
   float x,y,z;
   scanf("%f%f",&x,&y);
   z=1/((1/x)+(1/y));
   printf("%.0f",z);
}