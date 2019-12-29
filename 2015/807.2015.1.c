//1. 输入一行字符，统计其中英文单词的个数，单词之间以空格为间隔。

#include <stdio.h>

int main()
{
    char* str;
    int i, count=1;

    printf("请输入一行字符\n");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
        if(str[i]==' ') count++;

    printf("一共有%d个单词\n",count);
	
	return 0;
}
