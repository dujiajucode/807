/*
# 2019

1. 请编写函数fun，函数功能是求出二维数组a周边元素之和，作为函数值返回。例如：

   ```
   1	3	5	7	9
   2	9	9	9	4
   6	9	9	9	8
   1	3	5	7	0
   ```

   则函数值返回为61。在主函数中赋予二维数组（大小为M*N，M、N由符号常量确定）值，
   调用fun函数进行计算，并输出计算结果。
   要求自行设计fun函数，在主函数中，输入、输出时，应显示适当提示信息。
*/

#include <stdio.h>

#define M 4
#define N 5

int fun(int arr[M][N])
{
    int i,j,sum;
    sum=0;
    //第一行，最后一行直接相加
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==0||i==M-1)
                sum+=arr[i][j];
            else if(j==0||j==N-1)
                sum+=arr[i][j];

        }
    }

    return sum;
}

int main()
{
    int i,j;
    int arr[M][N];

    for(i=0; i<M; i++)
        for(j=0; j<N; j++)
        {
            printf("请输入第%d行，第%d列的元素:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    printf("您输入的数组是\n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("数组的周边之和为%d\n",fun(arr));

    return 0;
}
