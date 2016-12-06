#include<stdio.h>
int is_int_pal(int n);
int main()
{
  int a;
  scanf("%d",&a);
  if(is_int_pal(a))
    printf("%d不是回文数\n",a);
  else
    printf("%d是回文数\n",a);
  return 0;
}
int is_int_pal(int n)
{
  int i,j,c[11];
  for(i=0;n!=0;i++)
  {  c[i]=n%10;
     n/=10; }
  for(j=0,i=i-1;i>j;j++,i--)
  {  if(c[j]!=c[i]) return -1; }
  return 0;
}  
