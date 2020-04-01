/*编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。*/
#include<stdio.h>
int main()
{
    int array[8];

    printf("please input 8 integer to array:");
    int i;
    for ( i=0; i<8; i++ )
    {
        scanf("%d",&array[i]);
    }
    printf("reverse: ");
    for ( i=7; i>=0; i-- )
    {
        printf("%d\t",array[i]);
    }
    printf("\n");

    return 0;
}
