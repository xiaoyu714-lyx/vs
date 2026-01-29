#include<stdio.h>
#include<string.h>
#define DENSITY 62.4         //用c预处理器定义字符常量
int main()
{
    float weight,volume;
    int size,letters;
    char name[40];    //用40个字节储存字符串

    printf("Hi!What your first name?\n");
    scanf("%s",name);   //%s转换说明 处理字符串的输入输出
    printf("%s,what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size=sizeof name;
    letters=strlen(name);           //strlen() stringlength获取字符串长度
    volume=weight/DENSITY;
    printf("Well,%s,your volumn is %2.2f cubic feet.\n",name,volume);
    printf("Also,your first name has %d letters,\n",letters);
    printf("and we have %d bytes to store it.",size);

    return 0;
}