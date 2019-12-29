/*1. 从键盘输入一个整数的百分制成绩，用变量score存储，如果score不在0~100范围内，则输
出“Error
Input!”，并结束程序。否则，将输入的数据转换成“A”、“B”
、“C” 、“D” 、“E”。90分以上为A，80~89为B，70~79为C，60~69 为D，60以下为E，结果复制给
变量grade，并将变量score和grade的值输出到屏幕上。*/

#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("请输入成绩\n");
    scanf("%d",&score);

    if(score>100||score<0)
    {
        printf("Error Input!\n");
    }
    else
    {
        if(score>=90)
            grade='A';
        else if(score>=80)
            grade='B';
        else if(score>=70)
            grade='C';
        else if(score>=60)
            grade='D';
        else
            grade='E';
        printf("成绩%d，等级%c\n",score,grade);
    }






    return 0;
}
