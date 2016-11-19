#include<stdio.h>
void triangle_judge(int a, int b, int c);

int main()
{
	int a,b,c;
	char triangle;
	scanf("%d %d %d",&a,&b,&c);
	triangle_judge(a,b,c);
	return 0;
}

void triangle_judge(int a,int b,int c)
{
	if(a+b<c||a+c<b||c+b<a)
		printf("No!\n");
	else if (a==b||b==c||a==c)
	{
		if (a==b&&b==c)
			printf("Equilateral triangla.\n");
		else printf("Isosceies triangle.\n");
	}
	else printf("Normal triangle.\n");
}
