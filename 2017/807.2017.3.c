/*
3. 编写程序，输入下列学生成绩表中的数据，采用结构体数组存放，输出平均分最高的学生所有信息。

   | name | 语文 | 数学 | 外语 |
   | ---- | ---- | ---- | ---- |
   | ZHAO | 97.5 | 69.0 | 78.0 |
   | QIAN | 80.0 | 93.0 | 87.5 |
   | SUN  | 75.0 | 89.5 | 68.5 |
   | LI   | 72.5 | 68.5 | 54.0 |
*/

#include <stdio.h>

typedef struct
{
    char name[20];
    float Chinese;
    float Math;
    float English;
} Student;


float calcAVG(Student stu)
{
    float count=stu.Chinese+stu.Math+stu.English;
    return count/3;
}

void inputStudent(Student* list,int max)
{
    int i=0;

    for(i=0; i<max; i++)
    {
        printf("请输入第%d位学生的姓名\n",i+1);
        scanf("%s",list[i].name);
        printf("请依次输入第%d位学生的语文成绩，数学成绩，外语成绩。中间用逗号隔开\n",i+1);
        scanf("%f,%f,%f",&list[i].Chinese,&list[i].Math,&list[i].English);
    }
}

int main()
{
    int max,i;
    int maxNo=0;
    float maxScore=0;


    printf("请输入有几位学生\n");
    scanf("%d",&max);

    Student list[max];
    inputStudent(list,max);

    for(i=0; i<max; i++)
    {
        if(calcAVG(list[i])>maxScore)
        {
            maxNo=i;
            maxScore=calcAVG(list[i]);
        }

    }
    printf("平均分最高的同学是%s，平均分为%.1f \n",list[maxNo].name,maxScore);
    printf("语文 %.1f\t 数学 %.1f\t 外语 %.1f \n",list[maxNo].Chinese,list[maxNo].Math,list[maxNo].English);




    return 0;
}
