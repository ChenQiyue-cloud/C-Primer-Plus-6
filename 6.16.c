/*Daphne以10%的单利息投资了100美元(也就是说，每年投资获利相当于原始投资的10%)
Deirdre以5%的复合利息投资了100美元(也就是说，利息是当前余额的5%，包含之前的利息)
编写一个程序,计算需要多少年Deirade的投资额才会超过Daphne，并显示那时两人的投资额。*/
#include<stdio.h>
int main()
{
    double money_Daphne = 100.0,money_Deirdre = 100.0;
    int year = 0;

    do
    {
        money_Daphne += 100 * 0.1;
        money_Deirdre *= 1.05;
        year++;
    } while ( money_Deirdre < money_Daphne );
    printf("It will take %d years\nDaphne'money = %.2lf , Deirdre'money = %.2lf\n",year,money_Daphne,money_Deirdre);
    
    return 0;
}
