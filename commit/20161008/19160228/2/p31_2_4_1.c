#include <stdio.h>
int main()
{
	int x;
	printf("请输入x的值：");
	scanf("%d", & x);
	printf("%d\n",((x+2)*x+3)*x+1);
	return 0;
}
