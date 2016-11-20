#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	triangle_judge(A,B,C);
	return 0;
}
void triangle_judge(int a,int b,int c)
{
	if(a+b<=c||a-b>=c)
		printf("Unable to form.\n");
	else if(a==b||b==c||a==c)
		printf("isosceles triangle.\n");
	else if(a!=b)
		printf("normal triangle.\n");
	else printf("equilateral triangle.\n");
}
