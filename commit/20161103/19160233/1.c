#include<stdio.h>
#include<string.h>

int main()
{
	char a[101];
	int i,b=0,n;
	int B=1,C;
	gets(a);
	n=strlen(a);
	
	for(i=0;i<n;i++)
		b=b+(a[i]-'0');
	for(B=1;(B*10)<=b;B*=10);
	while(B>=1)
	{
		C=b/B;
		b=b-C*B;
		B=B/10;
		switch(C)
		{
			case 0:printf(" ling");break;
			case 1:printf(" yi");break;
			case 2:printf(" er");break;
			case 3:printf(" san");break;
			case 4:printf(" si");break;
			case 5:printf(" wu");break;
			case 6:printf(" liu");break;
			case 7:printf(" qi");break;
			case 8:printf(" ba");break;
			default:printf(" jiu");
		}
	}
	return 0;
}
