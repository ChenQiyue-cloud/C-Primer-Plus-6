/*Chuckie Lucky 赢得了100万美元（税后），他把奖金存入年利率8%的账户。
在每年的最后一天，Chuckie取出10万美元。编写一个程序，计算需要多少年
后Chuckie会取完账户的钱？*/
#include<stdio.h>
int main()
{
    double money = 100.0;
    int year = 0;

    do
    {
        money = money * 1.08 - 10.0;
        year++;
    } while ( money > 0 );
    printf("It will take %d years.\n",year);

    return 0;
}
