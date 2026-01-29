#include<stdio.h>
int main()
{
    char name[40];
    float dolar=123.55;
    printf("What's your name?\n");
    scanf("%s",&name);
    printf("The %s family just may be $%1.2f dollars richer",name,dolar);

    return 0;
}