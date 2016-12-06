#include<stdio.h>
int is_int_pal(int n);

int is_int_pal(int n)
{
 int i=0,x[100];
 while(n!=0)
{
 x[i]=n%10;
 n/=10;
 i++;
}
 if(x[0]==x[i-1]) return 0;
 else return -1;
}

 int main()
{
 int n;
 scanf("%d",&n);
 printf("%d\n",is_int_pal(n));
 return 0;
}
