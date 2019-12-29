/*
3. 从键盘上输入字符串1，
将字符串1中去除数字字符‘0’~‘9’之后的数字之后的其他字符保留在字符串2中，并输出字符串2.
*/

#include <stdio.h>

int main()
{
    char str1[100]= {'\0'};
    char str2[100]= {'\0'};
    int i,j;

    printf("请输入一行字符串\n");
    gets(str1);

    for(i=0,j=0; str1[i]!='\0'; i++)
        if(!(str1[i]>='0'&&str1[i]<='9'))
            str2[j++]=str1[i];


    printf("去掉0~9后的字符串是\n");
    printf("%s\n",str2);


    return 0;
}
