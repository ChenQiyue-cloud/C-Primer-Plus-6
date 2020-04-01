/*编写一个程序，创建一个包含8个元素的int类型数组，分别把
数组元素设置为2的前8次幂。使用for循环设置数组元素的值，使
用do while循环显示数组的值。*/
int main()
{
    int array[8];
    int i;
    for ( i = 0; i < 8; i++ )
    {
        array[i] = pow(2, (i + 1));
    }

    i = 0;
    do
    {
        printf("array[%d] = %d\n", i, array[i++]);
    } while ( i < 8 );

    return 0;
}
