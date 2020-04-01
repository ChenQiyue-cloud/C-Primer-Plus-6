/*编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写字母。
然后打印数组的所有内容。*/
#include<stdio.h>
int main()
{
    char ch[26];
    int i;

    for ( i=0; i<26; i++ )
    {
        ch[i] = 'a' + i;
        printf("%c\t",ch[i]);
    }
    printf("\n");

    return 0;
}
