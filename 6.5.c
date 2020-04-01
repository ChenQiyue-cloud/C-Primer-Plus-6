/*编写一个程序，提示用户输入大写字母，使用嵌套循环以下面金字塔型的格式打印字母：
    A
   ABA
  ABCBA
 ABCDBCA
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i=0; i<5; i++ )
    {
        char ch = 'A';  //这是输入'A'来得到输出，是不符合题意的；
        for ( j=0; j<( 5-i-1 ); j++ )  
        {
            printf(" ");
        }
        for ( j=0; j<=i; j++ )
        {
            printf("%c",ch++);
        }
        ch--;
        for ( j=0; j<i; j++ )
        {
            printf("%c",--ch);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char ch = 0;
    
    printf("Please input a letter:");  //输入'E'可得到输出
    scanf_s("%c", &ch);

    int length = ch - 'A' + 1;
    int i,j;
    for ( i = 0; i < length; i++)
    {
        char temp = 'A' - 1;
        for ( j = 0; j < (length - i - 1); j++)
        {
            printf(" ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf("%c", ++temp);
        }
        for ( j = 0; j < i; j++)
        {
            printf("%c", --temp);
        }

        printf("\n");
    }
    return 0;
}
