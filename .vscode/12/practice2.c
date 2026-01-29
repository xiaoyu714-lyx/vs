#include<stdio.h>
int main()
{
    float ch;     //浮点数是float

    printf("Enter a floating-point value:");
    scanf("%f",&ch);

    printf("\nfixed-point notation:%f\n",ch);
    printf("exponential notation:%e",ch);
    printf("\np notation:%a",ch);
    
    return 0;
}