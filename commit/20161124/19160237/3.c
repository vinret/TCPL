#include<stdio.h>
int is_str_pal(const char* str)
{
	int i=0,j,m=0;
	while(str[i++]!='\0');
	i=i-2;
	//printf("%d\n",i);
	for(j=0;j<=i/2;j++)
	{	if(str[j]==str[i-j])
		m++;
	}
	//printf("%d %d\n",m,j);
	if(m==j)
		return 0;
	else
		return -1;
}

int main()
{
	char a[100];
	char* str=NULL;
	gets(a);
	str=a;
	printf("%d\n",is_str_pal(str));
	return 0;
}



