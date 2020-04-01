/*考虑下面两个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 +1.0/4.0 + ...
1.0 - 1.0/2.0 + 1.0/3.0 -1.0/4.0 + ...
编写一个程序计算这两个无限序列的综合，直到到达某次数。提示：奇数
个-相乘得-1，偶数个-1相乘得1，让用户交互的输入指定的次数，当用户
输入0或负值时结束输入查看运行100项、1000项、10000项后的总和，是
否发现每个序列都收敛于某值？*/
#include<stdio.h>
int main()
{
    int numble; // 次数
    double output1,output2;

    printf("Please enter the number of calculations: ");
    scanf("%d",&numble);

    while ( numble > 0 )
    {
        output1 = 0;
        output2 = 0;
        int i;
        for ( i=1; i<=numble; i++ )
        {
            output1 += 1.0 / i;
            if ( i % 2 == 0 )
            {
                output2 += 1.0 / i;
            }
            else
            {
                output2 -= 1.0 / i;
            }
        }
        printf("Calculate %d times: 1.0+1.0/2.0+1.0/3.0+1.0/4.0+...is%lf\n",numble,output1);
        printf("Calculate %d times: 1.0-1.0/2.0+1.0/3.0-1.0/4.0+...is%lf\n",numble,output2);
        printf("Please enter the number of calculations: ");
        scanf("%d",&numble);
    }
    printf("Done!\n")
    return 0;
}
