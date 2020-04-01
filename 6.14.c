/*编写一个程序，创建两个包含8个元素的double类型数组使用循环提示用
户为第一个数组输入8个值。第二个元素的值设置为第一个数组对应元素的
累积之和。例如：第二个数组的第4个元素是第一个数组前4个元素之和
（利用嵌套循环完成，但是第二个数组的第5个元素是第二个数组的第4个元
素与第一个数组的第5个元素之和，只用一个循环就能完成任务，不需要使
用嵌套循环）。最后，使用循环显示两个数组的内容，每个数组各占一行
且相应元素上下对齐。*/
#include<stdio.h>
int main()
{
    double darray1[8],darray2[8];
    int i;

    printf("Please enter 8 values: ");
    for ( i=0; i<8; i++ )
    {
        scanf("%lf",&darray1[i]);
    }
    darray2[0] = darray1[0];
    for ( i=1; i<8; i++ )
    {
        darray2[i] = darray2[i-1] + darray1[i];
    }

    for ( i=0; i<8; i++ )
    {
        printf("%.2lf\t",darray1[i]);
    }
    printf("\n");
    for ( i=0; i<8; i++ )
    {
        printf("%.2lf\t",darray2[i]);
    }
    
    return 0;
}
