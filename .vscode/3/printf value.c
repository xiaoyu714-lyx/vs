#include<stdio.h>
int main()
{
int bph20=212;
int rv;

rv=printf("%d F is water's boiling point.\n",bph20);    //printf()的返回值
printf("The printf() function printed %d characters.",rv);

    return 0;
}