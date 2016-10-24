#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i;
	char a[100];//数组
	scanf("%d",&i);
	itoa(i,a,2);//用法：itoa(i,num,10);i-需要转换的字符，num-转换后保存字符串的变量，10-转换的进制
	printf("%s %o %x\n",a,i,i);
	return 0;
}

