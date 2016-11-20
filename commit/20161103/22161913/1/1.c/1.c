#include<stdio.h>
#include<string.h>
int main()
{
  int a[4],i,n,k;
  int s=0;
  char c[101];
  gets(c);
  for(k=0;k<strlen(c);k++)
    s=s+((int)c[k]-48);
  if(0==s) printf("ling\n");
  for(n=0;s!=0;n++)
   {
       a[n]=s%10;
       s/=10;
   }
   for(;n>0;n--)
   {
      switch(a[n-1])
         {
             case 0:printf("ling");break;
             case 1:printf("yi");break;
             case 2:printf("er");break;
             case 3:printf("san");break;
             case 4:printf("si");break;
             case 5:printf("wu");break;
             case 6:printf("liu");break;
             case 7:printf("qi");break;
             case 8:printf("ba");break;
             default:printf("jiu");
         }
           if(n>1) printf(" ");
           else printf("\n");
   }
         return 0;
}   
