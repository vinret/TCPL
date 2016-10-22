#include<stdio.h>
void f(int n)
{
if(n) f(n/2);
else return;
printf("%d",n%2);
}
int main()
{
int n;
scanf("%d",&n);
while(1)
{
if(n<0) break;
if(n==0) printf("0");
f(n);
printf("\n");
break;
}
return 0;
}
