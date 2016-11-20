nclude<stdio.h>
#include<string.h>
int main()
{
   char c[100];
   int a[100],b=0,i=0;
   scanf("%s",c);
   for (i=0;i<strlen(c);i++)
   {
      b=b+(int)c[i]-48;
   }
   i=0;
   while(b!=0)
   {
      a[i]=b%10;
      b/=10;
      i++;
   }
   for (i--;i>=0;i--)
   {
      switch(a[i])
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
      if (i==0) break;
      printf(" ");
   }
   printf("\n");
   return 0;

A
A
A
A
A

