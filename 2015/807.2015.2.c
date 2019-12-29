//2. 输入10个雇员的信息（姓名，工资号），安工资号排序输出。要求雇员的信息用结构体，用
//两个函数分别完成10个雇员信息的输入及排序。

#include <stdio.h>

typedef struct
{
    char name[20];
    int no;
} Employer;

void input(Employer* list,int max)
{
    int i;

    for(i=0; i<max; i++)
    {
        printf("请输入第%d个员工的工号，姓名（用逗号隔开）",i+1);
        scanf("%d,%s",&list[i].no,list[i].name);
    }
}

void output(Employer* list,int max)
{
    int i;
    for(i=0; i<max; i++)
        printf("%d\t工号:%d\t姓名：%s\n",i+1,list[i].no,list[i].name);

}

void sort(Employer* list,int max)
{
    int i,j;
    for(i=0; i<max-1; i++) //only need n-1 swaps to move the smallest to the front
    {
        for(j=0; j<max-1; j++)
        {
            if(list[j].no>list[j+1].no)
            {
                Employer t=list[j];
                list[j]=list[j+1];
                list[j+1]=t;
            }
        }
    }

}

int main()
{
    int max=10;
    Employer list[max];
    input(list,max);
    sort(list,max);
    output(list,max);

}
