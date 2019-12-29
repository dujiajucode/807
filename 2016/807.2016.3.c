/*3. 从键盘上输入矩阵的阶数n(n<5)，在输入矩阵的各个数据元素，计算矩阵的对角线元素之和sum.
按照下面格式输出该矩阵和sum的值。
例如：n=3时，矩阵为：
1 3 6
3 6 9
6 9 12
sum=19
*/
#include <stdio.h>
int main()
{
    int n,sum;
    int i,j;

    sum=0;
    printf("请输入矩阵阶数");
    scanf("%d",&n);
    int arr[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("请输入第%d行，第%d列的元素",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    //输出
    printf("n=%d时，矩阵为：\n",n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        sum+=arr[i][i];
        printf("\n");
    }



    printf("sum=%d\n",sum);

    return 0;
}
