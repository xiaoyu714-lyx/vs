#include<stdio.h>
int main()
{
    char ch;

    printf("Please enter a character.\n");
    scanf_s("%c",&ch);
    printf("The code for %c is %d.",ch,ch);

    return 0;
     

}