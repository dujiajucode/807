/*
1. 输入一行字符，
分别统计其中英文字母、空格、数字和其他字符的个数，
以回车表示输入结束，最后在屏幕上统计结果。
*/

#include <stdio.h>

int main()
{
    char str[100];
    int abc=0,sp=0,num=0,other=0;
    int i=0;

    printf("请输入一行字符，按回车确认\n");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
        if(str[i]==' ')
            sp++; //空格 32
        else if(str[i]>='0'&&str[i]<='9')
            num++;//0~9 48~57
        else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
            abc++;//A~Z 65~90 a~z 97~122
        else
            other++;



    printf("该行字符包括：\n");
    printf("英文字母:%d个\n",abc);
    printf("空格:%d个\n",sp);
    printf("数字:%d个\n",num);
    printf("其他字符:%d个\n",other);




    return 0;
}
