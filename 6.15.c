/*编写一个程序，读取一行输入，让后把输入的内容倒序打印出来。可以把输入
储存在char类型的数组中，假设每行字符不超过255。回忆一下，根据%c转换说
明，scanf()函数一次只能从输入中读取一个字符，而且在用户按下Enter键时
scanf()会生成一个换行字符(\n)。*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[255];
    int length;

    printf("Please enter a string of characters: ");
    scanf("%s",&ch);
    length = strlen(ch);

    printf("reverse: ");
    int i;
    for ( i=length-1; i>=0; i-- )
    {
        printf("%c",ch[i]);
    }
    printf("\n");
    return 0;
}
