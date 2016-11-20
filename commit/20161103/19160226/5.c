#include<stdio.h>
int main()
{
	char c;
	int n=0;
	int zero=0, one=0;
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z')
			n=n+c-'a'+1;
		if(c>='A'&&c<='Z')
			n=n+c-'A'+1;
	}

	while(n)
	{
		if(n%2==0)
			zero++;
		else
			one++;
		n/=2;
	}
	printf("%d %d\n",zero,one);
	return 0;
}
