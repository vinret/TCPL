#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char c[1000005];
   printf("请输入一个字符串：");
   scanf("%c",&c);
   gets(c);
   int sum=0,i;
   for(i=0;i<strlen(c);i++)
  { if(tolower(c[i])>='a'&&tolower(c[i])<='z')
   sum +=(tolower(c[i])-'a'+1);
   }
   int count0=0,count1=0;
   while(sum)
{
   if(sum%2==1)
   count1++;
   else
   count0++;
   sum=sum/2;
  }
  printf("%d,%d",count0,count1);
return 0;
}
