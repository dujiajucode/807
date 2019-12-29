/*
2. 学生的记录由学号、数学和C语言成绩（用整数表示）组成，
输入N名学生的数据，（N值由符号常量确定），
统计C语言分数最高的学生人数
（注意：分数最高的学生可能不止一个），
并输出C语言分数最高的学生人数及其各项数据。
要求输入、输出时，应显示适当的提升信息。
*/

#include <stdio.h>
#define N 5

typedef struct
{
    int no;
    int math;
    int c;

} Student;

void input(Student *list)
{
    int i=0;
    for(i=0; i<N; i++)
    {
        printf("请输入第%d位学生的学号，数学成绩，C语言成绩，用逗号隔开\n",i+1);
        scanf("%d,%d,%d",&list[i].no,&list[i].math,&list[i].c);
    }

}

void count(Student *list)
{
    int i,maxScore=0;

    for(i=0; i<N; i++)
        if(list[i].c>maxScore)
            maxScore=list[i].c;

    printf("C语言最高分学生表\n");
    printf("学号\t数学\tC语言\n");

    for(i=0; i<N; i++)
        if(list[i].c==maxScore)
            printf("%d\t%d\t%d\n",list[i].no,list[i].math,list[i].c);


}

int main()
{
    Student list[N];
    input(list);
    count(list);

    return 0;
}
