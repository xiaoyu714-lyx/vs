#include<stdio.h>

void chofu(int times)    //定义函数
{for(int i=0;
i<times;
i++)

{printf("Smile!");}
}

int main()
{
    chofu(3);
    printf("\n");
    chofu(2);
    printf("\n");
    chofu(1);
}