//1. 请编写函数char * fun(char *str , int m)，实现将输入的字符串每个字符“循环左移”m位。例如，
//输入“ABCDE”，则循环左移2位应该输出“CDEAB”，若输入“1234567”，则循环左移3位输
//出“4567123”。在主函数实现输入，调用函数fun，然后输出。

#include <stdio.h>
#include <string.h>

char retstr[100] ;

char * fun(char *str, int m)
{
    int i,j;
   int len=strlen(str);
  //  char newstr[len];
    if(m>0)
    {
        for(i=m,j=0; i<len; i++,j++)
            retstr[j]=str[i];

        for(i=0; j<len; i++,j++)
            retstr[j]=str[i];

       // puts(newstr);
       // retstr=newstr;
    }
    else
    {
      //  puts(str);
       // retstr=str;
    }
    return retstr;
}


int main()
{
    char str[100];
    int n;

    printf("请输入要处理的字符串\n");
    scanf("%s",str);
    printf("请输入循环左移位位数\n");
    scanf("%d",&n);
    puts(fun(str,n));
    return 0;

}
