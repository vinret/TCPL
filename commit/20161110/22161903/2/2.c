#include<stdio.h>
void triangle_judge(int a,int b,int c)
{
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c)printf("等边三角形\n");
		if(a==b&&a!=c||b==c&&b!=a||a==c&&a!=b)printf("等腰三角形\n");
		else printf("普通三角形\n");
	}
	else printf("未构成三角形\n");
}

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	triangle_judge(a,b,c);
	return 0;
}

