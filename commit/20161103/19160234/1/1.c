#include<stdio.h>
#include<string.h>
int main()
{
    char c[30];
    int i=0,a=0;
    scanf("%s",c);    //输入一个数字，在30位之内，还想输入得更大，可以把数组改大。
	while(c[i]!='\0')  //判断是否读到字符串的结尾。
	{
  		a=a+(c[i]-'0');   //c[i]指定的字符减去字符'0'就是相关的整型数字
  		i++;
  	}                
	printf("%d\n",a);

while(a>0)	
{
	int n=1;
	  while(a/n>10)
	{
		n=n*10;
    }
	switch(a/n)
	{
		case 0 :printf("ling ");break;
		case 1 :printf("yi ");break;
		case 2 :printf("er ");break;
		case 3 :printf("san ");break;
		case 4 :printf("si ");break;
		case 5 :printf("wu ");break;
		case 6 :printf("liu ");break;
		case 7 :printf("qi");break;
		case 8 :printf("ba ");break;
		case 9 :printf("jiu ");break;
	}	
a=a-(a/n)*n;
}
return 0;
}
