#include<stdio.h>
#include<string.h>
int main()
{
   char c[100000];
   int i,sum=0,a[100000],x,y;
   fgets(c,100000,stdin);
   for (i=0;i<=strlen(c);i++)
   {
      if ((int)c[i]>=65&&(int)c[i]<=90)
         sum+=(int)c[i]-64;
      if ((int)c[i]>=97&&(int)c[i]<=122)
         sum+=(int)c[i]-96;
   }
   i=0;
   while(sum!=0)
   {
      a[i]=sum%2;
      sum/=2;
      i++;
   }
   for (i--;i>=0;i--)
   {
if (a[i]==0)
         x++;
      if (a[i]==1)
         y++;
   }
   printf("%d %d\n",x,y);
   return 0;
}
