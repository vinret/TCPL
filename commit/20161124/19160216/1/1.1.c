#include<stdio.h>
int GCD_recursive(int m,int n)
{
 int i;
 while(m%n!=0)
  {
    i=n;
    n=m%n;
    m=i;
  }
 return n;
}

int main()
{
int m,n;
printf("please input two numbers:m n\n");
scanf("%d %d",&m,&n);
printf("zui da gong yue shu is:%d\n",GCD_recursive(m,n));
return 0;
}

