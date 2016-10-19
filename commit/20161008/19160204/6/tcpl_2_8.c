/*rightrot(x,n)*/
#include<stdio.h>
int main()
{
 unsigned x;
 int n;

 printf("x=");
 scanf("%o",&x);
 printf("n=");
 scanf("%d",&n);

 x=(x>>n)|(x<<(32-n));

 printf("%o\n",x);

 return 0;
}
