#include<stdio.h>
#include<string.h>
int is_int_pal(int n);

int main()
{
 int n;
 printf("Please input n:");
 scanf("%d",&n);
 if(is_int_pal(n)==0)
  printf("It is int pal.\n");
 else
  printf("It is not int pal.\n");
 return 0;
}

int is_int_pal(int n)
{
 int i,j,str[101];
 if(n==0)
  return 0;
 for(i=0;n!=0;i++)
 {
  str[i]=n%10;
  n/=10;
 }
 j=i-1;
 for(i=0;i<=j/2;i++)
  if(str[i]!=str[j-i])
   return -1;
 return 0;
}
