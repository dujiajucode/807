/*
2. 观察并发现下列图形的规律，使用循环语句编写程序，输出该图形


   * * * * * * * 
    * * * * * * * 
     * * * * * * * 
      * * * * * * * 
       * * * * * * * 
        * * * * * * * 
         * * * * * * * 
*/
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (k = 0; k < i; k++)
            printf(" ");
        for (j = 0; j < 7; j++)
            printf("* ");
        printf("\n");
    }
		
	return 0;
}
