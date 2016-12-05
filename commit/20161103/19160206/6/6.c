#include<stdio.h>
//ths work is done by myself
int a(const int n);
int main()
{
 int n;
 scanf("%d",&n);
 int s=a(n);
 if (s) 
printf ("%d!=%d\n",n,s);
 else
printf ("math error\n");
return 0;
}
int a(const int n)
{
int b,c;
if (n>=0)
{ for(b=1,c=1;c<n;c++)
  b=b*c;
return b;}
else
return 0;
}
