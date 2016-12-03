#include<stdio.h>
int is_int_pal(int n)
{
int i=0,b=n,j;
 while(n!=0)
  {n/=10;i++;}
 int a[i];
 n=b;
for (j=0;j<i;j++)
  {a[j]=n%10;n/=10;}
for (j=0;j<=i/2;j++)
  if (a[j]!=a[i-1-j])
    return 1;
return 0;
}

int main()
{int n;
scanf("%d",&n);
if (is_int_pal(n))
  printf("不是回文数\n");
 else
  printf("是回文数\n");
return 0;
}
