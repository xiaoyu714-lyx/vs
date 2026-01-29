#include <stdio.h>    //预处理器指令 头文件
int main(void)        //main（）函数  函数头
{                      //花括号里的是函数体
    int num;           /*声明 int是关键字是一种数据类型 num是标识符（变量，函数或其他实体的名称）
                     以大小写字母，数字，下划线来命名标识符或变量名，且第一个字符不能是数字*/
    num=1;             //赋值表达式语句
    
    printf("i am a simple");    //print formattedly格式化打印
    printf(" computer.\n");     //  \n转义序列 换行符    \b（backspace键）
    printf("My favorite number is %d beacause it is first.\n",num);  //%d占位符
   
    getchar();

    return 0;
}
