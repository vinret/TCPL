#include <stdio.h>
int is_int_pal(int n)
{
int k,t=0,m;
m=n;
while(n!=0)
{k=n%10;
 n=n/10;
 t=t*10+k;
}
if(m==t) return 0;
return -1;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}
