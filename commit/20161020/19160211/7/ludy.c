#include <stdio.h>
int main()
{
 int  a,b;
 scanf("%3d",&a);
 int c,d,e;
 c=a/100;
 d=(a-c*100)/10;
 e=a-(c*100+d*10);
 b=e*100+d*10+c;
 printf("%d",b);
 return 0;
}
 
