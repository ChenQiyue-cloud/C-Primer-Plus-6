/*编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果
在用户输入非数字之前，程序应循环处理用户输入的每对值。*/
#include<stdio.h>
int main()
{
    double a,b;

    printf("Please enter 2 numble: ");

    while( scanf("%lf %lf",&a,&b) == 2 )
    {
        printf("output = %.2lf.\n",(a - b) / (a * b));
        printf("Please enter 2 numble: ");
    }
    return 0;
}
