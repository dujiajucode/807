//统计元音字母
#include <stdio.h>
#include <string.h>

void countYY(char* str){
    int a=0,e=0,i=0,o=0,u=0,j=0;
    while (str[i]!='\0')
    {
        if(str[i]=='a') a++;
        else if(str[i]=='e') e++;
        else if(str[i]=='i') i++;
        else if(str[i]=='o') o++;
        else if(str[i]=='u') u++;

        i++;
    }
    printf("A %d,E %d, I %d, O %d, U %d\n",a,e,i,o,u);

}


int main(){
    char * str;
    printf("请输入一行字符串\n");
    gets(str);
    countYY(str);

    return 0;
}