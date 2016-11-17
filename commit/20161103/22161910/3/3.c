#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int shang=0,yushu=1,sum,D,i=0,j;
   long int A,B;
   char b[10000];
   printf("请输入三个整数：");
   scanf("%ld%ld%d",&A,&B,&D);
   sum=A+B;
   if(sum==0)
   printf("0");
   else
  {
  while(sum!=0)
  {
  yushu=sum%D;
  sum=(sum-yushu)/D;
  b[i++]=yushu+'0';
  }
  for(j=i-1;j>=0;j--)
  printf("%c",b[j]);
 }
return 0;
}
