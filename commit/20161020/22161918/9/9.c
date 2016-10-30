#include<stdio.h>
int main()
{
   int a,b;
   printf("请读入a,b的值");
   scanf("%d%d",&a,&b);
   a=a^b;
   b=b^a;
   a=a^b;
   printf("a'=%d,b'=%d",a,b);
   
   return 0;
}
