#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
 int s[1000],i=0;
 while(n>0)
 {
  s[i]=n%10;
  n/=10;
  ++i;
  }
  printf("%d\n",i);


 int flag=0;
 for(int j=0;j<=i/2;++j)
    if(s[j]!=s[i-j-1])
    {
     flag=-1;
     break;
     }
  return flag;
  }

int main()
{
 int n;
 puts("Please enter a number:");
 scanf("%d",&n);
 printf("%d\n",is_int_pal(n));
 return 0;
 }

