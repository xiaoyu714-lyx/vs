#include<stdio.h>
#include<string.h>
int main()
{
    char fname[20],lname[20];
    int width;

    width=strlen(fname);      //获取字符串长度
    printf("Enter your first name and last name.\n");
    scanf("%s %s",fname,lname);
    printf("Your first name is \"%s\".your last name is \"%s\".\n",fname,lname);
    printf("\"%20s\",\"%20s\"",fname,lname);
    printf("%*s",width+3,fname);

    return 0;
}