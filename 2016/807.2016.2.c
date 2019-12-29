/*2. 从键盘输入一个可带空格的字符串，判断该字符串是否为回文（回文指正向读与逆向读相同的字符
串，如abcddcba或abcba等）。如果该字符串是回文，输出“Yes”，否则输出“No”。*/

#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j,res;
    char str[100];


    printf("请输入一个字符串\n");
    gets(str);

    len=strlen(str);
    j=len-1;
    res=1;

    for(i=0; i<=len/2; i++,j--)
    {
        if(str[i]!=str[j])
        {
            res=0;
            break;
        }
    }

    if(res)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;
}
