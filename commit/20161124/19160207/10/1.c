#include<stdio.h>
#include<string.h>
void Reverse(char* str);
int main()
{
		char* str[100];  //怎么输入任意长度的字符串？
		gets(str);
//		puts(str);
		Reverse(str);
		puts(str);
		return 0;
}

void Reverse(char* str)
{
		int p;
		char temp;
		int q=strlen(str)-1;
//		printf("%d\n",q);
		for(p=0;p<q;p++,q--)
		{
				temp=str[p];
				str[p]=str[q];
				str[q]=temp;
		}
}
