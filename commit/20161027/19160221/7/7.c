#include <stdio.h>
int quickmod(int a,int b,int c)
{
int n= 1;
a=a%c;
while(b>0)
{ 
if(b%2==1)
   {
   n=(n*a)%c;
   }
b=b/2;
a=(a*a)%c;
   
}
return n;
}

int main()
{
int a,b,c,n;
scanf("%d %d %d",&a,&b,&c);
printf("%d",quickmod(a,b,c));
return 0;
}
