#include<stdio.h>
int main()
{
    float salary;

    printf("\aEnter your designed monthly salary:");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\t$%.2f a month is $%.2f a year.",salary,salary*12);
    printf("\rGee!\n");

    return 0;
}