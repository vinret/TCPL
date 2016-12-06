#include<stdio.h>
#include<string.h>
#define MAX 50
char s[MAX];
int is_str_pal(const char* str);
int main ()
{
	fgets(s,MAX,stdin);
   s[strlen(s)-1]=0;
   if(is_str_pal(s)+1)
      printf("0\n");
   else
      printf("-1\n");
   return 0;
}
int is_str_pal(const char* str)
{
	char i,j;
	int flag=1;
	for(i=0,j=strlen(s)-1;j>i;i++,j--)
		if(s[i]!=s[j])
		{
			flag=-1;
			break;
		}
		return flag;
}

