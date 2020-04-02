/*Rabnud博士加入了一个社交圈。起初他有5个朋友，他注意到他的朋友以下面的方式
进行增长第1周少了1个朋友，剩下的朋友数量翻倍；第二周少了两个朋友，剩下朋友
数量翻倍。一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。编写一个程序，计算
并显示Rabnud博士每周朋友的数量。该程序一直运行，直到超过邓巴数(Dunbar's 
number)。邓巴数是粗略估计一个人在社交圈中有稳定关系的成员的最大值，该值大约
是150。*/
#include<stdio.h>
#define Dunbar_NUMBLE 150
int main()
{
    int weeks = 0,friends = 5;

    printf("week\tfriends\n");
    do
    {
        weeks++;
        friends = ( friends - weeks ) * 2;
        printf("%d\t%d\n",weeks,friends);
    } while ( friends < Dunbar_NUMBLE );
    
    return 0;
}
