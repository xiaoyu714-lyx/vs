#include<stdio.h>
#include<string.h>
int main()
{
    char fn[20],ln[20];
    int fnwidth,lnwidth;

    printf("Enter your first name:\n");
    scanf("%s",fn);
    printf("Enter your last name:\n");
    scanf("%s",ln);
    
    fnwidth=strlen(fn);
    lnwidth=strlen(ln);

    printf("%s %s\n",fn,ln);
    printf("%*d %*d",fnwidth,fnwidth,lnwidth,lnwidth);

    return 0;
}