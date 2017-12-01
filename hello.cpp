#include<stdio.h>
int main(void)
{
	printf("Hello,World!\"\n");/*\n是换行符*/
	printf("Good");/*此处没有添加换行符，打印结果是Goodmoning,而不是Good
	                                                                moning*/ 
	printf("moning!");
	return 0;
}
