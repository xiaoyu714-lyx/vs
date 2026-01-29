/*一个文件包含两个函数*/
#include<stdio.h>
void butler(void); //函数原型   void不会返回值
int main()       //主调函数
{
    printf("i will summon the butler function.\n");
    butler();            //函数调用
    printf("Yes.Bring me some.\n");

    return 0;
}
void butler(void)          //函数定义
{
    printf("you rang,sir\n");
}