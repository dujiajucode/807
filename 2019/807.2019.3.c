/*
3. 在主程序中输入10个字符串，调用sort函数进行冒泡排序，
然后在主函数中输出排序结果，其中字符串长度不超过20，
字符串排序方式（按字母序递增用1表示，按字母序递减用0表示）
和待排序的字符串由参数传递给sort函数。
要求自行设计sort函数，在主函数中，输入、输出应有相应的提示。
*/

#include <stdio.h>
#include <string.h>

//1 顺序，-1逆序
void sort(char strs[10][20],int order)
{
    // 按字母序递增用1表示，按字母序递减用0表示

    int i,j;
    for(i=0; i<10-1; i++)
    {
        //第i趟比较
        for(j = 0 ; j<10-i-1; j++)
        {
            //开始进行比较，如果arr[j]比arr[j+1]的值大，那就交换位置
            if(strcmp(strs[j], strs[j+1])==order)
            {
                char temp[20]={'\0'};
                strcpy(temp,strs[j]);
                strcpy(strs[j],strs[j+1]);
                strcpy(strs[j+1],temp);

            }

        }

    }
}




int main()
{
    char strs[10][20];

    int i=0;
    int order=-1;

    for(i=0;i<10;i++){
        printf("请输入第%d个字符串(每个字符串不能超过20个字)\n",i+1);
        scanf("%s",&strs[i]);
    }
    printf("顺序排序请输入1，逆序排序请输入-1\n");
    scanf("%d",&order);


    sort(strs,order);

    for(i=0;i<10;i++){
        puts(strs[i]);
    }



    return 0;
}
