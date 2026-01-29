#include<stdio.h>
#define SQUARES 64
int main()
{
    int th=0;
    double num=1;
    while (++th<65)
    {
        printf("%d %lle\n",th,num);
        num=2*num;
    }
    
    return 0;
}