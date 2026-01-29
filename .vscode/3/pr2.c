#include<stdio.h>
int main()
{
    char name[20];
    float lenth;

    printf("ENter your name and lenth(cm):\n");
    scanf("%s %f",name,&lenth);
    printf("%s,you are %.3f meter.",name,lenth/100);

    return 0;
}