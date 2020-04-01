/*使用嵌套循环，按下面的格式打印字母：
A
BC
DEF
GHIJ
KLMNO
PQRSTU
如果你的系统不使用以数字顺序编码的代码，请参考练习3的方案解决。
*/
#include<stdio.h>
int main()
{
    char ch = 'A';

    int i,j;
    for ( i=0; i<6; i++ )
    {
        for ( j=0; j<=i; j++ )
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}
