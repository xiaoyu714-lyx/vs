#include<stdio.h>
#include<limits.h>    //整型限制
#include<float.h>      //浮点数限制
int main()
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n",INT_MAX);
    printf("Smallest long long:%lld\n",LLONG_MIN);
    printf("One=%d bits on this system.\n",CHAR_BIT);
    printf("Smallest normal float:%e\n",FLT_MIN);
    printf("float precision=%d digits\n",FLT_DIG);
    printf("float epsilon=%e",FLT_EPSILON);

    return 0;
}