#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{	
	char str1[10^100];
	int len,i,m=0,j=0,h,k,l;
	printf("please input a number n(n<=10^100):");
	gets(str);
	len=strlen(str1);
	for(i=0;i<=len-1;i++)
	{
		m+=(int)str1[i]-48;	
	}
	l=m;
	while(l%10!=0)
	{
		j++;
		l/=10;
	}
	for(h=1;h<=j;h++)
	{	
		k=pow(10,j-h);
		switch(m/k)
		{
		case 1:printf("yi ");break;
		case 2:printf("er ");break;
		case 3:printf("san ");break;
		case 4:printf("si ");break;
		case 5:printf("wu ");break;
		case 6:printf("liu ");break;
		case 7:printf("qi ");break;
		case 8:printf("ba ");break;
		case 9:printf("jiu ");break;
		default:printf("ling ");break;
		}
		m=m%k;
	}
	printf("\b");
	printf("\n");	
}
