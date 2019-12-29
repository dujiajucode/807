/*
2. 从键盘输入100个人的姓名、性别和年龄，分别统计0~29岁、30~59岁、60以上的男、女人数。
*/

#include <stdio.h>


typedef struct
{
    char name[20];
    int age;
    int sex;
} Human;

void input(Human* list,int max)
{
    int i;
    for(i=0; i<max; i++)
    {
        printf("请输入第%d位的姓名\n",i+1);
        gets(list[i].name);
        printf("请输入第%d位的性别(男性输入1，女性输入0)，年龄，中间用逗号隔开\n",i+1);
        scanf("%d,%d",&list[i].sex,&list[i].age);
        getchar();//清除缓冲区
    }
}



int main()
{
    int i;

    int max=5;

    Human list[max];
    input(list,max);

    int t1m=0;//0~29
    int t2m=0;//30~59
    int t3m=0;//60
    int t1w=0;//0~29
    int t2w=0;//30~59
    int t3w=0;//60

    for(i=0; i<max; i++)
        if(list[i].age<=29)
        {
            if(list[i].sex)
                t1m++;
            else
                t1w++;
        }
        else  if(list[i].age<=59)
        {
            if(list[i].sex)
                t2m++;
            else
                t2w++;
        }
        else  if(list[i].age>60)
        {
            if(list[i].sex)
                t3m++;
            else
                t3w++;
        }



    printf("0~29岁   的男性有%d人，女性有%d人\n",t1m,t1w);
    printf("30~59岁  的男性有%d人，女性有%d人\n",t2m,t2w);
    printf("60岁以上 的男性有%d人，女性有%d人\n",t3m,t3w);




    return 0;
}
