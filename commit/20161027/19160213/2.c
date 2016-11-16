#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
printf("please put a number n(n>3)\n");
scanf("%d",&n);
for(i=2;i<=sqrt(n);i++)
if(n%i==0)
break;
if(i<sqrt(n))
printf("%d bu shi su shu \n",n);
else 
printf("%d shi su shu\n",n);
return 0;
}
