#include <stdio.h>
int main()
{
int n;
printf("请输入n(n>3)");
scanf("%d",&n);
if(n%2==0)
printf("%d不是素数",n);
else
{
int i=3,t;
while(i<=n/2+1)
{
t=n%i;
i++;
if(t==0)
break;
}
if(t==0)
printf("%d不是素数",n);
else
printf("%d是素数",n);
}
return 0;
}


