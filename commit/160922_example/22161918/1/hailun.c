#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,s;
	printf("请输入 a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);

	if (a+b>c&&a+c>b&&b+c>a);
	{ 
		p=1.0/2*(a+b+c);
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("s=%5.2f\n",s);
	}
	else
		printf("输入数据错误\n");
	return 0;
}
