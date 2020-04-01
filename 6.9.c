/*修改练习8，使用一个函数返回计算的结果。*/
#include<stdio.h>
double deal(double input1,double input2)
{
    return ( (input1 - input2) / (input1 * input2) );
}
int main()
{
    double a,b;

    printf("Please enter 2 numble: ");

    while( scanf("%lf %lf",&a,&b) == 2 )
    {
        printf("output = %.2lf.\n",deal(a,b));
        printf("Please enter 2 numble: ");
    }
    return 0;
}
