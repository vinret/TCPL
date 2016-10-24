#include<stdio.h>
int main()
{
	int unit,decade,hundred;
	int s;
	scanf("%1d%1d%1d",&hundred,&decade,&unit);
	s=hundred+decade*10+unit*100;
	printf("%d",s);
	return 0;
}
