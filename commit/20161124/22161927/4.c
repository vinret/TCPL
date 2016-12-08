#include<stdio.h>
int is_int_pal(int n)
{
  int m=0,a=n;
  while (n>0)
{
  m=m*10+n%10;
  n=n/10;
}
  if(m==a)return 0;
  else return -1;
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",is_int_pal(n));
		return 0;
}
