#include<stdio.h>
int is_pow_2(int n)
{if(n==1) return 0;
 while(n>2)
 {if (n%2!=0) return 1;
    n/=2;}
return 0;
}

int main()
{
int n;
scanf("%d",&n);
if (is_pow_2(n))
  printf("不是2的幂次方\n");
 else
  printf("是2的幂次方/n");
return 0;
}
