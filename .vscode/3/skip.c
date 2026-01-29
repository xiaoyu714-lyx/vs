#include<stdio.h>
int main()
{
    int n;

    printf("Prlease enter three integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d",n);

    return 0;
}