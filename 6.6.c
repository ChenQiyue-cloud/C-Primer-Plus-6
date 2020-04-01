/*6.编写一个程序打印一个表格，每行打印一个整数、该数的平方、该数的立方。
要求用户输入表格的上下限。使用一个for循环。*/
#include<stdio.h>
int main()
{
    int upper,lower;

    printf("Please enter the lower limit:");
    scanf("%d",&lower);
    printf("Please enter the upper limit:");
    scanf("%d",&upper);

    if ( lower > upper )
    {
        printf("Incorrect input!!\n");
    }
    else
    {
        int i;
        printf("number\tsquare\tcube\n");
        for ( i=lower; i <= upper; i++ )
        {
            printf("%d\t%d\t%d\n",i,i*i,i*i*i);
        }
    }
    return 0;
}
