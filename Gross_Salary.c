#include<stdio.h>
int main()
{
    float basic_salary,DA,HRA,gross_salary;
    scanf("%f",&basic_salary);
    if(basic_salary<=10000)
    {
        DA=basic_salary*80/100;
        HRA=basic_salary*20/100;
        gross_salary=basic_salary+DA+HRA;
        printf("%.2f",gross_salary);
    }
    else if(basic_salary<=20000)
    {
        DA=basic_salary*90/100.0;
        HRA=basic_salary*25/100.0;
        gross_salary=basic_salary+DA+HRA;
        printf("%.2f",gross_salary);
    }
    else
    {
        DA=basic_salary*95/100.0;
        HRA=basic_salary*30/100.0;
        gross_salary=basic_salary+DA+HRA;
        printf("%.2f",gross_salary);
    }

    
}