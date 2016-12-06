#include<stdio.h>
#include<string.h>
void printd(int c);
int main()
{
	int i,sum=0,len,a;
	char str[100];
	fgets(str,100,stdin);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		a=(str[i]-'0');
		sum=sum+a;
	}
	printd(sum);
 } 
 void printd(int c)
{
	if(c==0)
	return;
	int b;
	printd(c/10);
	b=c%10;
	switch(b)
	{
	case 0:printf("ling ");break;
	case 1:printf("yi ");break;
	case 2:printf("er ");break;
	case 3:printf("san ");break;
	case 4:printf("si ");break;
	case 5:printf("wu ");break;
	case 6:printf("lu ");break;
	case 7:printf("qi ");break;
	case 8:printf("ba ");break;
	case 9:printf("qiu ");break;}
 } 
