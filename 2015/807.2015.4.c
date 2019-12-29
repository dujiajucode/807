//4. 编写程序，从键盘输入一串以“#”为结束符的字符串，并写入file.txt中
#include <stdio.h>

int main()
{
    //已经不再考纲中
    char str[100]={'\0'};
    int i=0;
    char s;

    printf("请输入一行字符串，#结束\n");
    while((s=getchar())!='#')
    {
        str[i]=s;
        i++;
    }


    FILE *fp;
    if((fp=fopen("D:\\file.txt","w"))==NULL)
    {
        printf("\nopen file Fail,close!");
        getchar();
    }
    else
    {
        fputs(str,fp);
        fclose(fp);
    }



    return 0;

}
