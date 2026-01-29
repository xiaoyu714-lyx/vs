#include<stdio.h>
#include<float.h>
int main()
{
    double a=1.0/3.0;
    float  b=1.0/3.0;

    printf("%.6f,%.6f",a,b);
    printf("\n%.12f,%.12f",a,b);
    printf("\n%.16f,%.16f",a,b);
    printf("\n%d,%d",DBL_DIG,FLT_DIG);

    return 0;
}