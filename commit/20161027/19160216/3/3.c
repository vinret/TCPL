#include <stdio.h>
int main()
{
int a,b,i;
printf ("please input number a(a<=1000):\n"  );
scanf("%d",&a);
for(i=1;;i++) 
{if (a%2==0)
a=a/2;
else 
a=(3*a+1)/2;
if (a==1)
break;
}
printf("%d",i);
return 0;
}

