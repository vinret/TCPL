#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
int x;
printf("please put a,b,c,x");
scanf("%d%d%d",&a,&b,&c);
scanf("%d",&x);
if(x>0)
x=x;
else
x=-x;
if(sqrt(x)==4*a/b*c)
printf("yes\n");
else
printf("no\n");
return 0;
}

