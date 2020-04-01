/*7.编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
提示：strlen()函数(第4章介绍过)可用于计算数组最后一个字符的下标。*/
#include<stdio.h>
#include<string.h>
int main()
{
    char array[30];
    int length = 0;

    printf("Please enter a character array: ");
    scanf("%s",&array);
    length = strlen(array);

    int i;
    printf("reverse: ");
    for ( i=length; i>0; i-- )
    {
        printf("%c",array[i-1]);
    }
    printf("\n");

    return 0;
}
