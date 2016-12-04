#include <stdio.h>
#include <string.h>
int is_int_pal(int n)
{char a[10];
 int i=0;
 for(;n/10!=0;i++)
  {a[i]=n%10;
   n=n/10;}
 a[i]=n;
 int j,flag=0;
 for(i=0,j=strlen(a)-1;j>i;i++,j--)
   if(a[i]!=a[j]) {flag=-1;break;}
 return flag;}
int main()
{int n;
 printf("Please input a number n:");
 scanf("%d",&n);
 if(is_int_pal(n)==0)
   printf("%d is a palindromic number.\n",n);
 else
   printf("%d is not a palindromic number.\n",n);
 return 0;}
