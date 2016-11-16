#include<stdio.h>
#include<string.h>
int main()
{
  char a[10050],ch;
  printf("请输入一个字符串：");
  scanf("%c",&a);
  int b[260]={0},i,j;
  gets(a);
  for(i=0;i<strlen(a);i++)
  { 
   ch=a[i];
   b[tolower(ch)]++;
   }
  int max=b[0],temp=0;
 {
  for(j='a';j<='z';j++)
  if(b[j]>max)
  {
   max=b[j];
   temp=j;
}
}  
   printf("%c,%d",(char)temp,max);
   return 0;
}
