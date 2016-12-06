#include<stdio.h>
int is_int_pal(int n)
{
  int num[10],reverse[10],i,j;
  for(i=0;n>0;++i)
  {
    num[i]=n%10;
    n=n/10;
   }
   for(j=0,i=i-1;i>=0;++j,--i)
    reverse[j]=num[i];
   for(i=i+1;i<j;++i)
   {
    if(num[i]!=reverse[i]) break; 
   }
    if(i<j) return -1;
     else return 0;
}
int main()
{
  int x;
  printf("input an integer: ");
  scanf("%d",&x);
  printf("%d\n",is_int_pal(x));
  return 0;
}
