#include<stdio.h>
#include<string.h>
int is_int_pal(const char* str);
int main()
{
		char str[50];

		printf("请输入字符串:");
		scanf("%s",&str);
		printf("输入的字符串为:%s\n",str);

		if(is_int_pal(str))
				printf("%s不是回文串.\n",str);
		else
				printf("%s是回文串.\n",str);

		return 0;
}

int is_int_pal(const char* str)
{
		char i,j;
		int flag=0;
		for(i=0,j=strlen(str)-1;j>i;i++,j--)
				if(str[i]!=str[j])
				{
						flag=-1;
						break;
				}
		return flag;
}

